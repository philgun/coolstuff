import numpy as np
import matplotlib.pyplot as plt
from matplotlib import cm
from mpl_toolkits.mplot3d import Axes3D
import tensorflow as tf
from tensorflow import keras

from keras.models import Sequential
from keras.layers import Dense, Activation
from keras.activations import relu,sigmoid,tanh

from sklearn.preprocessing import StandardScaler
from sklearn.preprocessing import MinMaxScaler
from sklearn.model_selection import train_test_split

from keras.wrappers.scikit_learn import KerasClassifier #wrapper
from sklearn.model_selection import GridSearchCV #hyper parameter optimiser

def scale(X, scaleInput):
    	#scale Input values to range [-1,1] in each dimension
	if (scaleInput):
		nom = (X -  X.min(axis=0))*2
		denom = X.max(axis=0)-X.min(axis=0)
		denom[denom==0]=1
		return -1 + nom/denom
	else:
		return X

def normalize(y, normalizeOutput):
   	# normalize output to z-score
    	if(normalizeOutput):
        	y_norm = (y - np.mean(y, axis=0))/np.std(y, axis=0);
        	return y_norm
    	else:
        	return y

def plot_results_2D(x_train, y_train, y_tr_pred):
    if x_train.shape[1] == 2 and y_train.shape[1]==1:
        n_train = x_train.shape[0]
        n_rt = np.sqrt(n_train).astype(int)
        X = np.zeros((n_rt, n_rt))
        Y = np.zeros((n_rt, n_rt))
        Z_true = np.zeros((n_rt, n_rt))
        Z_pred = np.zeros((n_rt, n_rt))
        for i in range(n_rt):
            for j in range(n_rt):
                X[i, j] = x_train[i * n_rt + j, 0]
                Y[i, j] = x_train[i * n_rt + j, 1]
                Z_true[i, j] = y_train[i * n_rt + j]
                Z_pred[i, j] = y_tr_pred[i * n_rt + j]
    
        fig = plt.figure(figsize=plt.figaspect(0.4))
        ax = fig.add_subplot(1, 2, 1, projection='3d')
        ax.plot_surface(X, Y, Z_true, cmap=cm.coolwarm)
        ax.set_title('training data')
    
        ax = fig.add_subplot(1, 2, 2, projection='3d')
        ax.plot_surface(X, Y, Z_pred, cmap=cm.coolwarm)
        ax.set_title('learned function')
        plt.show()

fn_data = "/home/philgun/Desktop/python-project/ML/data/peaks.csv"
data = np.loadtxt(fn_data,delimiter=",")

output_dim = 1
input_dim = 2

X=data[:,0:input_dim]
Y=data[:,input_dim:]

ss=StandardScaler()
mm=MinMaxScaler()

X_scaled = mm.fit_transform(X)
Y_scaled = ss.fit_transform(Y)

'''
X_scaled = mm.fit_transform(X)
Y_scaled = ss.fit_transform(Y)
X_scaled = scale(X,True)
Y_scaled = normalize(Y,True)
'''

X_train, X_test, Y_train, Y_test = train_test_split(X_scaled,Y_scaled,test_size=0.15)
print(X_train,Y_train)

# training parameters
network_layout = [50, 50, 50] #adding number of neurons in each layer from 10 to 50 --> definitely increases the performance of the model
activation_function = 'relu'
activation_function_out = 'linear'
learning_rate = 0.001
kernel_regularizer = tf.keras.regularizers.l2(l=0.001)
# 'he_normal' for relu activation, 'glorot_uniform' for everything else
kernel_initializer = 'he_normal'
opt = keras.optimizers.Adam(learning_rate=learning_rate) #adding learning rate to Adam from 0.01 to 0.001 reduces the error
epochs = 300 
batch_size = 100
random_state = 1

######################  BUILD MODEL ############################ 

# Sequential class: Linear stack of layers.
model = tf.keras.Sequential()
# Create and add first layer
model.add(tf.keras.layers.Dense(network_layout[0],
                                name="input",
                                kernel_initializer=kernel_initializer,
                                #kernel_regularizer=kernel_regularizer,
                                activation=activation_function,
                                input_dim=input_dim))

# Create and add all remaining layers using for loop
for neuron in network_layout[1:]:
    model.add(tf.keras.layers.Dense(neuron,
                                    kernel_initializer=kernel_initializer,
                                    #kernel_regularizer=kernel_regularizer,
                                    activation=activation_function))

model.add(tf.keras.layers.Dense(output_dim, name="output",
                                kernel_initializer='glorot_uniform',
                                #kernel_regularizer=kernel_regularizer,
                                activation=activation_function_out))

model.compile(loss='mse', optimizer=opt,metrics=['mse','mae'])
# Generate a table summarizing the model
model.summary()

history = model.fit(X_train, Y_train, validation_data=(X_test, Y_test),
                    epochs=epochs, batch_size=batch_size)

Y_predict=model.predict(X_scaled)

rmse = np.sqrt(np.mean(Y_predict - Y_scaled)**2)
err = abs(Y_predict-Y_scaled)/Y_scaled*100
print("Root mean square error: %s"%rmse)

####################### PLOT PREDICTIONS ############################ 
plot_results_2D(X_scaled, Y_scaled, Y_predict)


