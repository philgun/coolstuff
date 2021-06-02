constant=42
import logging, os,shutil,time,functools
logging.disable(logging.WARNING)
os.environ["TF_CPP_MIN_LOG_LEVEL"] = "3"

import warnings
warnings.filterwarnings("ignore",category = RuntimeWarning)

import numpy as np
np.random.seed(constant)
import tensorflow as tf
tf.random.set_seed(constant)

#Let tensorflow run in eager mode: tensor mathematical operation is executed directly
tf.config.run_functions_eagerly(True)
tf.get_logger().setLevel(3)

import numpy as np
import pandas as pd
import glob
import os
import traceback

from tensorflow import keras
import keras
import pickle

from tensorflow.keras import backend, initializers, optimizers
from tensorflow.keras.models import Sequential
from tensorflow.keras.layers import Dense, Dropout
from tensorflow.keras.activations import relu, tanh, sigmoid
from tensorflow.keras.callbacks import EarlyStopping

from sklearn.preprocessing import MinMaxScaler
from sklearn.metrics import mean_squared_error, r2_score, mean_absolute_percentage_error
from sklearn.model_selection import train_test_split
from sklearn.utils import resample
from matplotlib import pyplot as plt

import seaborn as sns
from joblib import dump,load

class Data(object):
    def __init__(self, dir):
        self.dir = dir
        self.fns = glob.glob("%s/rawdata*"%(self.dir))

    def generate_raw_data(self, N):
        #This function is to generate the data matrix
        #Input is (hf_i, hp_i, hf_i-1, hf_i+1, T_amb, u_flow, mp, dz, eta, U_bot) at time t

        self.N = N
        self.sections = np.arange(1,self.N+1,dtype=np.int32)

        #Loop through the sections
        for fn in self.fns:
            dfs = []
            print("Processing %s"%(fn))
            self.df_raw = pd.read_csv(fn)

            #Filter the df from the temperatures that wont satisfy ZK 
            self.df_raw = self.df_raw[
                (self.df_raw.Tf_100 > 680 + 273.15) &
                (self.df_raw.Tf_1 < 550 + 273.15)
            ]
            if self.df_raw.shape[0] > 1:
                for i in self.sections:
                    #Get the simulation time
                    time_simul = self.df_raw["time"]

                    #Get the constants
                    rho_f_avg = self.df_raw["rho_f_avg"]
                    dz = self.df_raw["dz"]
                    U_bot = self.df_raw["U_bot"]
                    U_wall = self.df_raw["U_wall"]
                    eta = self.df_raw["eta"]
                    m_p = self.df_raw["m_p"]
                    i_s = pd.Series(
                        data = np.ones(
                            (self.df_raw.shape[0])
                        )
                    )*i

                    #Get the operational parameters
                    T_amb = self.df_raw["T_amb"]
                    u_flow = self.df_raw["u_flow"]

                    #Get the state of the discretisation
                    hp_i = self.df_raw["hp_%s"%(i)]
                    hf_i = self.df_raw["hf_%s"%(i)]

                    #Get the state from the adjacent cells: depends on the flow of the fluid and section
                    if i not in [1,100]:
                        #Mid sections
                        hf_i_minus_1 = self.df_raw["hf_%s"%(i-1)]
                        hf_i_plus_1 = self.df_raw["hf_%s"%(i+1)]

                        hp_i_minus_1 = self.df_raw["hp_%s"%(i-1)]
                        hp_i_plus_1 = self.df_raw["hp_%s"%(i+1)]

                    elif i==self.N:
                        #This is for the top node filler    
                        hp_i_minus_1 = self.df_raw["hp_%s"%(i-1)] #hp_99 
                        hp_i_plus_1 = self.df_raw["hp_100"] * 0 #hp_101 does not exist

                        #This is for the top node fluid
                        if u_flow.iloc[0] < 0:
                            #Charging - flow top to bot
                            hf_i_plus_1 = self.df_raw["h_in"]
                            hf_i_minus_1 = self.df_raw["hf_%s"%(i-1)]
                        else:
                            #Disharging - flow bot to top
                            hf_i_plus_1 = self.df_raw["h_out"]
                            hf_i_minus_1 = self.df_raw["hf_%s"%(i-1)]

                    elif i==1:
                        #This is for the bottom node filler 
                        hp_i_minus_1 = self.df_raw["hp_1"] * 0 #hp_0 does not exist
                        hp_i_plus_1 = self.df_raw["hp_%s"%(i+1)] #hp_2 

                        #This is for the bottom node fluid
                        if u_flow.iloc[0] < 0:
                            #Charging - flow top to bot
                            hf_i_plus_1 = self.df_raw["hf_%s"%(i+1)]
                            hf_i_minus_1 = self.df_raw["h_out"]
                        else:
                            #Disharging - flow bot to top
                            hf_i_plus_1 = self.df_raw["hf_%s"%(i+1)]
                            hf_i_minus_1 = self.df_raw["h_in"]
                    
                    df = pd.DataFrame(
                        zip(
                            time_simul,rho_f_avg,dz,U_bot,U_wall,eta,m_p,
                            T_amb,u_flow,
                            hp_i,hf_i,hf_i_minus_1,hf_i_plus_1,hp_i_minus_1,hp_i_plus_1,i_s
                            
                        ),
                        columns =[
                            "time","rho_f_avg","dz","U_bot","U_wall","eta","m_p",
                            "T_amb","u_flow",
                            "hp_i","hf_i","hf_i_minus_1","hf_i_plus_1","hp_i_minus_1","hp_i_plus_1","index"
                        ]
                    )

                    #Only take the 2nd to last row
                    dfs.append(df.iloc[1:-1])
                
                #Concat into one dataframe
                self.masterdf = dfs[0]
                lencheck = len(dfs[0])

                for i in range(1,len(dfs)):
                    self.masterdf = pd.concat(
                        [self.masterdf,dfs[i]],axis=0,sort=False
                    )
                    lencheck += len(dfs[i])
                self.masterdf.reset_index(drop=True)

                assert(
                    len(self.masterdf) == lencheck 
                )

                #Save dataframe into csv
                idx = 0
                while os.path.exists("./simulation_tank/res/data_pool/DataPool%s.csv"%(idx)):
                    idx+=1
            
                self.masterdf.to_csv("./simulation_tank/res/data_pool/DataPool%s.csv"%(idx),index=False)
    
    def generate_clean_dataset(self,dirname, dirtarget):
        self.dir_datapool = dirname
        self.dirtarget = dirtarget
        
        if not os.path.exists(self.dirtarget):
            os.makedirs(self.dirtarget)

        fns = glob.glob("%s/Data*"%(self.dir_datapool))
        
        #loop over the csv
        for i, f in enumerate(fns):
            print("processing file no: %s from %s files"%(i+1, len(fns)))

            df = pd.read_csv(f)

            df = df.drop(columns=["index"],axis=1)
            
            #List to store Δtime
            _dt = []
            
            #List to store rho, dz, u_bot, u_wall, eta, m_p, T_amb, u_flow
            _rho = []
            _dz = []
            _U_bot = []
            _U_wall = []
            _eta = []
            _m_p = []
            _T_amb = []
            _u_flow = []

            #list to store the state of the cell + adjacent cells
            _hf = []
            _hf_plus = []
            _hf_minus = []

            _hp = []
            _hp_plus = []
            _hp_minus = []

            #List to store target states
            _hps = []
            _hfs = []

            for i in range(df.shape[0]-1):
                #Get the Δtime
                dt = df.time.iloc[i+1] - df.time.iloc[i]
                if dt > 0:
                    #Other vars
                    _dt.append(dt)
                    _rho.append(df.rho_f_avg.iloc[i])
                    _dz.append(df.dz.iloc[i])
                    _U_bot.append(df.U_bot.iloc[i])
                    _U_wall.append(df.U_wall.iloc[i])
                    _eta.append(df.eta.iloc[i])
                    _m_p.append(df.m_p.iloc[i])
                    _T_amb.append(df.T_amb.iloc[i])
                    _u_flow.append(df.u_flow.iloc[i])
                    
                    #States at the ith and adjacent cells
                    _hf.append(df.hf_i.iloc[i])
                    _hf_plus.append(df.hf_i_plus_1.iloc[i])
                    _hf_minus.append(df.hf_i_minus_1.iloc[i])

                    _hp.append(df.hp_i.iloc[i])
                    _hp_plus.append(df.hp_i_plus_1.iloc[i])
                    _hp_minus.append(df.hp_i_minus_1.iloc[i])

                    #Target states - states hp and hf at t+Δt
                    _hps.append(df.hp_i.iloc[i+1])
                    _hfs.append(df.hf_i.iloc[i+1])

            _df = pd.DataFrame(
                zip(_dt, _hf, _hp, _rho, _dz, _U_bot, _U_wall, _eta, _m_p, _T_amb, _u_flow, _hf_plus, _hf_minus, _hp_plus, _hp_minus, _hfs, _hps),
                columns = [
                    "dt", "hf", "hp","rho","dz","U_bot","U_wall","eta","mp","T_amb","u_flow","hf_plus","hf_minus", "hp_plus","hp_minus","target_hf", "target_hp"
                ]
            )

            fname = "%s/cleandata0.csv"%(self.dirtarget)
            index = 0
            while os.path.exists(fname):
                index += 1
                fname = "%s/cleandata%s.csv"%(self.dirtarget,index)
            
            _df.to_csv(fname,index=False)

class CustomModel(keras.Model):
    def __init__(self,hiddenlayers, mm_der, mmx_state):
        super().__init__()

        #Initialise state scaler
        self.mmx_state = mmx_state #in order hf, hp

        #Scaler for the derivative [dhf/dt, dhp/dt]
        self.mm_der = mm_der 
        self.der_max = mm_der.data_max_
        self.der_min = mm_der.data_min_

        self.der_delta = self.der_max - self.der_min
        self.der_delta_diag = tf.linalg.tensor_diag(self.der_delta)

        #Convert the minimum derivative into tensor with dim 1Xnum of states
        self.der_min_tensor = tf.constant(
            self.der_min, 
            shape=(1, self.der_min.shape[0]), 
            dtype=tf.float64
        )

        self.hiddenlayers = hiddenlayers
        self.inputdim = self.hiddenlayers[0]

        #hidden layers
        self.dense_layers = []
        for i, u in enumerate(self.hiddenlayers[1:]):
            if i==0: #Input dim
                self.dense_layers.append(
                    keras.layers.Dense(
                        u, 
                        input_dim=self.inputdim,use_bias=True,kernel_initializer="he_uniform")
                )
            else:
                self.dense_layers.append(
                    keras.layers.Dense(u,use_bias=True, kernel_initializer="he_uniform")
                )
      
    def call(self, inputs):
        #Forward pass
        x = inputs
        for layer in self.dense_layers:
            x = layer(x)
            
            #Relu activation function
            x = tf.nn.relu(x)
        return x

    def model(self):
        '''
        This method is the workaround to show the outputshape of each layer. If not using this, since we are implementing keras subclassing, the output for each layer is always showed as "multiple"
        '''
        x = keras.Input(shape=(self.inputdim))
        return keras.Model(inputs=[x], outputs=self.call(x))

    def compile(self, optimizer, loss):
        #Compile the model
        super().compile()

        #assign the opt and loss func
        self.optimizer = optimizer
        self.loss = loss

    def train_step(self,data):
        X, y = data

        #Forward pass under tape will be recorded for back-prop
        with tf.GradientTape() as tape:
            #Separate Δtime, yInit and X_in from the input set, and change the data type into float64
            dt = tf.dtypes.cast(X[:,0], tf.float64)
            y_init  = tf.dtypes.cast(X[:,1:3], tf.float64) #in order: h_fluid, h_p (filler)
            X_in = tf.dtypes.cast(X[:,1:], tf.float64)
            
            #Predict the dy/dt and convert the data type into float64 in order: dhfluid/dt, dhfiller/dt
            dy_dt_scaled = tf.dtypes.cast(
                self(X_in),tf.float64 
            )

            #Return the dy_dt to the original scale - since our model will be plugged into Modelica environment, the ANN model is used to predict the gradient (derivative of states) as such, the prediction has to be scalled back to the normal scale before being returned to Modelica, and Modelica will use this information to calculate the state at t+Δt

            #It follows this logic:
            #       dy_dt_real = ANN(inputs,params) * (der_max - der_min) + der_min

            #1st stack the der_min_tensor such that it has shape of batchsize x num of states being tracked (it is 2 in this case)
            b = dy_dt_scaled.get_shape().as_list()[0]
            der_min = tf.repeat(
                self.der_min_tensor,
                repeats=[b], 
                axis=0
            )

            #Return the dy/dt to original scale based on the abovementioned logic
            dy_dt_real = tf.math.add(
                tf.matmul(
                    dy_dt_scaled, self.der_delta_diag
                ), der_min
            )

            '''
            Starting from here, mimic what would Modelica solver does in solving the ODEs
            '''

            #Multiply dy_dt with dt https://stackoverflow.com/questions/47817135/   tensorflow-how-to-multiply-a-2d-tensor-matrix-by-corresponding-elements-in-a
            #in order: Δh_fluid, Δh_filler
            dy = tf.multiply(
                dy_dt_real, 
                tf.reshape(dt,(-1,1))
            ) 

            #Change back y_init to the real scale - in order h_fluid, h_filler
            y_init = tf.constant(
                self.mmx_state.inverse_transform(
                    y_init.numpy()
                ), dtype=tf.float64
            )     

            #Predict the next time step state - in order h_fluid, h_filler (h_p)
            y_pred = tf.math.add(
                dy, y_init
            )

            #Calculate the loss - the model does not want to learn the 2nd output as such try to give more emphasise at the 2nd output
            loss= self.loss(y,y_pred) #Normal MSE
       
        #Get all the variables that will be optimised by the optimiser
        training_vars = self.trainable_variables
        
        #Get the gradient - d(loss)/d(training_vars)
        grad = tape.gradient(loss, training_vars)

        #Apply the gradient descent
        self.optimizer.apply_gradients(
            zip(grad,training_vars)
        )

        #Update the metrics
        metrics.update_state(y,y_pred)

        #return {m.name : m.result() for m in self.metrics}
        return {"loss": loss, "MAPE": metrics.result()}

    def test_step(self,data):
        X, y = data

        #Separate Δtime, yInit and X_in from the input set, and change the data type into float64
        dt = tf.dtypes.cast(X[:,0], tf.float64)
        y_init  = tf.dtypes.cast(X[:,1:3], tf.float64) #in order: h_fluid, h_p (filler)
        X_in = tf.dtypes.cast(X[:,1:], tf.float64)
        
        #Predict the dy/dt and convert the data type into float64 in order: dhfluid/dt, dhfiller/dt
        dy_dt_scaled = tf.dtypes.cast(
            self(X_in),tf.float64 
        )

        #Return the dy_dt to the original scale - since our model will be plugged into Modelica environment, the ANN model is used to predict the gradient (derivative of states) as such, the prediction has to be scalled back to the normal scale before being returned to Modelica, and Modelica will use this information to calculate the state at t+Δt

        #It follows this logic:
        #       dy_dt_real = ANN(inputs,params) * (der_max - der_min) + der_min

        #1st stack the der_min_tensor such that it has shape of batchsize x num of states being tracked (it is 2 in this case)
        b = dy_dt_scaled.get_shape().as_list()[0]
        der_min = tf.repeat(
            self.der_min_tensor,
            repeats=[b], 
            axis=0
        )

        #Return the dy/dt to original scale based on the abovementioned logic
        dy_dt_real = tf.math.add(
            tf.matmul(
                dy_dt_scaled, self.der_delta_diag
            ), der_min
        )

        '''
        Starting from here, mimic what would Modelica solver does in solving the ODEs
        '''

        #Multiply dy_dt with dt https://stackoverflow.com/questions/47817135/   tensorflow-how-to-multiply-a-2d-tensor-matrix-by-corresponding-elements-in-a
        #in order: Δh_fluid, Δh_filler
        dy = tf.multiply(
            dy_dt_real, 
            tf.reshape(dt,(-1,1))
        ) 

        #Change back y_init to the real scale - in order h_fluid, h_filler
        y_init = tf.constant(
            self.mmx_state.inverse_transform(
                y_init.numpy()
            ), dtype=tf.float64
        )     

        #Predict the next time step state - in order h_fluid, h_filler (h_p)
        y_pred = tf.math.add(
            dy, y_init
        )

        #Calculate the loss - the model does not want to learn the 2nd output as such try to give more emphasise at the 2nd output
        loss = self.loss(y,y_pred) #Normal MSE

        #Update metrics
        metrics.update_state(y,y_pred)

        return {"loss": loss, "MAPE test": metrics.result()}

def generate_model(architectures, activation="relu"):
    model = Sequential()
    
    #input layer
    model.add(
        Dense(
            architectures[1],
            name = "Input",
            input_dim = architectures[0],
            kernel_initializer = "he_uniform",
            use_bias = True,
            activation = activation
        )
    )

    #Loop from data index 2
    for neuron in architectures[2:len(architectures)]:
        model.add(
            Dense(
                neuron,
                kernel_initializer="he_uniform",
                use_bias=True,
                activation = activation
            )
        ) 

    #Output layer
    model.add(
        Dense(
            architectures[-1],
            name="Output", 
            kernel_initializer = "he_uniform",
            activation = activation,
            use_bias = True
        )
    )

    return model

def train_test_validation_split(df, feature_names, label_names, test_size=0.1,validation_size=0.3):
    #Separate into test and train set
    df_train = df[0:int((1-test_size)*df.shape[0])].reset_index(drop=True)
    df_test = df[int((1-test_size)*df.shape[0]):].reset_index(drop=True)

    #Scale the training set - the one that is scaled is only the X, the state at t+Δt is not scaled, since we will inverse_transform the derivative - in order hf, hp
    mmx = MinMaxScaler()
    mmx_state = MinMaxScaler().fit(
        df_train[["hf","hp"]]
    )
    
    features = df_train[feature_names].copy()
    scaled_features = mmx.fit_transform(features.values)
    df_train[feature_names] = scaled_features

    X_scaled = df_train[df_train.columns[0:-2]]
    y = df_train[label_names]

    #Separate the training set into train and validation
    X_train, X_valid, y_train, y_valid = train_test_split(
        X_scaled, y, test_size = validation_size
    )

    #Print stuffs
    print(
        "Total data: %s data points\nTest data: %s data points\nTraining data: %s data points\nValidation data: %s data points\n"%(
            df.shape[0], df_test.shape[0], X_train.shape[0], X_valid.shape[0]
        )
    )

    try:
        assert(
            df.shape[0] - df_test.shape[0] - X_train.shape[0] - X_valid.shape[0] == 0
        )
    except:
        raise AssertionError("Assertion error! Test + Train + Validation data points are not equal to Total data")

    return X_train, X_valid, y_train, y_valid, df_test, mmx, mmx_state

def evaluate(model, X_test, y_test, y_init, mm_der, plot=True):
    #Separate dt from input
    X_in = X_test[:,1:]
    dt = X_test[:,0]

    #Calculate dy/dt in real scale
    dy_dt = model.predict(
            X_in
    )

    delta_der_val = mm_der.data_max_ - mm_der.data_min_
    delta_der = np.zeros(
            (delta_der_val.shape[0],delta_der_val.shape[0]),
            dtype=np.float64
    )
        
    np.fill_diagonal(delta_der,delta_der_val)    

    der_min = mm_der.data_min_

    #Return dy_dt to the original scale
    dy_dt = dy_dt.dot(delta_der) + der_min

    #Calculate prediction of state at time t+Δt
    dy = dy_dt * dt.reshape(-1,1)
    y_pred = dy + y_init

    #Calculate some metrics - 3 important numbers
    mse, r2, mape = round(mean_squared_error(y_pred, y_test, squared=False),3), round(r2_score(y_pred, y_test),6), round(mean_absolute_percentage_error(y_pred, y_test),5)

    df = pd.DataFrame(
        zip(
            abs(y_pred[:,0] - y_test[:,0]) ,  abs(y_pred[:,1] - y_test[:,1])
        ), columns=["delta_hf", "delta_hp"]
    )

    #Save the real pred
    pd.DataFrame(
        zip(y_pred[:,0], y_pred[:,1], y_test[:,0], y_test[:,1]),
        columns = ["hf_pred","hp_pred","hf_true","hp_true"]
    ).to_csv("./simulation_tank/fig/eval.csv",index=False)


    if plot == True:   
        #Form a list
        data = [
            [y_test[:,0], y_pred[:,0]],                 #Fluid real
            [y_test[:,1], y_pred[:,1]]                  #Filler real
        ] 
        
        fig,axes = plt.subplots(1,len(data), figsize=(15,10))

        labels = [
            "fluid","filler"
        ]

        titles = [
           "fluid","filler"
        ]
        
        for i,ax in enumerate(axes.flat):
            datapoints = data[i]

            ax.scatter(
                datapoints[0],datapoints[1], label = labels[i]
            )

            ax.legend()

            ax.set_title(titles[i])
            ax.set_xlabel("enthalpy test [J/kg]")
            ax.set_ylabel("enthalpy prediction [J/kg]")
        
        fig.suptitle("45° Plots between prediction vs test data. RMSE: %s , R$^2$: %s , MAPE: %s"%(mse, r2, mape))
        fig.savefig("./simulation_tank/fig/res.png")

        plt.show()

    return mse

def generate_final_data(wd):
    if not os.path.exists("%s/df_final.bin"%(wd)):
        fns = glob.glob("%s/clean*"%(wd))
        df_master = pd.read_csv(fns[0])
        
        df_master["delta_hf"] = df_master["target_hf"] - df_master["hf"]
        df_master["delta_hp"] = df_master["target_hp"] - df_master["hp"]

        df_master = df_master.drop(
            df_master[
                (df_master["delta_hf"] < 5) &
                (df_master["delta_hf"] > -5)
            ].sample(frac=0.95).index
        )
        
        for i in range(1,len(fns)):
            df = pd.read_csv(fns[i])
            df["delta_hf"] = df["target_hf"] - df["hf"]
            df["delta_hp"] = df["target_hp"] - df["hp"]

            df = df.drop(
                    df[
                    (df["delta_hf"] < 5) &
                    (df["delta_hf"] > -5)
                ].sample(frac=0.95).index
            )

            df_master = pd.concat(
                [df_master,df],axis=0
            )
            if (i+1)%50 == 0:
                print("Done appending %s df from total %s df"%(i+1,len(fns)))

        df_master.to_pickle("%s/df_final.bin"%(wd))
    else:
        df_master = pd.read_pickle("%s/df_final.bin"%(wd))
    return df_master

def downsample_data(wd, ub_majority, lb_majority, plot=True):
    '''
    This function is to downsample the majority class of the data (data < ub_majority and data > lb_majority).
    The category of downsampling is the value of d(state)/dt e.g. dhp/dt or dhf/dt
    '''

    #Process the cleanData[index].csv if no *.bin exists
    if not os.path.exists("%s/df_final_original.bin"%(wd)):
        fns = glob.glob("%s/clean*"%(wd))
        df_master = pd.read_csv(fns[0])
        df_master["delta_hf"] = df_master["target_hf"] - df_master["hf"]
        df_master["delta_hp"] = df_master["target_hp"] - df_master["hp"]
        
        for i in range(1,len(fns)):
            df = pd.read_csv(fns[i])
            df["delta_hf"] = df["target_hf"] - df["hf"]
            df["delta_hp"] = df["target_hp"] - df["hp"]

            df_master = pd.concat(
                [df_master,df],axis=0
            )
            if (i+1)%50 == 0:
                print("Done appending %s df from total %s df"%(i+1,len(fns)))

        df_master.to_pickle("%s/df_final_original.bin"%(wd))
    else:
        df_master = pd.read_pickle("%s/df_final_original.bin"%(wd))
    
    #Calculates the d(state)/dt - in order dfluid/dt and dfiller/dt
    df_master["dhf_dt"] = df_master["delta_hf"] / df_master["dt"] 
    df_master["dhp_dt"] = df_master["delta_hp"] / df_master["dt"] 

    #Divide the dataframe into two big classes - majority and minority
    df_majority = df_master[
        (df_master.dhf_dt > lb_majority)&    
        (df_master.dhf_dt <= ub_majority)
    ]

    df_minority = df_master[
        (df_master.dhf_dt < lb_majority)|    
        (df_master.dhf_dt > ub_majority)
    ]

    #Downsample the majority class using resample method from sklearn.utils
    df_majority_down_sampled = resample(
        df_majority,
        replace=False,
        n_samples=int(0.05e7),
        random_state=constant
    )

    #Append the df_majority_downsampled with df_minority
    df_downsampled = pd.concat(
        [df_majority_down_sampled, df_minority], 
        axis=0
    ).reset_index(drop=True)
    
    #Plotting stuffs
    if plot==True:
        fig,ax = plt.subplots(1,2)
        sns.distplot(df_master["dhf_dt"],ax=ax[1],kde=False, hist=True)
        sns.distplot(df_master["dhp_dt"],ax=ax[0],kde=False, hist=True)
        fig.suptitle("Original Distribution")

        fig,ax = plt.subplots(1,2)
        sns.distplot(df_downsampled["dhp_dt"],ax=ax[0],kde=False, hist=True)
        sns.distplot(df_downsampled["dhf_dt"],ax=ax[1],kde=False, hist=True)
        fig.suptitle("Distribution of downsampled")
        plt.show()

    #Scaler of the state derivative
    mm_der = MinMaxScaler().fit(
        df_downsampled[["dhf_dt","dhp_dt"]].values
    )

    #Randomly shuffle the data before returned
    df_downsampled = df_downsampled.sample(frac=1).reset_index(drop=True)

    #Drop Δhf and Δhp and d(state)/dt
    df_downsampled = df_downsampled.drop(columns=["delta_hf","delta_hp","dhp_dt","dhf_dt"])

    return df_downsampled, mm_der

if __name__ == "__main__":
    #datadir = "./simulation_tank/res"
    #data = Data(datadir)
    #data.generate_raw_data(N=100)
    #dirdatapool = "./simulation_tank/res/data_pool"
    #dirtarget = "./simulation_tank/res/clean_data"
    #data.generate_clean_dataset(dirdatapool, dirtarget)
    
    #Directory where the clean_data are stored
    wd = "./simulation_tank/res/clean_data"
    fsave = "./simulation_tank/dyn_tank_3"
    
    #Generate the downsample data - already shuffled
    df_master, mm_der = downsample_data(
        wd, ub_majority=400000, lb_majority=-100000, plot=True
    )
    
    #Split the data into test, training and validation split. Test size is 20% of the total number of data, while validation size is 30% of the total data - test data
    featurenames = df_master.columns[1:15]
    labelnames = ["target_hf","target_hp"]

    X_train, X_valid, y_train, y_valid, df_test, mmx, mmx_state = train_test_validation_split(df_master, featurenames, labelnames, test_size=0.2)

    print(X_train)
    print(y_train)

    #Change to  numpy.ndarray dtype
    X_train, X_valid, y_train, y_valid = X_train.to_numpy(), X_valid.to_numpy(), y_train.to_numpy(), y_valid.to_numpy()
    
    try:
        isinstance(X_train,(np.ndarray))
        isinstance(y_train,(np.ndarray))
        isinstance(X_valid,(np.ndarray))
        isinstance(y_valid,(np.ndarray))
    except:
        raise TypeError("X_train, X_valid, y_train, y_valid are not np.ndarray")

    #Dump stuffs
    dump(df_test,"./simulation_tank/df_test.pkl")
    dump(df_master,"./simulation_tank/df_downsampled.pkl")
    dump(mmx,"./simulation_tank/mmx.pkl")
    dump(mm_der,"./simulation_tank/mm_der.pkl")
    
    
    #Start building the model using keras subclassing - https://www.tensorflow.org/guide/keras/save_and_serialize
    # IN    --      H1      --      H2      --      H3      --      OUT
    # 14    --      20      --      20      --      20      --      2
    architectures = [14,20,20,20,2]
    model = CustomModel(
        architectures, mm_der, mmx_state
    )

    #Build the model
    input_arr = tf.random.uniform((1,14))
    outputs = model(input_arr)
    model.model().summary()

    #initialise the metrics and optimizer and compile the model
    metrics = keras.metrics.MeanAbsolutePercentageError(name="MAPE")
    optimizer = optimizers.Adam(lr=1e-3)

    #Compile the model
    model.compile(
        optimizer=optimizer,
        loss = keras.losses.MeanSquaredError()
    )

    #Set tf keras backend epsilon to 1 so MAPE is scaled to the normal scale
    backend.set_epsilon(1)

    
    #Training with custom-fit
    model.fit(
        X_train, 
        y_train, 
        validation_data=(X_valid, y_valid),
        batch_size = int(X_train.shape[0]/600), #turn data into 600 batches
        epochs = 500
    )

    #Save the trained model
    model.save(fsave)
    
    
    #Load the trained-model, df_test, mmx and mmy
    trained_model = keras.models.load_model(fsave)

    
    #Separate the intiial state (state at t) from the data
    y_init = df_test[["hf","hp"]]
    y_init = y_init.to_numpy()

    #Scale the input
    features = df_test[featurenames].copy()
    scaled_features = mmx.fit_transform(features.values)
    df_test[featurenames] = scaled_features
    
    X_test_scaled = df_test[df_test.columns[0:-2]]
    X_test_scaled = X_test_scaled.to_numpy()

    #Separate the target state (state at t + Δtime) from the data
    y_test = df_test[labelnames]
    y_test = y_test.to_numpy()


    #Evaluate the model using test data set
    res = evaluate(trained_model, X_test_scaled, y_test, y_init, mm_der)    
  
    
    
    






