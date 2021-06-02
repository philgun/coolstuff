constant = 42
import talos
import pandas as pd
import tensorflow as tf
tf.random.set_seed(constant)

import tensorflow.keras as keras
import keras.regularizers.l1 as L1_reg
import keras.regularizers.l2 as L2_reg
import keras.regularizers.l1_l2 as L1L2_reg

from keras.losses import mean_squared_error, mean_absolute_error
from keras.optimizers import Adam, Nadam, SGD, RMSprop
from keras.activations import relu, tanh, sigmoid, elu

import numpy as np
np.random.seed(constant)

from talos.utils import lr_normalizer

import argparse

def model(x_train, y_train, x_val, y_val, p):
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
        lr=lr_normalizer(
            p["lr"],
            p["optimiser"]
        )
    )

    #************************** Grab the loss function
    loss = p["loss"]
    
    #********************* Get the regulariser with its expected factor
    kernel_regulariser = p["kernel_reg"]
    if kernel_regulariser == L1_reg:
        regulariser = kernel_regulariser(l1=p["alpha_l1"])
    elif kernel_regulariser == L2_reg:
        regulariser = kernel_regulariser(l2=p["alpha_l2"])
    elif kernel_regulariser == L1L2_reg:
        regulariser = kernel_regulariser(l1=p["alpha_l1"],l2=p["alpha_l2"])


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
                    name = "Layer_%s"%(layer + 1)
                    activation=hiddenlayeractivation,
                    kernel_initializer ="he_uniform",
                    use_bias=True,
                    kernel_regularizer = regulariser
                )
            ) 
        layer += 1

        #*************************** Add dropout after each hidden layer
        model.add(backend
            Dropout(
                dropout,seed=constant
            )
        )

        #*************************** Shrink neuron count for each layer
        nCount = nCount * nShrink
    
    #*************************** Output layer
    model.add(
        keras.layers.Dense(
            y_train.shape[1]
            name="Output",
            activation = lastactivation,
            kernel_regularizer = regulariser
        )
    )

    #************************** compile
    model.compile(
        optimizer = opt,loss = loss, metric = ["mae","mape"]
    )

    #************************** set epsilon = 1 such that the MAPE value is not sky-rocketting
    keras.backend.set_epsilon(1)

    #************************* train
    history = model.fit(
        x_train, y_train,
        batch_size = bSize,
        epochs = epochs,
        verbose = 0,
        validation_data = [x_val, y_val]
    )

    return hist, model

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

    


    