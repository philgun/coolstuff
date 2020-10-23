import numpy as np 
import pandas as pd 
import matplotlib.pyplot as plt
import os
import pickle

#Import modules inside keras
from keras import optimizers
from keras import backend
from keras.models import Sequential
from keras.models import model_from_json
from keras.layers import Dense
from keras.activations import relu,tanh,sigmoid

#Import scikitlearn for pre-processing the data
from sklearn.preprocessing import MinMaxScaler, StandardScaler, Normalizer
from sklearn.model_selection import train_test_split

#Import dataset
fn = "/home/philgun/Desktop/python-project/ML/data/res.csv"
df = pd.read_csv(fn)

df.tamb_C = df.tamb_C + 273.15
df.tin_C = df.tin_C + 273.15
df.q_W = df.q_W/1e6

df.columns = ["h_m","q_MW","tamb_K","tin_K","tout_K","mdot"]

print(df.head())

#Input and output number
outputdim = 1
inputdim = 4 #in order: height[m], Q_in[W],T ambient

#Find the min and max value
minval = df.min()
maxval = df.max()
min=[]
max=[]

for i in range(inputdim):
    min.append(minval[i])
    max.append(maxval[i])

print(minval)
print(maxval)

######################  DATA PRE_PROCESSING ############################ 

#split the raw into input (X) and ouput(y)
X_raw = df[df.columns[0:inputdim]].to_numpy()

y_raw = df.mdot.to_numpy()
y_raw = y_raw.reshape(-1,1)

#Import the scaler
ss = StandardScaler()
mm = MinMaxScaler()

#Scaling the data
X_scaled = mm.fit_transform(X_raw)
y_scaled = mm.fit_transform(y_raw)

#Split into train test - 85% training 15% testing
Xtrain,Xtest,ytrain,ytest = train_test_split(X_scaled,y_scaled,test_size=0.15)

######################  HYPER PARAMETER ############################ 
'''
Literature source to determine  as mmthe hyper parameter
https://web.archive.org/web/20140721050413/http://www.heatonresearch.com/node/707
'''

#Number of neurons in each hidden layer < 2*input_dim
num_neurons = 2*inputdim

#Neural network architecture
network_layout = []
for i in range(3):
    network_layout.append(num_neurons)

activation ='relu'
activation_out = 'relu'
learning_rate = 0.001
opt = optimizers.Adam(learning_rate = learning_rate)
epochs = 200
batch_size = 100

######################  BUILD MODEL ############################ 

#Building the neural network
model = Sequential()

#Adding input layer and first hidden layer
model.add(Dense(network_layout[0],  
                name = "Input",
                input_dim=inputdim,
                kernel_initializer='he_normal',
                activation=activation))

#Adding the rest of hidden layer
for numneurons in network_layout[1:]:
    model.add(Dense(numneurons,
                    kernel_initializer = 'he_normal',
                    activation=activation))

#Adding the output layer
model.add(Dense(outputdim,
                name="Output",
                kernel_initializer="he_normal",
                activation="relu"))

'''
fixing the problem of super high MAPE 
https://stackoverflow.com/questions/49729522/why-is-the-mean-average-percentage-errormape-extremely-high
'''
backend.set_epsilon(1)

#Compiling the model
model.compile(optimizer=opt,loss='mse',metrics=['mse','mae','mape'])
model.summary()

#Training the model
'''
More into epoch and batch size
https://machinelearningmastery.com/difference-between-a-batch-and-an-epoch/
'''
history = model.fit(x=Xtrain,y=ytrain,validation_data=(Xtest,ytest),batch_size=32,epochs=epochs)

#Printing final scores from the last epoch
print("History test score: ",history.history["val_loss"][epochs-1])
print("History test percent error : ",history.history["val_mape"][epochs-1])

#Plot loss during training
plt.figure()
plt.plot(history.history['mse'],label='MSE training')
plt.plot(history.history['mae'],label='MAE training')
plt.plot(history.history['val_mse'],label='MSE validation')
plt.plot(history.history['val_mae'],label='MAE validation')
plt.legend()

plt.figure()
plt.plot(history.history['mape'],label='MAPE training')
plt.plot(history.history['val_mape'],label='MAPE validation')
plt.legend()

plt.show()

# Evaluate the ANN
y_predict = model.predict(X_scaled)
rmse = np.sqrt(np.mean(y_predict - y_scaled)**2)
print("Root mean square error: %s"%rmse)

# Dump it using pickle
filename = "/home/philgun/Desktop/python-project/ML/trained-model/rcv-control.sav"
pickle.dump(model,open(filename,'wb'))

print("Save model to disk..................")

print("Reload model from disk..................")

#Reload the model 
loaded_model = pickle.load(open(filename, 'rb'))

print("Finished loading!")

#Evaluate the model
y_predict_load = loaded_model.predict(X_scaled)
rmse2 = np.sqrt(np.mean(y_predict_load-y_scaled)**2)
print("Root mean square error from loaded model: %s"%rmse2)

assert(rmse-rmse2 < 1e-5)

print("Assertion success!")

# Predict real data
y_predict_real = mm.inverse_transform(loaded_model.predict(X_scaled))
rmse_real = np.sqrt(np.mean(y_predict_real-y_raw)**2)
print("Root mean square error from loaded model: %s [kg/s]"%rmse_real)






