#! /bin/env python3
import numpy as np 
import pandas as pd 
import matplotlib.pyplot as plt
import seaborn as sns 
import os
import utils
import statistics
import math
import random
import time

#Import modules inside keras
import tensorflow as tf
from tensorflow.keras import backend,optimizers,initializers
from tensorflow.keras.models import Sequential, load_model
from tensorflow.keras.models import model_from_json
from tensorflow.keras.layers import Dense
from tensorflow.keras.activations import relu,tanh,sigmoid
from tensorflow.keras.callbacks import EarlyStopping, ModelCheckpoint
from sklearn.model_selection import StratifiedKFold

#Import scikitlearn for pre-processing the data
from sklearn.preprocessing import MinMaxScaler
from sklearn.model_selection import train_test_split
from sklearn.metrics import mean_squared_error

constant = 42
tf.random.set_seed(constant)

class NNModelSequential(object):
    def __init__(self):
        pass

    def load_training_data(self):
        self.df = pd.read_csv(self.fn_data)

    def pre_process_input(self,file=None):
        #loading training data
        self.load_training_data()

        #split the raw into input (X) and ouput(y)
        self.X_raw = self.df[self.df.columns[0:self.input_dim]].to_numpy()

        #Convert to 2D array
        y_raw = self.df[self.df.columns[-1]].to_numpy()
        self.y_raw = y_raw.reshape(-1,1)

        #Import the scaler
        self.mmx = MinMaxScaler()
        self.mmy = MinMaxScaler()

        self.mmx.fit(self.X_raw)
        self.mmy.fit(self.y_raw)

        #Scaling the data
        self.X_scaled = self.mmx.transform(self.X_raw)
        self.y_scaled = self.mmy.transform(self.y_raw)

        #Split into train test - 85% training 15% testing
        self.Xtrain,self.Xtest,self.ytrain,self.ytest = train_test_split(self.X_scaled,self.y_scaled,test_size=0.20)
        
        return self.X_scaled,self.y_scaled
    
    def initiate_early_stop(self):
        self.es = EarlyStopping(monitor='loss', mode='min',verbose=1,patience=100,restore_best_weights=True)
    
    def initiate_check_point(self):
        self.filepath = "a.h5"
        self.checkpoint = ModelCheckpoint(self.filepath,monitor='loss',verbose=1,save_best_only=True,mode='min')


    def training_NN(self,prefix_res,input_dim,output_dim,network_layout,learning_rate,epochs,batch_size,count,activation,initializer,ES=False,max_epochs=2000,verbose=1,with_validation=False):
        self.prefix_res = prefix_res
        self.input_dim = input_dim
        self.output_dim = output_dim
        self.network_layout = network_layout
        self.learning_rate = learning_rate
        self.opt = optimizers.Adam(learning_rate = learning_rate)
        self.epochs = epochs
        self.batch_size = batch_size
        self.activation = activation
        self.kernel_initializer = initializer

        self.initiate_check_point()

        if not os.path.exists(self.prefix_res):
            os.makedirs(self.prefix_res)

        stagnant = True
        self.loss = 200

        ii = 0
        while stagnant: #If the model stagnant due to a bad weight initialization, build a new model with the same configuration
            print("ITERATION.......................................................",ii)
            ######################  BUILD MODEL ############################ 
            #Building the neural network
            self.model = Sequential()

            #Adding input layer and first hidden layer
            self.model.add(Dense(network_layout[0],  
                            name = "Input",
                            input_dim=self.input_dim,
                            kernel_initializer=self.kernel_initializer,
                            use_bias=True,
                            activation=self.activation))

            #Adding the rest of hidden layer
            for numneurons in self.network_layout[1:]:
                self.model.add(Dense(numneurons,
                                kernel_initializer=self.kernel_initializer,
                                activation=self.activation))

            #Adding the output layer
            self.model.add(Dense(self.output_dim,
                            name="Output",
                            kernel_initializer=self.kernel_initializer,
                            activation=self.activation))

            '''
            fixing the problem of super high MAPE 
            https://stackoverflow.com/questions/49729522/why-is-the-mean-average-percentage-errormape-extremely-high
            '''
            backend.set_epsilon(1)

            #Training the model
            '''
            More into epoch and batch size
            https://machinelearningmastery.com/difference-between-a-batch-and-an-epoch/
            '''

            #discard previous weight and start from fresh when the model got stuck
            print("COMPILE!")
            self.model.compile(optimizer=self.opt,loss='mse',metrics=['mse','mae','mape'])
            
            self.model.summary()
                
            if ES : #Use early stopping
                if with_validation:
                    self.initiate_early_stop()
                    history = self.model.fit(
                    x=self.Xtrain,
                    y=self.ytrain,
                    validation_data=(self.Xtest,self.ytest),
                    batch_size=self.batch_size,
                    epochs=self.epochs,
                    verbose=verbose,
                    callbacks=[self.es]
                    )
                else:
                    self.initiate_early_stop()
                    history = self.model.fit(
                    x=self.Xtrain,
                    y=self.ytrain,
                    batch_size=self.batch_size,
                    epochs=self.epochs,
                    verbose=verbose,
                    callbacks=[self.es]
                    )

            else:
                history = self.model.fit(
                x=self.Xtrain,
                y=self.ytrain,
                batch_size=self.batch_size,
                verbose=verbose,
                epochs=self.epochs
                )
           
            losses = history.history['loss'][:]
            self.loss = min(losses)

            delta = losses[-1]-losses[-2]
            print("DELTA: ",delta)
            
            def nearly_equal(a,b,sig_fig=5):
                return (a==b or 
                        int(a*10**sig_fig) == int(b*10**sig_fig)
                    )
            stagnant = nearly_equal(abs(delta),0,7)

            if stagnant:
                print("Stagnant Model! Re-initialize")
            else:
                print("Not Stagnant!")
                
            
        #Save model
        self.fn_res = self.prefix_res+'surrogate_model_%s'%(count)
        
        print(self.fn_res)
        print("Save model to disk..................")
        self.model.save(self.fn_res) # ===> save model in SavedModel format
        print("Done..................")
        return self.model
    
    def predict(self,x,y,verbose=0):
        
        x = np.array(x)
        x = np.reshape(x,(-1,len(x)))

        #Load the session and predict scaled value
        self.load_NN()
        y_predict = self.loaded_model.predict(x)

        if verbose > 0:
            print('prediction =',y_predict,'true value = ',y)
        return y_predict

        
    def load_NN(self):
        self.loaded_model = tf.keras.models.load_model(self.fn_res)
        return self.loaded_model
    

class PostProcess(object):
    def __init__(self,numrandomnewdata,UB,LB,prefix_random_file,fn_training_data):
        self.newdata = numrandomnewdata
        self.UB = UB
        self.LB = LB
        self.numinputs = len(self.UB)
        self.prefix = prefix_random_file
        self.fn_training_data = fn_training_data
    
    def generate_data_frame_random_points(self):
        self.LHS = utils.generate_LHS(self.UB,self.LB,self.numinputs,self.newdata)
        self.fn_random = utils.generate_training_data_set(self.LHS,self.prefix)
        self.data_random = np.genfromtxt(self.fn_random,delimiter=',')
        self.X_random_raw = self.data_random[:,0:self.numinputs]
        self.y_random_raw = self.data_random[:,self.numinputs]
        self.y_random_raw = self.y_random_raw.reshape(-1,1)

    def post_process(self,K_subsets,MMX,MMY,prefix_res,models):
        #Instantiate Jackknife and eucledian distance list
        self.JKVal = []
        self.nndp_master = []

        assert(self.X_random_raw.shape[0] == self.newdata)
        
        #Calculating Jackknife variance
        JackKnifePseudoValue = [] 

        for k in range(K_subsets):
            #Load the Kth ANN model
            mod = models[k]

            #Load the ANN model that was trained using all data
            modall = models[K_subsets]

            #Choose the scaler for Kth ANN model
            self.mmx = MMX[k]
            self.mmy = MMY[k]

            #Choose the scaler for the overall ANN model
            self.mmxall = MMX[-1]
            self.mmyall = MMY[-1]

            #Transform X_random_raw using the respective scalers - Kth scaler and overall scaler
            self.X_random_scaled = self.mmx.transform(self.X_random_raw)
            self.X_random_scaled_all = self.mmxall.transform(self.X_random_raw)

            #Predict the data using the Kth ANN and Overall ANN after then inverse transform
            y_random_pred_scaled = mod.predict(self.X_random_scaled)
            y_random_real = self.mmy.inverse_transform(y_random_pred_scaled)

            y_random_pred_all_scaled = modall.predict(self.X_random_scaled_all)
            y_random_real_all =  self.mmyall.inverse_transform(y_random_pred_all_scaled)

            yjk = K_subsets * y_random_real_all - (K_subsets-1) * y_random_real
            JackKnifePseudoValue.append(yjk)
        
        #Computing Jack Knife variance Variance DOI: 10.1021/acs.iecr.9b02758
        assert(len(JackKnifePseudoValue) == K_subsets)
        assert(len(JackKnifePseudoValue[0]) == self.newdata)
        
        for i in range(self.newdata):
            b = 0
            for j in range(K_subsets):
                b += JackKnifePseudoValue[j][i]

            meanJackKnifePesudoValue = b / K_subsets
            a=0

            for j in range(K_subsets):
                a += (JackKnifePseudoValue[j][i] - meanJackKnifePesudoValue)**2
            JKi = 1 / (K_subsets*(K_subsets-1)) * a[-1]

            #Append the JK for point i to the JKVal list (for all points)
            self.JKVal.append(JKi) 

        assert(len(self.JKVal) == self.newdata)

        for i in range(self.X_random_raw.shape[0]):
            #Compute eucledian distance between ith random point to each existing X
            #Read the existing training data
            data = np.genfromtxt(self.fn_training_data,delimiter=',')
            self.X_raw_training = data[:,0:self.numinputs]
            assert(self.X_raw_training.shape[1] == self.X_random_raw.shape[1])
            dist = []

            for j in range(self.X_raw_training.shape[0]):
                dd = 0
                #Sum of delta X square
                for l in range(self.X_raw_training.shape[1]):
                    dd += (self.X_raw_training[j,l] - self.X_random_raw[i,l])**2
                
                #Sqrt the ddy
                d = math.sqrt(dd)
                dist.append(d)
            
            #Append the smalles distance value
            self.nndp_master.append(min(dist))

        #print("Variance = ",self.JKVal)
        #print("Eucledian Distance = ",self.nndp_master)

        assert(len(self.nndp_master) == len(self.JKVal))
        return self.nndp_master,self.JKVal
    
    def choose_point(self,SF,adaptive_fraction=0.9):
        #Instantiate list to store the "ranking" of the random points
        eta_p = []

        #Loop over all points
        for i in range(len(self.nndp_master)):
            e_p = self.nndp_master[i] / max(self.nndp_master) * (1-adaptive_fraction) + self.JKVal[i]/max(self.JKVal) * adaptive_fraction
            eta_p.append(e_p * -1) #times -1 so that when use np.argsort, automatically sort from biggest to smallest eta_p
        
        #How many points to take?
        howmany = int(self.X_raw_training.shape[0] * SF)

        #Finding the maximum index
        index_total = np.argsort(eta_p)
        self.index = index_total[0:howmany]
        print("INDEX OF THE NEW DATA: ",self.index)
        #Get the points from the X_random_raw
        self.points = []
        for index in self.index:
            self.points.append(self.X_random_raw[index,:])
        return self.points
    


    
