constant=42

import logging, os,shutil,time,functools
logging.disable(logging.WARNING)
os.environ["TF_CPP_MIN_LOG_LEVEL"] = "3"

import warnings
warnings.filterwarnings("ignore",category =RuntimeWarning)

import numpy as np
np.random.seed(constant)
import tensorflow as tf
tf.random.set_seed(constant)
tf.config.run_functions_eagerly(True)
tf.get_logger().setLevel(3)

import numpy as np
import pandas as pd
import glob
import os
import traceback

from tensorflow import keras
import keras

import pickle

from tensorflow.keras import backend, initializers, optimizers
from tensorflow.keras.models import Sequential
from tensorflow.keras.layers import Dense, Dropout
from tensorflow.keras.activations import relu, tanh, sigmoid
from tensorflow.keras.callbacks import EarlyStopping

from sklearn.preprocessing import MinMaxScaler
from sklearn.metrics import mean_squared_error, r2_score
from sklearn.model_selection import train_test_split
from sklearn.utils import resample
from matplotlib import pyplot as plt

import seaborn as sns
from ann_visualizer.visualize import ann_viz
from joblib import dump,load

from dynamicTankNewApproach import evaluate, train_test_validation_split

def genModel(ar):
    model = Sequential()
    inputdim = ar[0]

    model.add(
        Dense(
            ar[1],
            activation="relu", 
            kernel_initializer="he_uniform",
            use_bias=True,
            input_dim=inputdim,
        )
    )

    for r in ar[2:len(ar)-1]:
        model.add(
            Dense(
                r,
                activation="relu", 
                kernel_initializer="he_uniform",
                use_bias=True
            )
        )

    model.add(
        Dense(
            ar[-1],
            activation="relu", 
            kernel_initializer="he_uniform",
            use_bias=True
        )
    )

    return model

def eval(model, X_test, y_test, dt, mmy, y_init, plot=True):
    dy_dt_pred = model.predict(X_test)
    dy_dt_pred = mmy.inverse_transform(dy_dt_pred)
    y_pred = dy_dt_pred * dt.reshape(-1,1) + y_init

    print(y_pred)

    res = mean_squared_error(y_test, y_pred)

    if plot == True:    
        fig,ax = plt.subplots(1,2, figsize=(15,10))
        ax[0].scatter(
            y_test[:,0],y_pred[:,0], label = "filler"
        )
        ax[1].scatter(
            y_test[:,1],y_pred[:,1], label = "fluid"
        )
        ax[0].legend()
        ax[1].legend()

        ax[0].set_title("Filler")
        ax[0].set_xlabel("Test")
        ax[0].set_ylabel("Prediction")

        ax[1].set_title("Fluid")
        ax[1].set_xlabel("Test")
        ax[1].set_ylabel("Prediction")
        fig.suptitle("45° Plots between prediction vs test data. MSE: %s"%(round(res,3)))
        fig.savefig("./simulation_tank/fig/res2.png")

        plt.show()

    return res

if __name__ == '__main__':
    df_master = load("/home/philgun/Documents/coolstuff/coolstuff/ML/script/script/simulation_tank/df_downsampled.pkl")
    df_master["der_hp"] = (df_master.target_hp - df_master.hp)/df_master.dt
    df_master["der_hf"] = (df_master.target_hf - df_master.hf)/df_master.dt

    df_test_test = df_master[int(0.9*df_master.shape[0]):]

    df_master = df_master.drop(columns=["target_hp","target_hf"])
    featurenames = df_master.columns[1:-2]
    labelnames = df_master.columns[-2:]

    X_train, X_valid, y_train, y_valid, df_test, mmx, mmy = train_test_validation_split(df_master, featurenames, labelnames, test_size=0.2)

    X_train, X_valid = X_train.drop(columns=["dt"]), X_valid.drop(columns=["dt"])

    '''
    # IN    --      H1      --      H2      --      H3      --      OUT
    # 14    --      20      --      20      --      20      --      2
    architectures = [14,20,20,20,2]
    model = genModel(architectures)
    model.summary()

    #initialise the metrics and optimizer and compile the model
    metrics = keras.metrics.MeanAbsolutePercentageError(name="MAPE")
    optimizer = optimizers.Adam(lr=1e-3)

    #Compile the model
    model.compile(
        optimizer=optimizer,
        loss = keras.losses.MeanSquaredError(),metrics=metrics
    )

    backend.set_epsilon(1)

    #Train
    model.fit(
        X_train,y_train,
        validation_data=(X_valid, y_valid),
        batch_size = int(X_train.shape[0]/600),
        epochs = 50
    )

    #Save trained model
    model.save("./simulation_tank/dyn_tank2")
    '''
    
    #Load the trained-model, df_test, mmx and mmy
    trained_model = keras.models.load_model("./simulation_tank/dyn_tank2")
    mmx = load("./simulation_tank/mmx.pkl")
    mmy = load("./simulation_tank/mmy.pkl")

    #Evaluate
    features = df_test_test[featurenames].copy()
    scaled_features = mmx.fit_transform(features.values)
    
    df_test_test[featurenames] = scaled_features
    
    X_test_scaled = df_test_test[featurenames].to_numpy()
    y_test = df_test_test[["target_hp","target_hp"]].to_numpy() #The state (hp and hf) at t+Δt
    dt = df_test_test["dt"].to_numpy()
    y_init = df_test_test[["hp","hf"]].to_numpy()

    res = eval(trained_model, X_test_scaled, y_test, dt, mmy, y_init)
