constant = 42
import os
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


def tank_model(x_train, y_train, x_val, y_val, p):
    #Initialise the model
    model = keras.models.Sequential()

    #Grab the optimised parameters
    nPercent = p["nPercent"]
    nCount = nPercent * 50
    nShrink = p["nShrink"]
    maxLayer = p["maxLayer"]
    minNeuron = p["minNeuron"]
    firstactivation = p["first_activation"]
    hiddenlayeractivation = p["hidden_activation"]
    lastactivation = p["last_activation"]
    dropout = p["dropOut"]
    bSize = p["batchSize"]
    epochs = p["epochs"]
    
    #************************** Initialise the optimiser
    opt = p["optimiser"](
        lr=talos.utils.lr_normalizer(
            p["lr"],
            p["optimiser"]
        )
    )

    #************************** Grab the loss function
    loss = p["loss"]
    
    #********************* Get the regulariser with its expected factor
    kernel_regulariser = p["kernel_reg"]
    if kernel_regulariser == reg.l1:
        regulariser = kernel_regulariser(l1=p["alpha_l1"])
    elif kernel_regulariser == reg.l2:
        regulariser = kernel_regulariser(l2=p["alpha_l2"])
    elif kernel_regulariser == reg.l1_l2:
        regulariser = kernel_regulariser(l1=p["alpha_l1"],l2=p["alpha_l2"])

    layer = 0

    #Start the loop 
    while nCount > minNeuron and layer < maxLayer:
        #************************* The first (0th) hidden layer needs an input input_dim(neuronCount)
        if layer == 0:
            model.add(
                keras.layers.Dense(
                    nCount,
                    name="Input",
                    input_dim = x_train.shape[1],
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
            y_train.shape[1],
            name="Output",
            activation = lastactivation,
            kernel_regularizer = regulariser
        )
    )

    #************************** compile
    model.compile(
        optimizer = opt,loss = loss, metrics = ["mae","mape"]
    )

    #************************** set epsilon = 1 such that the MAPE value is not sky-rocketting
    keras.backend.set_epsilon(1)

    #************************** Initialise early stopping
    monitor = EarlyStopping(
        monitor="val_mape",
        mode='min', 
        min_delta=0.01,
        patience=500,
        restore_best_weights=True
    )

    #************************* train
    out = model.fit(
        x_train, y_train,
        batch_size = int(bSize),
        epochs = int(epochs),
        verbose = 0,
        validation_data = (x_val, y_val),
        callbacks = [monitor]
    )

    return out, model

if __name__ == "__main__":
    verbose = 0

    parser = argparse.ArgumentParser()

    parser.add_argument(
        "--mode", help = "either charging or discharging. Use 'charging' for charging and 'discharging' for discharging", type=str
    )

    args = parser.parse_args()

    mode = args.mode

    #************************************* Pick which mode - discharging or charging
    if mode.lower() == "discharging":
        fntrain = "train_data_discharging.csv"
        fntest = "test_data_discharging.csv"
        wd = "./trained_model/discharging"
    elif mode.lower() == "charging":
        fntrain = "train_data_charging.csv"
        fntest = "test_data_charging.csv"
        wd = "./trained_model/charging"
    else:
        raise ValueError("Valid mode is only charging or discharging (case insensitive). Your value : %s"%(mode))
    
    df_train = pd.read_csv(fntrain)
    df_test = pd.read_csv(fntest)

    X = df_train[
        df_train.columns[0:-1]
    ].to_numpy()

    y = df_train[
        df_train.columns[-1]
    ].to_numpy().reshape(-1,1)

    #Start optimisation
    p = {
        'nPercent':(0,1,10),
        'nShrink':(0,1,10),
        'maxLayer': [1,2,4,6],
        'minNeuron': [2],
        'first_activation':[relu, tanh, sigmoid, elu],
        'hidden_activation': [relu, tanh, sigmoid, elu],
        'last_activation' : [relu, tanh, sigmoid, elu],
        'dropOut':(0,0.5,10),
        'batchSize':[32,64,128,256],
        'epochs':[1000,2500,5000],
        'optimiser': [Adam, Nadam, SGD, RMSprop],
        'lr':[1e-4,1e-3,1e-2],
        'loss':['mse','mae'],
        'kernel_reg':[reg.l1, reg.l2, reg.l1_l2],
        'alpha_l1':(1e-4,1e-3,1e-2,1e-1),
        'alpha_l2':(1e-4,1e-3,1e-2,1e-1)
    }

    scan_object = talos.Scan(
        X,y,params=p,model=tank_model,experiment_name="0D_dynamic_tank",fraction_limit = 0.0001
    )
