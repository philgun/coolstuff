constant = 42
import sys
sys.path.append("/home/philgun/Documents/coolstuff/coolstuff/ML/script/script/RBF")
from rbf import Data
from sklearn.preprocessing import PolynomialFeatures as poly

import tensorflow as tf
tf.config.run_functions_eagerly(True)
tf.get_logger().setLevel(3)

from tensorflow.keras import optimizers, backend, Model, metrics, losses, Input, layers
from tensorflow import keras

import pandas as pd
import joblib

import numpy as np

from sklearn import linear_model

import matplotlib.pyplot as plt

import seaborn as sns

from gplearn.genetic import SymbolicRegressor
from gplearn.functions import make_function
from sympy import *

from sklearn.metrics import r2_score, mean_squared_error

import warnings
warnings.filterwarnings('ignore')

import os
os.environ["PYTHONWARNINGS"] = "ignore"

import timeit


def power(x,y):
    f = x**y
    with warnings.catch_warnings():
        warnings.simplefilter("ignore")
    return f

def power_2(x):
    f = x**2
    return f

class LearnerLayer(layers.Layer):
    '''
    Custom layer using keras. The layer is to do matrix multiplication
    '''
    def __init__(self, input_dim, units):
        super().__init__()

        initval_w = tf.random_normal_initializer()
        initval_b = tf.random_normal_initializer()
        
        #Add weight and bias
        self.w = tf.Variable(
            initial_value = initval_w(
                shape=(input_dim, units)
            ),
            trainable=True
        )

        self.b = tf.Variable(
            initial_value = initval_b(
                shape=(units,)
            ),
            trainable=True
        )

    #Linear Operator
    def call(self,inputs):
        out = tf.matmul(inputs, self.w) + self.b
        return out

class SparseRegressor(keras.Model):
    def __init__(self, input_dim):
        super().__init__()
        self.input_dim = input_dim

        self.hiddenlayers = []

        initval_w = tf.random_normal_initializer()
        
        #Add weight
        self.w = tf.Variable(
            initial_value = initval_w(
                shape=(self.input_dim, 1)
            ),
            trainable=True
        )

    def call(self, X):    
        out = tf.matmul(X, self.w)
                       
        return out

    def model(self):
        '''
        This method is the workaround to show the outputshape of each layer. If not using this, since we are implementing keras subclassing, the output for each layer is always showed as "multiple"
        '''
        x = keras.Input(shape=(self.input_dim))
        return keras.Model(inputs=[x], outputs=self.call(x))

    def compile(self, optimizer, loss, metrics):
        super().compile()

        #Assign the opt and loss func
        self.optimizer = optimizer
        self.loss = loss
        self.met = metrics

    def train_step(self,data):
        X, y = data

        #Forward pass under the tape will be recorded for back-prop
        with tf.GradientTape() as tape:
            #Forward pass
            y_pred = self(X)

            #Compute L2 loss
            loss = self.loss(y,y_pred)
           
        training_vars = self.trainable_variables

        #Get the gradient - d(loss) / d(training_vars)
        grad = tape.gradient(loss, training_vars)

        #Apply the gradient descent
        self.optimizer.apply_gradients(
            zip(grad, training_vars)
        )

        #Update metrics
        self.met.update_state(y, y_pred)

        return {"loss" : loss, "metric" : self.met.result()}

    def test_step(self,data):
        X,y = data

        #Forward pass
        y_pred = self(X)

        #Compute L2 loss
        loss = self.loss(y,y_pred)

        #Update the metric
        self.met.update_state(y, y_pred)
        
        return {"loss" : loss, "metric": self.met.result() }

if __name__ == '__main__':
    f = "/home/philgun/Documents/coolstuff/coolstuff/ML/script/script/RBF/data/data.mat"
    data = Data()
    df = data.generate_data(f)

    df = df[
        ["der_hf_2","T_f_2","T_f_1","T_f_3","T_s_2","u_flow"]
    ]

    print(df)

    X = df[df.columns[1:]].to_numpy()
    y =  df[df.columns[0]].to_numpy().reshape(-1,1)

    power = make_function(function=power, name="power", arity=2)
    power_2 = make_function(function=power_2, name="power_2", arity=1)

    function_set = [
        "add", "sub", "mul", "div", "inv", "sqrt","log",
        power_2
    ]

    converter = {
        'add': lambda x, y : x + y,
        'sub': lambda x, y : x - y,
        'mul': lambda x, y : x*y,
        'div': lambda x, y : x/y,
        'neg': lambda x    : -x,
        'inv': lambda x: 1/x,
        'sqrt': lambda x: x**0.5,
        'log': lambda x: log(x),
        'power_2': lambda x: x*x,
        'power_3': lambda x: x**3,
        'power_4': lambda x: x**4,
        'power': lambda x, y : x**y
    }

    SR = SymbolicRegressor(
        population_size=5000,
        generations=500,
        tournament_size=1000,
        const_range=(-1,1),
        init_method='full',
        function_set=function_set,
        metric="mse",
        stopping_criteria=1e-4,
        p_crossover=0.7, 
        p_subtree_mutation=0.1,
        p_hoist_mutation=0.05, 
        p_point_mutation=0.1,
        max_samples=0.9,
        verbose=1,
        feature_names=df.columns[1:].to_list(),
        parsimony_coefficient=1e-4,
        random_state=constant,
        n_jobs = -1
    )

    #Train
    tic = timeit.default_timer()

    SR.fit(
        X, y
    )
    toc = timeit.default_timer()
    
    print(
        "Training time: %s s"%(toc - tic)
    )
    
    #Dump the trained regressor
    joblib.dump(SR,"./TrainedRegressor.pkl")

    #Print-out the regression formula
    formula = sympify(
        (SR._program), 
        locals=converter
    )

    #Print formula, R2 and save it as a txt
    print("Formula: ", formula)

    with open("./formula.txt","w") as f:
        f.write(str(formula))

    y_pred = SR.predict(X).reshape(-1,1)

    #Dump y_pred vs y_test
    df = pd.DataFrame()
    df["y_test"] = y[:,0]
    df["y_pred"] = y_pred[:,0]
    df.to_csv("./TestvsPred.csv",index=False)

    #Calculate G-O-F (R2 and RMSE)
    R2 = r2_score(y_pred, yn)
    RMSE = mean_squared_error(y_pred, y,squared=False)

    #Plot
    fig,ax = plt.subplots()
    ax.scatter(y, y_pred)
    ax.set_xlabel("dhp/dt test [J/kg⋅s]")
    ax.set_ylabel("dhp/dt prediction [J/kg⋅s]")
    ax.set_title("R$^2$ = %s, RMSE = %s"%(R2, RMSE))
    plt.show()

    '''
    #Start from discretisation 2
    for i in range(2,3):
        data = df[
            ["der_hf_%s"%i, "T_f_%s"%(i), "T_f_%s"%(i-1), "T_f_%s"%(i+1), "T_s_%s"%(i),"u_flow"]
        ]

        p
        
        X = data[data.columns[1:]]
        y = data[data.columns[0]].to_numpy().reshape(-1,1)

        fnames = X.columns.to_list()
    
        p = poly(degree=2,interaction_only=False)
        p.fit(
            X
        )
        X = p.transform(X)

        feat_names = p.get_feature_names(fnames)
        feat_names[0] = "constant"

        df_exp = pd.DataFrame(
            X,columns=feat_names
        )

        print(df_exp)

        model = SparseRegressor(len(feat_names))

        optimizer = optimizers.Adam(lr=1e-3)
        metrics = metrics.MeanAbsolutePercentageError(name="MAPE")

        model.compile(
            optimizer=optimizer,
            loss = losses.MeanSquaredError(),
            metrics = metrics
        )

        backend.set_epsilon(1) 

        history = model.fit(
            X,y, 
            batch_size=int(X.shape[0]/600),
            epochs = 1000
        )

        model.save("./SparseReg")

        with open('weight.npy', 'wb') as f:
            np.save(f,model.w.numpy())
        
        model = linear_model.Lasso(alpha=0.1).fit(X,y)
        
        for i,c in enumerate(model.coef_):
            print(
                "%s coeff: %s"%(feat_names[i],c)
            )
        
        print(model.score(X,y))
        y_pred = model.predict(X)

        plt.scatter(y,y_pred)
        plt.xlim(y.min(),y.max())
        plt.ylim(y.min(),y.max())
        plt.show()
    '''

        
