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

import pandas as pd
from tensorflow.keras import backend, initializers,optimizers
from tensorflow.keras.models import Sequential
from tensorflow.keras.layers import Dense,Dropout
from tensorflow.keras.activations import tanh,relu
from tensorflow.keras.callbacks import EarlyStopping

from sklearn.preprocessing import MinMaxScaler, StandardScaler
from sklearn.metrics import r2_score, mean_squared_error, mean_absolute_error, r2_score
from sklearn.model_selection import train_test_split
from bayes_opt import BayesianOptimization as BO

import matplotlib.pyplot as plt
    
def preprocessing(wd,fntrain,fntest,inputsize,outputsize,scaling_method="MinMax"):
    dftrain_raw = pd.read_csv(fntrain)
    colnames = dftrain_raw.columns
    used_cols = colnames[0:inputsize+outputsize]
    dftrain_raw = dftrain_raw[
        used_cols
    ]

    train_raw = dftrain_raw.to_numpy()

    dftest_raw = pd.read_csv(fntest)
    dftest_raw = dftest_raw[
        used_cols
    ]

    test_raw = dftest_raw.to_numpy()

    #train_raw = np.genfromtxt(fntrain,skip_header=1,delimiter=',')
    #test_raw = np.genfromtxt(fntest,skip_header=1,delimiter=',')

    X_train = train_raw[:,0:inputsize]
    y_train = train_raw[:,inputsize]
    
    X_test_raw = test_raw[:,0:inputsize]
    y_test_raw = test_raw[:,inputsize]

    Xtrain_raw, Xvalid_raw, ytrain_raw, yvalid_raw = train_test_split(
        X_train, 
        y_train,
        test_size=0.2
    )

    #Convert vector into matrix 2-D
    ytrain_raw = np.array(ytrain_raw).reshape(-1,1)
    yvalid_raw = np.array(yvalid_raw).reshape(-1,1)
    y_test_raw = np.array(y_test_raw).reshape(-1,1)
    
    #****************************** Fit the scaler to training data
    if scaling_method == "MinMax":
        mmx = MinMaxScaler().fit(Xtrain_raw)
        mmy = MinMaxScaler().fit(ytrain_raw)
    elif scaling_method == "StandardScaler":
        mmx = StandardScaler().fit(Xtrain_raw)
        mmy = StandardScaler().fit(ytrain_raw)
    else:
        raise ValueError("Scaling method not valid, use either 'MinMax' for MinMaxScaler, 'StandardScaler' for Standard Scaler,your choice is: %s"%(scaling_method))

    #****************************** Scale training data
    Xtrain = mmx.transform(Xtrain_raw)
    ytrain = mmy.transform(ytrain_raw)
    
    #****************************** Scale validation data
    Xvalid = mmx.transform(Xvalid_raw)
    yvalid = mmy.transform(yvalid_raw)    

    #****************************** Scale test data
    Xtest = mmx.transform(X_test_raw)

    #****************************** Array that will be returned
    arr = []
    arr.append(Xtrain) #0
    arr.append(ytrain) #1

    arr.append(Xvalid) #2
    arr.append(yvalid) #3

    arr.append(Xtest) #4
    arr.append(y_test_raw) #5

    arr.append(mmx) #6
    arr.append(mmy) #7
    
    arr.append(X_train) #8
    arr.append(y_train) #9
    arr.append(X_test_raw) #10

    return arr

def eval_net(arr,wd,verbose,scaling_method,batch_size,loss_function,nPercent,nShrink,lr,dropout):
    #****************************** Generate Model
    model = generate_model(arr,dropout,nPercent,nShrink)

    #****************************** Compile model and callbacks
    model.compile(
        loss="mse",
        optimizer=optimizers.Adam(lr=lr),
        metrics = ['mse','mae','mape']
    )

    monitor = EarlyStopping(
        monitor="val_mape",
        mode='min', 
        min_delta=0.5,
        patience=500,
        restore_best_weights=True
    )
    
    #****************************** Retrieve ANN set-up from array
    Xtrain = arr[0]
    ytrain = arr[1]

    Xvalid = arr[2]
    yvalid = arr[3]
    
    Xtest = arr[4]
    y_test_raw = arr[5]

    mmx = arr[6]
    mmy = arr[7]

    backend.set_epsilon(1)

    #****************************** Train
    model.fit(
        x=Xtrain,
        y=ytrain,
        validation_data=(Xvalid,yvalid),
        batch_size=int(batch_size),
        epochs=int(5000),
        callbacks=[monitor],
        verbose=verbose
    )

    #****************************** Predict test data
    pred = mmy.inverse_transform(model.predict(Xtest))
    
    #*************************** Get the score
    if loss_function.lower() == "mse":
        score = mean_squared_error(y_test_raw,pred,squared=True)
        score = score * -1
    elif loss_function.lower() == "rmse":
        score = mean_squared_error(y_test_raw,pred,squared=False)
        score = score * -1
    elif loss_function.lower() == "mae":
        score = mean_absolute_error(y_test_raw,pred)
        score = score * -1
    elif loss_function.lower() == "r2":
        score = r2_score(y_test_raw,pred)
    else:
        raise ValueError(
            "Valid loss function to be optimised are: mse, mae, rmse and r2 (case insensitive). Your loss function: %s"%(loss_function)
        )

    #*************************** Create epochs file if it is not there
    fnepoch = "%s/epochs.csv"%(wd)
    if not os.path.exists(fnepoch):
        f = open(fnepoch,"w")
        f.write("Epochs_needed\n")
        f.close()
    f = open(fnepoch,"a")
    f.write("%s\n"%(monitor.stopped_epoch))
    f.close()

    #*************************** Create score file if it is not there
    fnscore = "%s/score.csv"%(wd)
    if not os.path.exists(fnscore):
        f = open(fnscore,"w")
        f.write("Scores\n")
        f.write("%s\n"%(-10000)) #initial score
        f.close()

    #*************************** Get the best score (RMSE)
    dfscores = pd.read_csv(fnscore)
    bestScore = dfscores.Scores.max()
    
    #****************************** If score at this iteration is better than historical score then:
    if score > bestScore:
        #****************************** Save model 
        model.save("%s/surrogate_model"%(wd)) 

        #****************************** Save Prediction vs True data
        PRED = pred[:,0]
        TEST = y_test_raw[:,0]

        df = pd.DataFrame(zip(PRED,TEST),columns=['Prediction','Test'])
        df.to_csv("%s/prediction_vs_test.csv"%(wd),index=False)

        #****************************** Plot and save
        if loss_function.lower() == "r2":
            s = score
        else:
            s = score * -1
            
        fig,ax = plt.subplots()
        ax.scatter(
            TEST,PRED,c="black",s=2
        )
        ax.set_title("Test vs. Pred value of the best model. %s: %.6f"%(loss_function.upper(),s))
        ax.set_xlabel("Test data")
        ax.set_ylabel("Prediction")
        ax.set_xlim(
            TEST.min(),TEST.max()
        )
        ax.set_ylim(
            TEST.min(),TEST.max()
        )
        fig.savefig("%s/45DegPlot.png"%(wd))

        #****************************** Save the boundaries of the better model
        if scaling_method == "MinMax":
            maxdata = "%s/max.txt"%(wd)
            mindata = "%s/min.txt"%(wd)

            Xmax = mmx.data_max_

            try:
                ymax = mmy.data_max_
            except:
                ymax=[-1000000]

            write=""

            for i in range(len(Xmax)):
                write+="%s,"%(Xmax[i])
            write+="%s"%(ymax[0])
            f = open(maxdata,"w")
            f.write(write)
            f.close()

            Xmin = mmx.data_min_

            try:
                ymin = mmy.data_min_
            except:
                ymin = [-1000000]

            write=""
            
            for i in range(len(Xmin)):
                write+="%s,"%(Xmin[i])
            write+="%s"%(ymin[0])
            f = open(mindata,"w")
            f.write(write)
            f.close()
        else:
            maxdata = "%s/mean.txt"%(wd)
            mindata = "%s/std.txt"%(wd)

            Xmax = mmx.mean_

            try:
                ymax = mmy.mean_
            except:
                ymax = [-100000]

            write=""

            for i in range(len(Xmax)):
                write+="%s,"%(Xmax[i])
            write+="%s"%(ymax[0])
            f = open(maxdata,"w")
            f.write(write)
            f.close()

            Xmin = mmx.var_

            try:
                ymin = mmy.var_
            except:
                ymin = [-100000]

            write=""
            
            for i in range(len(Xmin)):
                write+="%s,"%(Xmin[i]**0.5)
            write+="%s"%(ymin[0]**0.5)
            f = open(mindata,"w")
            f.write(write)
            f.close()

    #*********************** Append the score anyway
    f = open(fnscore,"a")
    f.write("%s\n"%(score))
    f.close()

    #****************************** Clear session to release memory
    tf.keras.backend.clear_session()

    return score

def generate_model(arr,dropout, nPercent, nShrink):
    inputsize = arr[0].shape[1]
    outputsize = arr[1].shape[1]

    neuronCount = int(nPercent * 20)
    
    #***************************** Construct neural network
    model = Sequential()
    layer = 0

    while neuronCount>2 and layer<5:
        #************************* The first (0th) layer needs an input input_dim(neuronCount)
        if layer==0:
            model.add(Dense(
                neuronCount, 
                name = "Input",
                input_dim=inputsize,
                kernel_initializer="he_uniform",
                use_bias=True,
                activation="relu"
            ))
        else:
            model.add(Dense(
                neuronCount, 
                kernel_initializer="he_uniform",
                use_bias=True,
                activation="relu"
            )) 

        layer += 1

        #*************************** Add dropout after each hidden layer
        model.add(Dropout(dropout,seed=constant))

        #*************************** Shrink neuron count for each layer
        neuronCount = neuronCount * nShrink

    #***************************** Output Layer
    model.add(Dense(
        outputsize,
        name="Output",
        kernel_initializer = "he_uniform",
        activation='relu',
        use_bias=True
    ))

    return model

 
