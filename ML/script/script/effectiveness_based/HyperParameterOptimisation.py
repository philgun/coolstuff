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

import sys
sys.path.append("/home/philgun/Documents/coolstuff/coolstuff/ML/script/script")
import bayesian as lib
import run2 as utils
import functools
from bayes_opt import BayesianOptimization as BO
import time

import argparse

def split_df(df, fraction=0.3):
    df = df.sample(frac=1).reset_index(drop=True)

    df_test = df[
        0:int(fraction*df.shape[0])
    ]

    df_train = df[
        int(fraction*df.shape[0]):
    ]

    #Split into charging and discharging training test data
    df_test[df_test.mdot>0].to_csv("test_data_discharging.csv",index=False)
    df_train[df_train.mdot>0].to_csv("train_data_discharging.csv",index=False)

    df_test[df_test.mdot<0].to_csv("test_data_charging.csv",index=False)
    df_train[df_train.mdot<0].to_csv("train_data_charging.csv",index=False)

if __name__ == "__main__":
    verbose = 0

    parser = argparse.ArgumentParser()

    parser.add_argument(
        "--mode", help = "either charging or dischargin. Use 'charging' for charging and 'discharging' for discharging", type=str
    )
    parser.add_argument(
        "--loss", help="loss function to be optimised by Bayesian optimiser. Default is mean squared error", default="mse", type=str
    )

    args = parser.parse_args()

    mode = args.mode
    loss_function = args.loss

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

    #************************************* Create dir w.r.t. mode
    if not os.path.exists(wd):
        os.makedirs(wd)

    #************************************* Prep data
    data = utils.Data("./data/LC_model_temp_control.mat")
    df = data.get_data()[3:].drop(columns="time")
    split_df(df, fraction=0.3)

    scaler = "MinMax"
    inputsize = df.shape[1]-1
    outputsize = 1
    bSize = 64

    #*************************************** Generate training test data set and also scalers etc.
    arr = lib.preprocessing(wd, fntrain, fntest, inputsize, outputsize, scaler)

    #Print X and y train raw - to check whether training and test data have been parsed correctly
    print("X train raw :\n",arr[-3])
    print("y train raw:\n",arr[-2])

    #Print X and y test raw - to check whether training and test data have been parsed correctly
    print("X test raw :\n",arr[-1])
    print("y test raw :\n",arr[5])
    
    #************************************** Function test
    model = lib.generate_model(arr, dropout=0.1, nPercent = 0.25, nShrink=0.9)
    model.summary()

    #************************************** Partially initialise the objective function
    objfunc = functools.partial(
        lib.eval_net,
        arr,
        wd,
        verbose,
        scaler,
        bSize,
        loss_function=loss_function

    )

    #*************************************** Parameter boundaries
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

    #****************************** Log the time
    start_time = time.time()
    
    optimiser.maximize(init_points=500,n_iter=500)
    
    delta = time.time() - start_time

    print("Total time: %s s"%delta)

    print(optimiser.max)

    #******************************* Dump the optimal configuration of the NN model in a file
    f = open("%s/dump.txt"%(wd),'w')
    f.write("%s\n"%(optimiser.max))
    f.close()