constant=21
import numpy as np
import pandas as pd
np.random.seed(constant)
import tensorflow as tf 
tf.random.set_seed(constant)

from sklearn.preprocessing import MinMaxScaler
from tensorflow import keras
import keras
import pickle

from tensorflow.keras import backend, initializers, optimizers
from tensorflow.keras.models import Sequential
from tensorflow.keras.layers import Dense, Dropout
from tensorflow.keras.activations import relu, tanh, sigmoid
from tensorflow.keras.callbacks import EarlyStopping

from sklearn.preprocessing import MinMaxScaler
from sklearn.metrics import mean_squared_error, r2_score, mean_absolute_percentage_error
from sklearn.model_selection import train_test_split
from sklearn.utils import resample
from matplotlib import pyplot as plt

import seaborn as sns
from joblib import dump,load

class Data(object):
    def __init__(self, timelimit):
        self.t = np.linspace(0.0,timelimit,num=10000)
        self.y = self.t**3 + self.t**2 + 3*self.t + 10
        self.dydt = 3 * self.t**2 + 2 * self.t + 3
        print(self.dydt)

    def plot(self):
        fig,ax = plt.subplots()
        ax.plot(self.t, self.y,label="y")
        ax.plot(self.t, self.dydt,label="dydt")
        ax.legend()
        plt.show()

    def genTrainData(self):
        self.df = pd.DataFrame()
        self.df["x"] = self.t
        self.df["der"] = self.dydt

if __name__ == "__main__":
    fsave = "./simulation_tank/toymodel"
    data = Data(10.0)
    #data.plot()
    data.genTrainData()
    
    df = data.df
    dfori = data.df.copy()

    mmx = MinMaxScaler()
    mmy = MinMaxScaler()

    df.x = mmx.fit_transform(
        df.x.to_numpy().reshape(-1,1)
    )
    df.der = mmy.fit_transform(
        df.der.to_numpy().reshape(-1,1)
    )

    print(
        mmx.data_max_,
        mmy.data_max_,
        mmx.data_min_,
        mmy.data_min_
    )

    dump(mmx,"./simulation_tank/toymmx.pkl")
    dump(mmy,"./simulation_tank/toymmy.pkl")

    df = df.sample(frac=1).reset_index(drop=True)

    X = df.x.to_numpy().reshape(-1,1)
    y = df.der.to_numpy().reshape(-1,1)

    model = Sequential()

    model.add(
        Dense(
            5,
            name="Input",
            input_dim=1,
            kernel_initializer="he_uniform",
            use_bias=True,
            activation="relu"
        )
    )


    model.add(
        Dense(
            5,
            kernel_initializer="he_uniform",
            use_bias=True,
            activation="relu"
        )
    )

    model.add(
        Dense(
            1,
            name="Output",
            kernel_initializer = "he_uniform",
            activation='relu',
            use_bias=True
        )
    )

    model.summary()

    #initialise the metrics and optimizer and compile the model
    metrics = keras.metrics.MeanAbsolutePercentageError(name="MAPE")
    optimizer = optimizers.Adam(lr=1e-2)

    #Compile the model
    model.compile(
        optimizer=optimizer,
        loss = keras.losses.MeanSquaredError(),metrics=metrics
    )


    backend.set_epsilon(1)

    model.fit(
        X,y,epochs=100
    )

    model.save(fsave)

    trainedmodel = keras.models.load_model(fsave)
    y_test = dfori.der

    X_test = mmx.transform(dfori.x.to_numpy().reshape(-1,1))
    y_pred = mmy.inverse_transform(
        trainedmodel.predict(X_test)
    )

    plt.scatter(
        y_test,y_pred
    )
    plt.show()




