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
import tensorflow.keras.regularizers as reg

from tensorflow.keras.losses import mean_squared_error, mean_absolute_error
from tensorflow.keras.optimizers import Adam, Nadam, SGD, RMSprop
from tensorflow.keras.activations import relu, tanh, sigmoid, elu
from tensorflow.keras.callbacks import EarlyStopping

import numpy as np
np.random.seed(constant)

import argparse

import skopt
from skopt import BayesSearchCV, gp_minimize
from skopt.space import Real, Categorical, Integer
from skopt.utils import use_named_args

from sklearn.model_selection import train_test_split, RandomizedSearchCV, RepeatedKFold, cross_val_score
from sklearn.preprocessing import MinMaxScaler
from scipy.stats import reciprocal, uniform, randint
import joblib
import matplotlib.pyplot as plt

from run_randomised_search import generate_model

from tensorflow.keras.models import load_model

import functools

import argparse
from sklearn.metrics import r2_score

if __name__ == '__main__':
    #Prep data
    parser = argparse.ArgumentParser()

    parser.add_argument(
        "--mode", help = "either charging or discharging. Use 'charging' for charging and 'discharging' for discharging", type=str
    )

    parser.add_argument(
        "--njobs",help = "number of core(s) dedicated to the optimisation algorithm. Put -1 if using all available cores. Default is 1 for 1 core", type=int, default=1
    )

    parser.add_argument(
        "--crossval",help = "Run the repeated k-fold cross validation or not. Default 0 for no-cross validation.", type=int, default=0
    )

    args = parser.parse_args()

    mode = args.mode

    n_jobs = args.njobs

    crossval = args.crossval

    
    if mode == "discharging":
        fn_train = "/home/philgun/Documents/coolstuff/coolstuff/ML/script/script/effectiveness_based/data/training_data_discharging_equilibrium.csv"

        fn_test = "/home/philgun/Documents/coolstuff/coolstuff/ML/script/script/effectiveness_based/data/test_data_discharging_equilibrium.csv"

    elif mode == "charging":
        fn_train = "/home/philgun/Documents/coolstuff/coolstuff/ML/script/script/effectiveness_based/data/training_data_charging_equilibrium.csv"

        fn_test = "/home/philgun/Documents/coolstuff/coolstuff/ML/script/script/effectiveness_based/data/test_data_charging_equilibrium.csv"

    #Directory to save the model
    fbestmodel = "./GP_Model_%s"%(mode)

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

    f = open("./gp_min_best_error_%s.txt"%(mode),"w")
    f.write("%s"%best_error)
    f.close()

    @use_named_args(dimensions=dimensions)
    def fitness(first_neuron=30, n_hidden=5, magnifier=1, dropout=0.1, lr=1e-3, first_activation="relu", hidden_activation="relu",last_activation="relu", regulariser=None, l1=1e-3, l2=1e-3):
        #***************************** Read the last best error
        last_error = np.genfromtxt("./gp_min_best_error_%s.txt"%(mode),dtype=np.float32)
        
        #Prep the training data
        df = pd.read_csv(fn_train)    

        if crossval != 0:  
            print(
                "Running the optimisation with cross validation of %s fold.............................."%(crossval)
            )

            #Get the X and y from the data set
            X = df[df.columns[0:-1]].to_numpy()
            y = df[df.columns[-1]].to_numpy().reshape(-1,1)

            #Prep the cross validation data
            rkf = RepeatedKFold(
                n_splits=crossval, 
                n_repeats=10, 
                random_state=constant
            )

            #Generate the model for cross validation
            model = generate_model(
                inputSize=X.shape[1],
                outputSize=y.shape[1],
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

            scores = []

            #Train over all the folds
            for train_index, valid_index in rkf.split(X):
                X_train, y_train = X[train_index], y[train_index]
                X_valid, y_valid = X[valid_index], y[valid_index]

                #Instantiate scalers
                mmx = MinMaxScaler().fit(X_train)
                mmy = MinMaxScaler().fit(y_train)
                
                #Normalise the train-validation data
                X_train = mmx.transform(X_train)
                y_train = mmy.transform(y_train)

                X_valid = mmx.transform(X_valid)
                y_valid = mmy.transform(y_valid)

                #************************** Initialise early stopping
                monitor = EarlyStopping(
                    monitor="val_mse",
                    mode='min', 
                    min_delta=1e-3,
                    patience=100,
                    restore_best_weights=True
                )

                #************************** Train the model
                history = model.fit(
                    X_train, 
                    y_train,
                    epochs=5000,
                    batch_size=int(X_train.shape[0]/400),
                    validation_data=(X_valid, y_valid),
                    callbacks=[monitor]
                )

                #*************************** Append the best score
                scores.append(
                    min(history.history["val_mse"])
              )

            #************************ Calculate the k-fold error based on validation dataset
            error = sum(scores)/len(scores)

            print(
                "#############################################################################################\n"
            )
            print(
                "\nBest error from this iteration: %.6f\nLast best error: %s"%(error,last_error)
            )
            print(
                "\n#############################################################################################\n"
            )

            #*************************** Check if current error is less than the last best error
            if error < last_error:
                model.save(fbestmodel)
                print(
                    "Save model as %s ..................."%(fbestmodel)
                )
                
                joblib.dump(mmx,"mmx_%s.bin"%(mode))
                joblib.dump(mmy,"mmy_%s.bin"%(mode))
                
                f = open("./gp_min_best_error_%s.txt"%(mode),"w")
                f.write("%s"%(error))
                f.close() 

            del model

            keras.backend.clear_session()

            return error
        
        else:
            print(
                "Running the optimisation with NO cross validation.............................."
            )
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

            #Generate the model
            model = generate_model(
                inputSize=X.shape[1],
                outputSize=y.shape[1],
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

            #************************ Train the model
            history = model.fit(
                X_train, y_train,
                epochs=5000,
                batch_size=int(X_train.shape[0]/400),
                validation_data=(X_valid, y_valid),
                callbacks=[monitor]
            )

            #********************** Obtain the best error of this run
            error = min(history.history["val_mse"])
            
            print(
                "\nBest error from this iteration: %.6f\nLast error: %s"%(error,last_error)
            )

            #********************** Check error
            if error < last_error:
                model.save(fbestmodel)
                print(
                    "Save model as %s ..................."%(fbestmodel)
                )

                joblib.dump(mmx,"mmx_%s.bin"%(mode))
                joblib.dump(mmy,"mmy_%s.bin"%(mode))

                f = open("./gp_min_best_error_%s.txt"%(mode),"w")
                f.write("%s"%(error))
                f.close()
            
            del model

            keras.backend.clear_session()

            return error
      
    #Func test
    default_parameters = [
        150,
        5,
        0.5,
        0.3,
        1e-3,
        "relu",
        "relu",
        "relu",
        None,
        0.01,
        0.01
    ]

    #Run the hyperparameter optimisation
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
        n_jobs=n_jobs,
        acq_optimizer = "lbfgs",
        random_state=constant
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

    if crossval != 0:
        #Prep the training data
        df = pd.read_csv(fn_train)  
        X = df[df.columns[0:-1]].to_numpy()
        y = df[df.columns[-1]].to_numpy().reshape(-1,1)
        
        #Split into train validation set
        X_train, X_valid, y_train, y_valid = train_test_split(
            X,y,test_size=0.3,random_state=constant
        )

        #Instantiate scalers
        mmx = MinMaxScaler().fit(X_train)
        mmy = MinMaxScaler().fit(y_train)
        
        #Normalise the data
        X_train = mmx.transform(X_train)
        y_train = mmy.transform(y_train)

        X_valid = mmx.transform(X_valid)
        y_valid = mmy.transform(y_valid)

        #Params
        params = result.x

        #Now we have the best configuration from cross val, train the model then
        model = generate_model(
            inputSize=X.shape[1],
            outputSize=y.shape[1],
            first_neuron = params[0],
            n_hidden = params[1],
            magnifier = params[2],
            dropout = params[3],
            lr = params[4],
            first_activation=params[5],
            hidden_activation=params[6],
            last_activation=params[7],
            regulariser=params[8],
            l1=params[9],
            l2=[10]
        )

        #Save the model to fbestmodel file name
        model.save(fbestmodel)

        #Save the scalers
        joblib.dump(mmx,"mmx_%s.bin"%(mode))
        joblib.dump(mmy,"mmy_%s.bin"%(mode))

    #Prep test data
    df_test = pd.read_csv(fn_test) 

    #Load the scaler
    mmx = joblib.load("mmx_%s.bin"%(mode))
    mmy = joblib.load("mmy_%s.bin"%(mode))

    #Normalise the test data
    X_test = df_test[df_test.columns[0:-1]].to_numpy()
    y_test = df_test[df_test.columns[-1]].to_numpy().reshape(-1,1)
    X_test = mmx.transform(X_test)

    #Plot 45 degree plot
    fig,ax = plt.subplots()
    model = load_model(fbestmodel)
    y_pred = mmy.inverse_transform(model.predict(X_test).reshape(-1,1))
    
    ax.scatter(
        y_test, y_pred, s= 1, c="red"
    )
    ax.set_xlabel("Test data")
    ax.set_ylabel("Prediction")
    ax.set_title(
        "Test vs Prediction. R2 : %.6f"%(r2_score(y_test, y_pred))
    )
    fig.savefig("fig_test_vs_pred_GP_%s.png"%(mode))


    
