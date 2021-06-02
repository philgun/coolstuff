constant = 42
import time
import os

from tensorflow.keras import callbacks
os.environ["TF_CPP_MIN_LOG_LEVEL"] = "3"
import talos
import pandas as pd
import tensorflow as tf
tf.random.set_seed(constant)

import tensorflow.keras as keras
import keras.regularizers as reg

from keras.losses import mean_squared_error, mean_absolute_error
from keras.optimizers import Adam, Nadam, SGD, RMSprop
from keras.activations import relu, tanh, sigmoid, elu
from tensorflow.keras.callbacks import EarlyStopping

import numpy as np
np.random.seed(constant)

import argparse

import skopt
from skopt import BayesSearchCV, gp_minimize
from skopt.space import Real, Categorical, Integer
from skopt.utils import use_named_args

from sklearn.model_selection import train_test_split, RandomizedSearchCV
from sklearn.preprocessing import MinMaxScaler
from scipy.stats import reciprocal, uniform, randint
import joblib
import matplotlib.pyplot as plt

from run_randomised_search import generate_model

from tensorflow.keras.models import load_model

import functools

if __name__ == '__main__':
    fn_train = "/home/philgun/Documents/coolstuff/coolstuff/ML/script/script/effectiveness_based/data/training_data_discharging_equilibrium.csv"

    fn_test = "/home/philgun/Documents/coolstuff/coolstuff/ML/script/script/effectiveness_based/data/test_data_discharging_equilibrium.csv"

    df = pd.read_csv(fn_train)
    
    df_test = pd.read_csv(fn_test)    

    print(df)
    print(df_test)

    plt.hist(df.mdot,bins=30)
    plt.show()

    #Get the X and y from the data set
    X = df[df.columns[0:-1]].to_numpy()
    y = df[df.columns[-1]].to_numpy().reshape(-1,1)

    #Split into train validation set
    X_train, X_valid, y_train, y_valid = train_test_split(X,y,test_size=0.3,random_state=constant)

    #Instantiate scalers
    mmx = MinMaxScaler().fit(X_train)
    mmy = MinMaxScaler().fit(y_train)
    
    #Normalise the data
    X_train = mmx.transform(X_train)
    y_train = mmy.transform(y_train)

    X_valid = mmx.transform(X_valid)
    y_valid = mmy.transform(y_valid)

    #Normalise the test data
    X_test = df_test[df_test.columns[0:-1]].to_numpy()
    y_test = df_test[df_test.columns[-1]].to_numpy().reshape(-1,1)
    X_test = mmx.transform(X_test)

    assert(
        X_test.shape[1] == X_train.shape[1]
    )

    print("Input shape: %s, output shape: %s"%(X_train.shape[1], y_train.shape[1]))

    print(
        "X_train : \n\n%s"%X_train
    )
    print(
        "y_train : \n\n%s"%y_train
    )
    print(
        "X_test : \n\n%s"%X_test
    )
    print(
        "y_test : \n\n%s"%y_test
    )

    fbestmodel = "./GPMinModelTank"
    dim_first_neuron = Integer(low=3, high=300, name="first_neuron")
    dim_n_hidden = Integer(low=1, high=10, name="n_hidden")
    dim_magnifier = Real(low=1e-4, high=1.0, name="magnifier", prior="uniform")
    dim_dropout = Real(low=1e-3, high=0.5, name="dropout", prior="uniform")
    dim_lr = Real(low=3e-5, high=3e-2, name="lr")
    dim_first_activation = Categorical(categories=["relu","sigmoid","elu","tanh"],name="first_activation")
    dim_hidden_activation = Categorical(categories=["relu","sigmoid","elu","tanh"],name="hidden_activation")
    dim_last_activation = Categorical(categories=["relu","sigmoid","elu","tanh"],name="last_activation")
    dim_regulariser = Categorical(categories=[reg.l1, reg.l2, reg.l1_l2, None],name="regulariser")
    dim_l1 = Real(low=0,high=1e-1,name="l1")
    dim_l2 = Real(low=0,high=1e-1,name="l2")

    dimensions = [dim_first_neuron, dim_n_hidden, dim_magnifier, dim_dropout, dim_lr, dim_first_activation, dim_hidden_activation, dim_last_activation, dim_regulariser, dim_l1, dim_l2]
    
    best_error = 10000

    f = open("./gp_min_best_error.txt","w")
    f.write("%s"%best_error)
    f.close()

    @use_named_args(dimensions=dimensions)
    def fitness(inputSize=X_train.shape[1], outputSize=y_train.shape[1], first_neuron=30, n_hidden=5, magnifier=1, dropout=0.1, lr=1e-3, first_activation="relu", hidden_activation="relu",last_activation="relu", regulariser=None, l1=1e-3, l2=1e-3):
        
        last_error = np.genfromtxt("./gp_min_best_error.txt",dtype=np.float32)

        model = generate_model(
            inputSize=inputSize,
            outputSize=outputSize,
            first_neuron = first_neuron,
            n_hidden = n_hidden,
            magnifier = magnifier,
            dropout = dropout,
            lr = lr,
            first_activation=first_activation,
            hidden_activation=hidden_activation,
            last_activation=last_activation,
            regulariser=regulariser,
            l1=l1,
            l2=l2
        )

        #************************** Initialise early stopping
        monitor = EarlyStopping(
            monitor="val_mse",
            mode='min', 
            min_delta=1e-3,
            patience=100,
            restore_best_weights=True
        )

        history = model.fit(
            X_train, y_train,
            epochs=5000,
            batch_size=int(X_train.shape[0]/400),
            validation_data=(X_valid, y_valid),
            callbacks=[monitor]
        )

        error = min(history.history["val_mse"])
        
        print(
            "\nBest error: %.6f\n"%(error)
        )

        if error < last_error:
            model.save(fbestmodel)

            f = open("./gp_min_best_error.txt","w")
            f.write("%s"%(error))
            f.close()
        
        del model

        keras.backend.clear_session()

        return error
      
    #Run the hyper parameter optimisation
    now = time.time()
    print(
        "Start optimisation------------------------------------"
    )
    result = gp_minimize(
        func=fitness,
        dimensions=dimensions,
        acq_func = "EI",
        n_initial_points=50,
        x0=default_parameters,
        n_jobs=4,
        acq_optimizer = "lbfgs"
    )

    print(
        "Optimisation time : %s s"%(time.time() - now)
    )

    print(
        "\n#######################################################################\n"
    )

    print(
        "Best params: %s"%(result.x)
    )

    print(
        "Best score: %s"%(result.fun)
    )

    print(
        "\n#######################################################################\n"
    )

    fig,ax = plt.subplots()
    model = load_model(fbestmodel)
    y_pred = mmy.inverse_transform(model.predict(X_test).reshape(-1,1))
    from sklearn.metrics import r2_score
    
    ax.scatter(
        y_test, y_pred, s= 1, c="red"
    )
    ax.set_xlabel("Test data")
    ax.set_ylabel("Prediction")
    ax.set_title(
        "Test vs Prediction. R2 : %.6f"%(r2_score(y_test, y_pred))
    )
    fig.savefig("fig_test_vs_pred_GP.png")


    
