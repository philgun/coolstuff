import tensorflow as tf
import matplotlib.pyplot as plt

from sklearn.preprocessing import MinMaxScaler
import numpy as np

fn_model = '/home/philgun/Documents/codecodecode/codecodecode/ML/script/sCO2_Trained_Model/surrogate_model_0'
load_model = tf.keras.models.load_model(fn_model)


