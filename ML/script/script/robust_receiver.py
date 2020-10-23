import numpy as np
import tensorflow as tf
import pandas as pd

constant = 42
tf.random.set_seed(constant)
np.random.seed(constant)

import os
from tensorflow.keras import backend, initializers, optimizers
from tensorflow.keras.models import Sequential
from tensorflow.keras.layers import Dense
from tensorflow.keras.activations import relu,tanh

from sklearn.preprocessing import MinMaxScaler,StandardScaler
from sklearn.model_selection import train_test_split

from matplotlib import pyplot as plt

import lib

fn_data = '/home/philgun/Documents/codecodecode/codecodecode/ML/data/data_receiver/trainingdata_robustreceiver_13October2020.csv'

df = pd.read_csv(fn_data)

print(df.describe())

#Network model 2 and 1 [15,15,15]

#Network architecture model 3
network_layout = [15,15,15]

#Hyper Parameter
lr = 0.001
batch_size=128
activation = 'relu'
initializer = 'he_uniform'

#epochs model 1 = 1000
#epochs model 2 = 2000
#epochs model 3 = 3000
#epochs model 4 = 4000,lr= 0.0001
#epochs model 5 = 3000, [15,15,15,15]
#epochs model 6 = 3000, [15,15,15]
epochs = 3000
input_dim=5
output_dim=1
prefix_res = '/home/philgun/Documents/codecodecode/codecodecode/ML/script/robust_rcv/'
count = 6

if not os.path.exists(prefix_res):
    os.makedirs(prefix_res)

#Load Data
model = lib.NNModelSequential()
model.preprocessingInput(
    fn_data=fn_data,
    input_dim=input_dim,
    output_dim=output_dim,
    scaling_method='MinMaxScaler',
    test_size=0.30,
    generalised_scaler=True
    )


#Printing boundaries
f = open("%sboundaries.txt"%(prefix_res),'w')
f.write(str(model.data_max_X))
f.write('\n')
f.write(str(model.data_min_X))
f.write('\n')
f.write(str(model.data_max_y))
f.write('\n')
f.write(str(model.data_min_y))
f.close()

model.training_NN(
    prefix_res = prefix_res,
    input_dim = input_dim,
    output_dim = output_dim,
    network_layout=network_layout,
    learning_rate=lr,
    epochs=epochs,
    batch_size=batch_size,
    count=count,
    activation=activation,
    initializer=initializer,
    ES=True,
    verbose=1,
    with_validation=True,
    with_decay=True
)

#Test
y_predict = model.predict(x = model.X_raw)
y_true = model.y_raw

Y = np.concatenate((y_predict,y_true),axis=1)
np.savetxt('%spredvstrue.csv'%(prefix_res),Y,delimiter=',')

model.plot_history()

