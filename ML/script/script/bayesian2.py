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
tf.config.run_functions_eagerly(True)
tf.get_logger().setLevel(3)

import pandas as pd
from tensorflow.keras import backend, initializers,optimizers
from tensorflow.keras.models import Sequential
from tensorflow.keras.layers import Dense,Dropout
from tensorflow.keras.activations import tanh,relu
from tensorflow.keras.callbacks import EarlyStopping

from sklearn.preprocessing import MinMaxScaler, StandardScaler
from sklearn.metrics import r2_score, mean_squared_error, mean_absolute_error
from sklearn.model_selection import train_test_split
from bayes_opt import BayesianOptimization as BO

from joblib import dump,load
    
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

    X_train = train_raw[:,0:inputsize]
    y_train = train_raw[:,inputsize]
    
    X_test_raw = test_raw[:,0:inputsize]
    y_test_raw = test_raw[:,inputsize]

    Xtrain_raw, Xvalid_raw, ytrain_raw, yvalid_raw = train_test_split(
        X_train, 
        y_train,
        test_size=0.1
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
        raise ValueError(
            "Scaling method not valid, use either 'MinMax' for MinMaxScaler, 'StandardScaler' for Standard Scaler,your choice is: %s"%(scaling_method)
        )

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

def eval_net(wd,verbose,scaling_method,fntrain,fntest,inputsize,outputsize,batch_size,ub,lb,weight,nPercent,nShrink,lr,dropout):
    #****************************** Regenerate the dataset
    arr = preprocessing(
        wd,
        fntrain,
        fntest,
        inputsize,
        outputsize,
        scaling_method
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

    #****************************** Generate Model
    model = generate_model(arr,dropout,nPercent,nShrink)

    #****************************** Compile model and callbacks
    model.compile(
        optimizer=optimizers.Adam(lr=lr),
        loss=WeightedMSE(mmy ,ub, lb, weight) #Custom losses
    )

    monitor = EarlyStopping(
        monitor="val_loss",
        mode='min', 
        min_delta=1e-3,
        patience=50,
        restore_best_weights=True
    )
    
    backend.set_epsilon(1)

    #****************************** Train
    model.fit(
        x=Xtrain,
        y=ytrain,
        validation_data=(Xvalid,yvalid),
        batch_size=batch_size,
        epochs=int(5000),
        callbacks=[monitor],
        verbose=verbose
    )

    #****************************** Save prediction of training data vs true training data
    #Scalled
    pred_train = model.predict(Xtrain)
    df = pd.DataFrame(zip(pred_train[:,0],ytrain[:,0]),columns=['Prediction_Training_Scalled','YTrain_Scalled'])
    df.to_csv("%s/bias_scalled.csv"%(wd),index=False)

    #Unscalled
    pred_train_unscalled = mmy.inverse_transform(pred_train)
    ytrain_unscalled = mmy.inverse_transform(ytrain)
    df = pd.DataFrame(zip(pred_train_unscalled[:,0],ytrain_unscalled[:,0]),columns=['Prediction_Training','YTrain'])
    df.to_csv("%s/bias_unscalled.csv"%(wd),index=False)

    #****************************** Predict test data
    pred = model.predict(Xtest)

    #****************************** Save prediction of test data vs true test data
    #Scalled
    df = pd.DataFrame(zip(pred[:,0],mmy.transform(y_test_raw)[:,0]),columns=['Prediction_Scalled','Test_Scalled'])
    df.to_csv("%s/prediction_vs_test_Scalled.csv"%(wd),index=False)

    #Unscalled
    pred = mmy.inverse_transform(pred)      
    df = pd.DataFrame(zip(pred[:,0],y_test_raw[:,0]),columns=['Prediction','Test'])
    df.to_csv("%s/prediction_vs_test_Unscalled.csv"%(wd),index=False)

    #*************************** Get the weight vector    
    N_common = np.count_nonzero((y_test_raw>lb) & (y_test_raw < ub))
    N_rare = y_test_raw.shape[0] - N_common

    weight_vector = []

    for i in range(y_test_raw.shape[0]):
        v = y_test_raw[i,0]
        if v > lb  and v < ub:
            weight_vector.append(1) #y_test_raw.shape[0] / N_common  #The majority  --> less penalised
        else:
            weight_vector.append(weight) #y_test_raw.shape[0] / N_rare #The minority --> more penalised

    #*************************** Get the weighted-MSE    
    weighted_squared_error = sum(
        (y_test_raw[:,0] - pred[:,0])**2 * weight_vector
    )
    score = weighted_squared_error/(y_test_raw.shape[0])    #Calculate the mean weighted squared error

    score = score * -1 #Multiply the score to make it as a minimisation problem

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
        f.write("%s\n"%(-10000))
        f.close()

    #*************************** Get the best score (RMSE)
    dfscores = pd.read_csv(fnscore)
    bestScore = dfscores.Scores.max()
    
    #****************************** If score at this iteration is better than historical score then:
    if score > bestScore:
        #****************************** Save model --> sc = joblib.load('std_scaler.bin') --> when load later
        model.save("%s/surrogate_model"%(wd)) 
        dump(mmx,"%s/mmx.bin"%(wd))
        dump(mmy,"%s/mmy.bin"%(wd))

        #****************************** Save Prediction vs test data
        df = pd.DataFrame(zip(pred[:,0],y_test_raw[:,0]),columns=['Prediction','Test'])
        df.to_csv("%s/prediction_vs_test_best.csv"%(wd),index=False)

        #****************************** Save the boundaries of the better model
        if scaling_method == "MinMax":
            maxdata = "%s/max.txt"%(wd)
            mindata = "%s/min.txt"%(wd)

            Xmax = mmx.data_max_

            try:
                ymax = mmy.data_max_
            except:
                ymax=[-100000000]

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
                ymin = [-100000000]

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
                ymax = [-10000000]

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
                ymin = [-10000000]

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

    #****************************** Clear Session to release memory
    tf.keras.backend.clear_session()

    return score

def generate_model(arr,dropout, nPercent, nShrink):
    inputsize = arr[0].shape[1]
    outputsize = arr[1].shape[1]

    neuronCount = int(nPercent * 30)
    
    #***************************** Construct neural network
    model = Sequential()
    layer = 0

    while neuronCount>2 and layer<10:
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

class WeightedMSE(tf.keras.losses.Loss):   
    '''
    Modified MSE that includes weight based on the frequency of data point of a class. The majority data point will be penalised less than minority, as such, it is expected that the ANN learn better at the minority data point
    '''
    def __init__(self,mmy,ub,lb,weight,name="weighted_mse"):
        super().__init__(name=name)
        self.mmy = mmy
        self.lb = lb
        self.ub = ub
        self.weight = weight

    def call(self, y_true, y_pred):
        # Transfrom back y_true scalled into unscalled
        y_true_unscalled = self.mmy.inverse_transform(y_true.numpy().reshape(-1,1))

        #Count how many data points belong to the rare and commmon classes
        N_common = np.count_nonzero((y_true_unscalled[:,0]>self.lb) & (y_true_unscalled[:,0] < self.ub))
        N_rare = y_true_unscalled.shape[0] - N_common

        weight_vector = []
        
        #Construct the weight vector
        for i in range(y_true_unscalled.shape[0]):
            if y_true_unscalled[i,0] > self.lb and y_true_unscalled[i,0] < self.ub: 
                weight_vector.append(1)#(y_true.shape[0]/N_common)    #The majority --> put less penalty here
            else :
                weight_vector.append(self.weight)#(y_true.shape[0]/N_rare)     #The minority --> put more penalty here

        #Convert weight into tensor
        weight_vector = tf.constant(
            np.array(weight_vector).reshape(-1,1),dtype=tf.float32
        )

        #Error * weight
        raw_squared_error = tf.math.multiply(tf.square(y_true-y_pred) , weight_vector)
        
        #Calculate MSE
        mse = tf.math.reduce_mean(raw_squared_error)

        return mse
    
