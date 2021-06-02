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
from skopt.space import Real, Categorical, Integer

from sklearn.model_selection import train_test_split, RandomizedSearchCV
from sklearn.preprocessing import MinMaxScaler
from scipy.stats import reciprocal, uniform, randint
import joblib
import matplotlib.pyplot as plt
plt.switch_backend('agg')

import argparse

def generate_model(inputSize=3, outputSize=1, first_neuron=30, n_hidden=5, magnifier=1, dropout=0.1, lr=1e-3, first_activation="relu", hidden_activation="relu",last_activation="relu", regulariser=None, l1=1e-3, l2=1e-3):
    #********************* Grab the parameter of the model
    #Initialise the model
    model = keras.models.Sequential()

    #Construct the model
    layer = 0
    neuron = first_neuron
    
    if regulariser is not None:
        if regulariser == reg.l1:
            R = regulariser(l1=l1)
        elif regulariser == reg.l2:
            R = regulariser(l2=l2)
        elif regulariser == reg.l1_l2:
            R = regulariser(l1=l1, l2=l2)
    else:
        R = None

    #Loop
    while layer < n_hidden:
        if layer == 0:
            model.add(
                keras.layers.Dense(
                    neuron,
                    name="Input",
                    input_dim = inputSize,
                    activation = first_activation,
                    use_bias= True,
                    kernel_initializer="he_uniform",
                    kernel_regularizer=R
                )
            )
        else:
            model.add(
                keras.layers.Dense(
                    neuron, 
                    name = "Layer_%s"%(layer),
                    activation=hidden_activation,
                    use_bias=True,
                    kernel_initializer ="he_uniform",
                    kernel_regularizer = R
                )
            ) 

        #*************************** Add dropout after each hidden layer
        model.add(
            keras.layers.Dropout(
                dropout,
                seed=constant
            )
        )

        #*************************** Shrink neuron count for each layer
        neuron = int(magnifier * neuron)
        layer += 1
    
    #*************************** Output layer
    model.add(
        keras.layers.Dense(
            outputSize,
            name="Output",
            activation = last_activation,
            kernel_regularizer = R
        )
    )

    #************************** compile
    model.compile(
        optimizer = Adam(lr=lr),loss = "mse", metrics = ["mse"]
    )

    return model

def gen_new_data(fn, test_size=0.3):
    #Prep data
    df = pd.read_csv(fn)

    #Drop unnecessary columns
    df = df.drop(columns = "time")
    df = df.drop(columns=["T_s_%s"%index for index in range(1,101)])
    df = df.drop(columns=["T_s_%s_pred"%index for index in range(1,101)])
    df = df.drop(columns="T_p_rep")

    #Put everything in the right order
    epsilon = df.epsilon
    df = df.drop(columns="epsilon")
    df = pd.concat(
        (df,epsilon),axis=1
    )

    #Get only the discharging data
    df = df[df.mdot>0]
    print(df.head)

    #Shuffle the data
    df = df.sample(frac=1).reset_index(drop=True)

    #Separate into df_test and df (train)
    df_test = df[0:int(test_size*df.shape[0])]
    df = df[int(test_size*df.shape[0]):]
    
    return df, df_test


if __name__ == '__main__':
    #Prep data
    parser = argparse.ArgumentParser()

    parser.add_argument(
        "--mode", help = "either charging or discharging. Use 'charging' for charging and 'discharging' for discharging", type=str
    )

    args = parser.parse_args()

    mode = args.mode

    if mode == "discharging":
        fn_train = "/home/philgun/Documents/coolstuff/coolstuff/ML/script/script/effectiveness_based/data/training_data_discharging_equilibrium.csv"

        fn_test = "/home/philgun/Documents/coolstuff/coolstuff/ML/script/script/effectiveness_based/data/test_data_discharging_equilibrium.csv"
    elif mode == "charging":
        fn_train = "/home/philgun/Documents/coolstuff/coolstuff/ML/script/script/effectiveness_based/data/training_data_charging_equilibrium.csv"

        fn_test = "/home/philgun/Documents/coolstuff/coolstuff/ML/script/script/effectiveness_based/data/test_data_charging_equilibrium.csv"
    else:
        raise ValueError("Mode error")

    df = pd.read_csv(fn_train)
    
    df_test = pd.read_csv(fn_test)    

    print(df,df_test)

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

    #Search region
    p = {
        'inputSize':[X_train.shape[1]],
        'outputSize':[y_train.shape[1]],
        'first_neuron': np.arange(3,300,1,dtype=np.int32), 
        'n_hidden' : np.arange(1,10,1,dtype=np.int32),
        'magnifier': uniform(1e-2,1), 
        'dropout' : uniform(1e-3,0.49), 
        'lr':reciprocal(3e-4,3e-2),
        'first_activation' : ("relu","sigmoid","elu","tanh"),
        'hidden_activation' : ("relu","sigmoid","elu","tanh"),
        'last_activation' : ("relu","sigmoid","elu","tanh"),
        'regulariser': (reg.l1, reg.l2, reg.l1_l2, None),
        'l1':uniform(0,1e-1),
        'l2':uniform(0,1e-1)
    }

    #************************** Initialise early stopping
    monitor = EarlyStopping(
        monitor="val_mse",
        mode='min', 
        min_delta=1e-3,
        patience=100,
        restore_best_weights=True
    )

    #************************** Wrap generate_model in keras wrappers
    keras_wrapper = keras.wrappers.scikit_learn.KerasRegressor(generate_model)

    #************************** Instantiate search
    Searcher = RandomizedSearchCV(
        keras_wrapper,
        p,
        n_iter = 500,
        random_state= constant,
        n_jobs=4,
        cv = 5,
        scoring='neg_mean_squared_error',
        error_score='raise'
    )   

    #Train the model
    now = time.time()
    result = Searcher.fit(
        X_train, y_train,
        validation_data=(X_valid,y_valid),
        callbacks = [monitor],
        epochs=5000,
        batch_size=int(X_train.shape[0]/400)
    )

    print(
        "Optimisation time : %s s"%(time.time() - now)
    )

    #Plot some stuffs
    fig,ax = plt.subplots()
    y_pred = mmy.inverse_transform(result.predict(X_test).reshape(-1,1))
    from sklearn.metrics import r2_score
    
    ax.scatter(
        y_test, y_pred, s = 1, c="red"
    )
    ax.set_xlabel("Test data")
    ax.set_ylabel("Prediction")
    ax.set_title(
        "Test vs Prediction. R2 : %.6f"%(r2_score(y_test, y_pred))
    )
    fig.savefig("fig_test_vs_pred_randomised.png")

    print(
        "\n#######################################################################\n"
    )

    print(
        "Best params: %s"%(result.best_params_)
    )

    with open("best_params_randomised_search_%s.txt"%(mode),"w") as f:
        f.write("Best params: %s"%(result.best_params_))

    print(
        "Best score: %s"%(abs(result.best_score_))
    )

    print(
        "\n#######################################################################\n"
    )


    print(
        "--------------------------------------Save the model as pkl file----------------------------------------"
    )
    joblib.dump(result,"best_model_randomised_search_%s.pkl"%(mode))

