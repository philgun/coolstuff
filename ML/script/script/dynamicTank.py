constant = 42
import logging, os
logging.disable(logging.WARNING)
os.environ["TF_CPP_MIN_LOG_LEVEL"] = "3"

import warnings
warnings.filterwarnings("ignore",category = RuntimeWarning)

import numpy as np
np.random.seed(constant)
import tensorflow as tf
import pandas as pd
tf.random.set_seed(constant)
tf.get_logger().setLevel(3)


from sklearn.metrics import r2_score,mean_squared_error
import os
from tensorflow.keras import backend, initializers, optimizers
from tensorflow.keras.models import Sequential
from tensorflow.keras.layers import Dense, Dropout
from tensorflow.keras.activations import relu,tanh,sigmoid
from tensorflow.keras.callbacks import EarlyStopping

from sklearn.preprocessing import MinMaxScaler,StandardScaler
from sklearn.model_selection import train_test_split
from bayes_opt import BayesianOptimization as bayesian
import time
import functools

from matplotlib import pyplot as plt
import seaborn as sns

import bayesian2 as lib

def shuffle_split_dataframe(df,train_frac=0.8,test_frac=0.2):
    #Shuffle
    df_shuffled = df.sample(frac=1).reset_index(drop=True)    
    Y = df.columns[-1]

    #Split
    datasize = len(df_shuffled)
    df_train,df_test = df_shuffled[0:int(train_frac*datasize)],df_shuffled[int(train_frac*datasize):]
    df_train.to_csv("train.csv",index=False)
    df_test.to_csv("test.csv",index=False)
    print("Shuffle and split: Done!")
    
if __name__ == "__main__":
    verbose = 0
    bSize = 512
    fntrain = "/home/philgun/Documents/coolstuff/coolstuff/ML/script/script/dataMiddleSectionDropped.csv"
    df = pd.read_csv(fntrain)

    df = df.drop(
            df[
                (df.der_hf_i>-1.5) & (df.der_hf_i < 0)
        ].sample(frac=4/5).index
    )

    fig,ax = plt.subplots(1,3)
    sns.distplot(
        df.der_hf_i,hist=True,kde=False,bins=1000,hist_kws=dict(edgecolor="k", linewidth=0.1),ax=ax[0]
    )
    sns.distplot(
        df.der_hf_i,hist=True,kde=False,bins=1000,hist_kws={"cumulative":True},ax=ax[1]
    )

    #Find the std deviation and mean of the modified dataset
    std = df.der_hf_i.std()
    mean = df.der_hf_i.mean()

    ax[0].axvline(linewidth=1,color="red",x=mean)

    #Draw mean ± std
    ax[0].axvline(linewidth=1,color="black",x=mean - std,ls="--")
    ax[0].axvline(linewidth=1,color="black",x=mean + std,ls="--")

    ax[1].axvline(linewidth=1,color="black",x=mean - std,ls="--")
    ax[1].axvline(linewidth=1,color="black",x=mean + std,ls="--")

    #Draw mean ± 2 *std
    ax[0].axvline(linewidth=1,color="black",x=mean - 2 * std,ls="--")
    ax[0].axvline(linewidth=1,color="black",x=mean + 2 * std,ls="--")

    ax[1].axvline(linewidth=1,color="black",x=mean - 2 * std,ls="--")
    ax[1].axvline(linewidth=1,color="black",x=mean + 2 * std,ls="--")

    #Draw mean ± 3 *std
    ax[0].axvline(linewidth=1,color="green",x=mean - 3 * std,ls="--")
    ax[0].axvline(linewidth=1,color="green",x=mean + 3 * std,ls="--")

    ax[1].axvline(linewidth=1,color="green",x=mean - 3 * std,ls="--")
    ax[1].axvline(linewidth=1,color="green",x=mean + 3 * std,ls="--")

    #Trim the outliers?
    len_OG = len(df)

    df = df[
        (df.der_hf_i > mean - 3*std) & (df.der_hf_i < mean + 3*std)
    ]

    len_MOD = len(df)

    print(
        len_OG,len_MOD
    )

    sns.distplot(
        df.der_hf_i,hist=True,kde=True,bins=1000,hist_kws=dict(edgecolor="k", linewidth=0.1),ax=ax[2]
    )

    #Draw mean ± std
    ax[2].axvline(linewidth=1,color="black",x=mean - std,ls="--")
    ax[2].axvline(linewidth=1,color="black",x=mean + std,ls="--")

    #Draw mean ± 2 *std
    ax[2].axvline(linewidth=1,color="black",x=mean - 2 * std,ls="--")
    ax[2].axvline(linewidth=1,color="black",x=mean + 2 * std,ls="--")

    plt.show()

    #Search for weight and limit
    count_major = df[
        (df.der_hf_i > mean - std) & (df.der_hf_i < mean + std)
    ].shape[0]
    count_minor = df.shape[0] - count_major
    weight = count_major / count_minor
    ub = mean + std
    lb = mean - std

    print(
        weight,ub,lb,mean,std
    )
    
    #Split the single dataset from ZK model into test-train csv
    shuffle_split_dataframe(
        df,0.8,0.2
    )

    fntrain = "train.csv"
    fntest = "test.csv"
    wd = "./dynamicTank_BottomSlice"
    
    #MinMax or StandardScaler
    scaler = "MinMax"

    if not os.path.exists(wd):
        os.makedirs(wd)

    #Test pre-processing
    arr = lib.preprocessing(
        wd,
        fntrain,
        fntest,
        17,
        1,
        scaling_method=scaler
    )

    #Print X and y train raw - to check whether training and test data have been parsed correctly
    print("X train raw :\n",arr[-3])
    print("y train :\n",arr[-2])

    #Print X and y test raw - to check whether training and test data have been parsed correctly
    #print("X test raw :\n",arr[-1])
    #print("y test raw :\n",arr[5])

    #******************************* Test build model
    model = lib.generate_model(
        arr,
        dropout=0.1,
        nPercent=0.25,
        nShrink=0.9
    )
    model.summary()

    #******************************* Partially initialise the eval_net or eval_net_log func
    objfunc = functools.partial(
        lib.eval_net,
        wd,
        verbose,
        scaler,
        fntrain,
        fntest,
        17,
        1,
        bSize,
        ub,
        lb,
        weight
    )
    
    #******************************* Search area of the bayesian optimisation
    parameterbounds = {
        'nPercent':(0,1),
        'nShrink':(0,1),
        'lr':(0.0001,1e-3),
        'dropout':(0,0.4999)
    }

    #******************************* Run the bayesian optimisation with obj func to minimise RMSE
    optimiser = bayesian(
        f=objfunc,
        pbounds=parameterbounds,
        verbose=2,
        random_state=constant)

    start_time = time.time()
    
    optimiser.maximize(init_points=200,n_iter=100)
    
    delta = time.time() - start_time

    print("Total time: %s s"%delta)

    print(optimiser.max)

    #******************************* Dump the optimal configuration of the NN model in a file
    f = open("%s/dump.txt"%(wd),'w')
    f.write("%s\n"%(optimiser.max))
    f.close()
