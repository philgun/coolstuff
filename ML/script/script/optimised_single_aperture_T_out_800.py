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

    fntrain = "/home/philgun/Documents/PhD/Modelica/receiver-data/training_data_constant_AR_H_drop_T_out.csv"
    fntest = "/home/philgun/Documents/PhD/Modelica/receiver-data/validation_data_constant_AR_H_drop_T_out.csv"
    wd = "./single_aperture_constant_T_out_2"

    arr = lib.preprocessing(wd,fntrain,fntest,7,1)

    print(arr[-2])
    print(arr[-1])

    print(arr[5])

    #******************************* Test build model
    model = lib.generate_model(arr,dropout=0.1,nPercent=0.25,nShrink=0.9)
    model.summary()

    objfunc = functools.partial(
        lib.eval_net,
        wd,
        verbose,
        arr,
        bSize
    )
     
    parameterbounds = {
        'nPercent':(0,1),
        'nShrink':(0,1),
        'lr':(0.0001,0.1),
        'dropout':(0,0.499)
    }

    optimiser = BO(
        f=objfunc,
        pbounds=parameterbounds,
        verbose=2,
        random_state=constant)

    start_time = time.time()
    
    optimiser.maximize(init_points=100,n_iter=100)
    
    delta = time.time() - start_time

    print("Total time: %s s"%delta)

    print(optimiser.max)

    f = open("dump.txt",'w')
    f.write("%s\n"%(optimiser.max))
    f.close()
