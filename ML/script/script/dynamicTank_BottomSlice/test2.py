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
from matplotlib import pyplot as plt

import seaborn as sns
from ann_visualizer.visualize import ann_viz

class CustomModel(keras.Model):
    def __init__(self, hidden_units):
        super(CustomModel, self).__init__()
        self.hidden_units = hidden_units
        self.dense_layers = [keras.layers.Dense(u) for u in hidden_units]

    def call(self, inputs):
        x = inputs
        for layer in self.dense_layers:
            x = layer(x)
        return x

    def get_config(self):
        return {"hidden_units": self.hidden_units}

    @classmethod
    def from_config(cls, config):
        return cls(**config)


model = CustomModel([16, 16, 10])
# Build the model by calling it
input_arr = tf.random.uniform((1, 5))
outputs = model(input_arr)
model.summary()
#ann_viz(model)
