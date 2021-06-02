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
from skopt.space import Real, Categorical, Integer

from sklearn.model_selection import train_test_split, RandomizedSearchCV
from sklearn.preprocessing import MinMaxScaler
from scipy.stats import reciprocal, uniform, randint
import joblib
import matplotlib.pyplot as plt

def generate_model(inputSize, outputSize, nPercent, nShrink, maxLayer, minNeuron, first_activation, hidden_activation, last_activation, dropOut, batchSize, epochs, optimiser, lr, loss, kernel_reg, alpha_l1, alpha_l2):
    #********************* Grab the parameter of the model
    #Initialise the model
    model = keras.models.Sequential()

    #Grab the optimised parameters
    inputsize = inputSize
    outputsize = outputSize
    nPercent = nPercent
    nCount = int(nPercent * 100)
    nShrink = nShrink
    maxLayer = maxLayer
    minNeuron = minNeuron
    firstactivation = first_activation
    hiddenlayeractivation = hidden_activation
    lastactivation = last_activation
    dropout = dropOut
    bSize = batchSize
    epochs = epochs
    
    #************************** Initialise the optimiser
    opt = optimiser(
        lr= lr
    )

    #************************** Grab the loss function
    loss = loss
    
    #********************* Get the regulariser with its expected factor
    kernel_regulariser = kernel_reg

    if kernel_regulariser == reg.l1:
        regulariser = kernel_regulariser(l1=alpha_l1)
    elif kernel_regulariser == reg.l2:
        regulariser = kernel_regulariser(l2=alpha_l2)
    elif kernel_regulariser == reg.l1_l2:
        regulariser = kernel_regulariser(l1=alpha_l1,l2=alpha_l2)

    layer = 0

    #Start the loop 
    while nCount > minNeuron and layer < maxLayer:
        #************************* The first (0th) hidden layer needs an input input_dim(neuronCount)
        if layer == 0:
            model.add(
                keras.layers.Dense(
                    nCount,
                    name="Input",
                    input_dim = inputsize,
                    activation = firstactivation,
                    use_bias= True,
                    kernel_initializer="he_uniform",
                    kernel_regularizer= regulariser
                )
            )
        else:
            model.add(
                keras.layers.Dense(
                    nCount, 
                    name = "Layer_%s"%(layer + 1),
                    activation=hiddenlayeractivation,
                    kernel_initializer ="he_uniform",
                    use_bias=True,
                    kernel_regularizer = regulariser
                )
            ) 

        layer += 1

        #*************************** Add dropout after each hidden layer
        model.add(
            keras.layers.Dropout(
                dropout,
                seed=constant
            )
        )

        #*************************** Shrink neuron count for each layer
        nCount = nCount * nShrink
    
    #*************************** Output layer
    model.add(
        keras.layers.Dense(
            outputsize,
            name="Output",
            activation = lastactivation,
            kernel_regularizer = regulariser
        )
    )

    #************************** compile
    model.compile(
        optimizer = opt,loss = loss, metrics = ["mae","mse"]
    )

    return model

if __name__ == '__main__':
    #Prep data
    df = pd.read_csv("train_data_discharging.csv")
    df = df.drop(columns="T_p_rep")
    print(df)

    X = df[df.columns[0:-1]].to_numpy()
    y = df[df.columns[-1]].to_numpy().reshape(-1,1)

    X_train, X_valid, y_train, y_valid = train_test_split(X,y,test_size=0.3,random_state=constant)

    mmx = MinMaxScaler().fit(X_train)
    mmy = MinMaxScaler().fit(y_train)
    
    X_train = mmx.transform(X_train)
    y_train = mmy.transform(y_train)

    X_valid = mmx.transform(X_valid)
    y_valid = mmy.transform(y_valid)

    df_test = pd.read_csv("test_data_discharging.csv")
    df_test = df_test.drop(columns="T_p_rep")
    X_test = df_test[df_test.columns[0:-1]].to_numpy()
    y_test = df_test[df_test.columns[0:-1]].to_numpy().reshape(-1,1)
    X_test = mmx.transform(X_test)

    '''
    https://towardsdatascience.com/hyperparameter-optimization-with-scikit-learn-scikit-opt-and-keras-f13367f3e796
    '''
    '''
    keras_param_space = {
        'nPercent':Real(0,1),
        'nShrink':Real(0,1),
        'maxLayer': Integer(1,10),
        'minNeuron': Integer(2,3),
        'first_activation':Categorical([relu, tanh, sigmoid, elu]),
        'hidden_activation': Categorical([relu, tanh, sigmoid, elu]),
        'last_activation' : Categorical([relu, tanh, sigmoid, elu]),
        'dropOut':Real(0,0.5),
        'batchSize':Categorical([32,64,128,256]),
        'epochs':Integer(500,5000),
        'optimiser': Categorical([Adam, Nadam, SGD, RMSprop]),
        'lr':Real(1e-4,1e-1),
        'loss':Categorical(['mse','mae']),
        'kernel_reg':Categorical([reg.l1, reg.l2, reg.l1_l2]),
        'alpha_l1':Real(1e-4,1e-1),
        'alpha_l2':Real(1e-4,1e-1)
    }
    '''

    p = {
        'inputSize':[X_train.shape[1]],
        'outputSize':[y_train.shape[1]],
        'nPercent':uniform(1e-3,1),
        'nShrink':uniform(1e-3,1),
        'maxLayer': [10],
        'minNeuron': [2],
        'first_activation':(relu, tanh, sigmoid, elu),
        'hidden_activation': (relu, tanh, sigmoid, elu),
        'last_activation' : (relu, tanh, sigmoid, elu),
        'dropOut':uniform(1e-3,0.5),
        'batchSize':(32,64,128,256),
        'epochs':(1000,2500,5000),
        'optimiser': (Adam, Nadam, SGD, RMSprop),
        'lr':uniform(1e-5,1e-3),
        'loss':('mse','mae'),
        'kernel_reg':(reg.l1, reg.l2, reg.l1_l2),
        'alpha_l1':uniform(1e-4,1e-1),
        'alpha_l2':uniform(1e-4,1e-1)
    }

    #************************** Initialise early stopping
    monitor = EarlyStopping(
        monitor="val_mse",
        mode='min', 
        min_delta=1e-3,
        patience=50,
        restore_best_weights=False
    )

    #************************** Wrap generate_model in keras wrappers
    keras_wrapper = keras.wrappers.scikit_learn.KerasRegressor(generate_model)

    #************************** Instantiate search
    Searcher = RandomizedSearchCV(
        keras_wrapper,
        p,
        n_iter = 500,
        random_state= constant,
        n_jobs=6,
        cv = 5,
        verbose=0,
        scoring='neg_mean_squared_error',
        error_score='raise'
    )

    now = time.time()
    result = Searcher.fit(
        X_train,y_train,
        validation_data=(X_valid,y_valid),
        callbacks = [monitor]
    )
    print(
        "Optimisation time : %s s"%(time.time() - now)
    )

    fig,ax = plt.subplots()
    y_pred = mmy.inverse_transform(result.predict(X_test))
    from sklearn.metrics import r2_score
    
    ax.scatter(
        y_test, y_pred, s= 1, c="red"
    )
    ax.set_xlabel("Test data")
    ax.set_ylabel("Prediction")
    ax.set_title(
        "Test vs Prediction. R2 : %.6f"%(r2_score(y_test, y_pred))
    )
    fig.savefig("fig_test_vs_pred.png")

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
        "\n#######################################################################\n"
    )
    
    print(
        "--------------------------------------Save the best model as pkl file----------------------------------------"
    )
    joblib.dump(result,"trained_object.pkl")


