constant = 42
import time
import os

from tensorflow.keras import callbacks
os.environ["TF_CPP_MIN_LOG_LEVEL"] = "3"
import talos
import pandas as pd
import tensorflow as tf
tf.random.set_seed(constant)

import tensorflow.keras as keras
import keras.regularizers as reg

from keras.losses import mean_squared_error, mean_absolute_error
from keras.optimizers import Adam, Nadam, SGD, RMSprop
from keras.activations import relu, tanh, sigmoid, elu
from tensorflow.keras.callbacks import EarlyStopping

import numpy as np
np.random.seed(constant)

import argparse

import skopt
from skopt import BayesSearchCV
from skopt.space import Real, Categorical, Integer

from sklearn.model_selection import train_test_split, RandomizedSearchCV
from sklearn.preprocessing import MinMaxScaler
from scipy.stats import reciprocal, uniform, randint
import joblib
import matplotlib.pyplot as plt

from run_randomised_search import generate_model

import functools
'''
def generate_model(inputSize=3, outputSize=1, first_neuron=30, n_hidden=5, magnifier=1, dropout=0.1, lr=1e-3, first_activation="relu", hidden_activation="relu",last_activation="relu"):
    #********************* Grab the parameter of the model
    #Initialise the model
    model = keras.models.Sequential()

    #Construct the model
    layer = 0
    neuron = first_neuron

    #Loop
    while layer < n_hidden:
        if layer == 0:
            model.add(
                keras.layers.Dense(
                    neuron,
                    name="Input",
                    input_dim = inputSize,
                    activation = first_activation,
                    use_bias= True,
                    kernel_initializer="he_uniform"
                )
            )
        else:
            model.add(
                keras.layers.Dense(
                    neuron, 
                    name = "Layer_%s"%(layer),
                    activation = hidden_activation,
                    use_bias=True,
                    kernel_initializer ="he_uniform"
                )
            ) 

        #*************************** Add dropout after each hidden layer
        model.add(
            keras.layers.Dropout(
                dropout,
                seed=constant
            )
        )

        #*************************** Shrink neuron count for each layer
        neuron = int(magnifier * neuron)
        layer += 1
    
    #*************************** Output layer
    model.add(
        keras.layers.Dense(
            outputSize,
            name="Output",
            activation = last_activation
        )
    )

    #************************** compile
    model.compile(
        optimizer = Adam(lr=lr),loss = "mse", metrics = ["mse"]
    )

    return model
'''
def MyCallBack(optim_result):
    """
    Callback meant to view scores after each epoch while performing bayesian optimization in Skopt
    """
    score = abs(Searcher.best_score_)
    print("best score: %s" % score)
    if score <= 1e-4:
        print('Early stopping!!!!!')
        return True

if __name__ == '__main__':
    #Prep data
    fn_train = "/home/philgun/Documents/coolstuff/coolstuff/ML/script/script/effectiveness_based/data/training_data_discharging_equilibrium.csv"

    fn_test = "/home/philgun/Documents/coolstuff/coolstuff/ML/script/script/effectiveness_based/data/test_data_discharging_equilibrium.csv"

    df = pd.read_csv(fn_train)
    
    df_test = pd.read_csv(fn_test)
    
    print(df,df_test)

    #**************************Separate X and y
    X = df[df.columns[0:-1]].to_numpy()
    y = df[df.columns[-1]].to_numpy().reshape(-1,1)

    #**************************Normalise the data
    mmx = MinMaxScaler().fit(X)
    mmy = MinMaxScaler().fit(y)
    
    X = mmx.transform(X)
    y = mmy.transform(y)

    #**************************Normalise the X_test
    X_test = df_test[df_test.columns[0:-1]].to_numpy()
    X_test = mmx.transform(X_test)
    y_test = df_test[df_test.columns[-1]].to_numpy().reshape(-1,1)

    #Search space
    p = {
        'first_neuron': Integer(3,300), 
        'n_hidden' : Integer(1,5),
        'magnifier': Real(1e-2,1), 
        'dropout' : Real(1e-3,0.49), 
        'lr': Real(3e-4,3e-2),
        'first_activation' : Categorical(["relu","sigmoid","elu","tanh"]),
        'hidden_activation' : Categorical(["relu","sigmoid","elu","tanh"]),
        'last_activation' : Categorical(["relu","sigmoid","elu","tanh"]),
        'regulariser': Categorical([reg.l1, reg.l2, reg.l1_l2, None]),
        'l1':Real(0,1e-1),
        'l2':Real(0,1e-1)
    }       

    #************************** Wrap generate_model in keras wrappers
    keras_wrapper = keras.wrappers.scikit_learn.KerasRegressor(generate_model)

    #************************** Instantiate search
    Searcher = BayesSearchCV(
        keras_wrapper,
        p,
        n_iter = 500,
        n_jobs=6,
        cv = 5,
        scoring='neg_mean_squared_error'
    )

    #**************************Training time
    now = time.time()
    result = Searcher.fit(X,y, callback=MyCallBack)

    print(
        "Optimisation time : %s s"%(time.time() - now)
    )

    print(
        "\n#######################################################################\n"
    )

    print(
        "Best params: %s"%(result.best_params_)
    )

    print(
        "Best score: %s"%(result.best_score_)
    )

    print(
        "Best estimator: %s"%(result.best_estimator_)
    )

    print(
        "\n#######################################################################\n"
    )

    fig,ax = plt.subplots()
    y_pred = mmy.inverse_transform(result.predict(X_test).reshape(-1,1))
    from sklearn.metrics import r2_score
    
    ax.scatter(
        y_test, y_pred, s= 1, c="red"
    )
    ax.set_xlabel("Test data")
    ax.set_ylabel("Prediction")
    ax.set_title(
        "Test vs Prediction. R2 : %.6f"%(r2_score(y_test, y_pred))
    )
    fig.savefig("fig_test_vs_pred_bayes.png")
   
    print(
        "--------------------------------------Save the best model as pkl file----------------------------------------"
    )
    joblib.dump(result.best_estimator_,"best_model_bayesian_search.pkl")

    
