constant = 42
import logging, os
logging.disable(logging.WARNING)
os.environ["TF_CPP_MIN_LOG_LEVEL"] = "3"

import warnings
warnings.filterwarnings("ignore",category =RuntimeWarning)

import numpy as np
np.random.seed(constant)
import tensorflow as tf
import pandas as pd
tf.random.set_seed(constant)


from sklearn.metrics import r2_score,mean_squared_error
import os
from tensorflow.keras import backend, initializers, optimizers
from tensorflow.keras.models import Sequential
from tensorflow.keras.layers import Dense, Dropout
from tensorflow.keras.activations import relu,tanh,sigmoid
from tensorflow.keras.callbacks import EarlyStopping

from sklearn.preprocessing import MinMaxScaler,StandardScaler
from sklearn.model_selection import train_test_split
from bayes_opt import BayesianOptimization as BO
import time
import functools

from matplotlib import pyplot as plt

import bayesian as lib

if __name__ == "__main__":
    verbose = 0
    bSize = 850

    fntrain = "/home/philgun/Documents/PhD/Modelica/receiver-data/training_data_cascade_constant_size_AR_clean.csv"
    fntest = "/home/philgun/Documents/PhD/Modelica/receiver-data/validation_data_cascade_constant_size_AR_const.csv"
    wd = "./multi_aperture_6"
    
    #MinMax or StandardScaler
    scaler = "MinMax"

    if not os.path.exists(wd):
        os.makedirs(wd)

    print(len(pd.read_csv(fntrain)))

    arr = lib.preprocessing(wd,fntrain,fntest,13,1,scaling_method=scaler)

    #Print X and y train raw - to check whether training and test data have been parsed correctly
    print("X train raw :\n",arr[-3])
    print("y train :\n",arr[-2])

    #Print X and y test raw - to check whether training and test data have been parsed correctly
    print("X test raw :\n",arr[-1])
    print("y test raw :\n",arr[5])

    #******************************* Test build model
    model = lib.generate_model(arr,dropout=0.1,nPercent=0.25,nShrink=0.9)
    model.summary()

    #******************************* Partially initialise the eval_net func
    objfunc = functools.partial(
        lib.eval_net,
        wd,
        verbose,
        scaler,
        arr,
        bSize
    )
    
    #******************************* Search area of the bayesian optimisation
    parameterbounds = {
        'nPercent':(0,1),
        'nShrink':(0,1),
        'lr':(0.0001,0.01),
        'dropout':(0,0.4999)
    }

    #******************************* Run the bayesian optimisation with obj func to minimise RMSE
    optimiser = BO(
        f=objfunc,
        pbounds=parameterbounds,
        verbose=2,
        random_state=constant)

    start_time = time.time()
    
    optimiser.maximize(init_points=250,n_iter=250)
    
    delta = time.time() - start_time

    print("Total time: %s s"%delta)

    print(optimiser.max)

    #******************************* Dump the optimal configuration of the NN model in a file
    f = open("%s/dump.txt"%(wd),'w')
    f.write("%s\n"%(optimiser.max))
    f.close()
