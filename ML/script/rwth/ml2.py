import numpy as np
import matplotlib.pyplot as plt
import keras
import tensorflow as tf

from keras.models import Sequential
from keras.layers import Dense, Activation
from keras.activations import relu,sigmoid,tanh

from sklearn.preprocessing import StandardScaler
from sklearn.model_selection import train_test_split

from keras.wrappers.scikit_learn import KerasClassifier #wrapper
from sklearn.model_selection import GridSearchCV #hyper parameter optimiser

from mpl_toolkits.mplot3d import Axes3D
from matplotlib import cm

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
        ax.plot_wireframe(X, Y, Z_pred)
        ax.set_title('learned function')
        plt.show()

# enter data set information
problem_name = "peaks"
# enter file name of training data - 
filename_data = "peaks.csv"
# dimensionality of the data
input_dim = 2
output_dim = 1
# scale Input to [-1,1] range
scaleInput = True
# normalize Output to z-score
normalizeOutput = True

data = np.loadtxt(open(filename_data, "rb"), delimiter=",")
X = data[:, :-output_dim]
y = data[:, input_dim:]
X_norm = scale(X, scaleInput)
y_norm = normalize(y, normalizeOutput)
x_train, x_val, y_train, y_val = train_test_split(X_norm, y_norm, test_size=0.15)
n_train = x_train.shape[0]
print(x_train,y_train)
'''
# training parameters
network_layout = [10, 10]
activation_function = 'relu'
activation_function_out = 'linear'
learning_rate = 0.001
kernel_regularizer = tf.keras.regularizers.l2(l=0.0001)
# 'he_normal' for relu activation, 'glorot_uniform' for everything else
kernel_initializer = 'he_normal'
optimizer = 'adam'
epochs = 100
batch_size = 128
random_state = 1

############################  BUILD MODEL ############################ 

# Sequential class: Linear stack of layers.
model = tf.keras.Sequential()
# Create and add first layer
model.add(tf.keras.layers.Dense(network_layout[0],
                                name="input",
                                kernel_initializer=kernel_initializer,
                                kernel_regularizer=kernel_regularizer,
                                activation=activation_function,
                                input_dim=input_dim))
# Create and add all remaining layers
for neuron in network_layout[1:]:
    model.add(tf.keras.layers.Dense(neuron,
                                    kernel_initializer=kernel_initializer,
                                    kernel_regularizer=kernel_regularizer,
                                    activation=activation_function))
model.add(tf.keras.layers.Dense(output_dim, name="output",
                                kernel_initializer='glorot_uniform',
                                kernel_regularizer=kernel_regularizer,
                                activation=activation_function_out))

model.compile(loss='mse', optimizer=optimizer, metrics=['accuracy'])
# Generate a table summarizing the model
model.summary()
history = model.fit(x_train, y_train, validation_data=(x_val, y_val),
                    epochs=epochs, batch_size=batch_size, verbose=1)


############################  SAVE MODEL ############################ 

# plot predictions
y_pred = model.predict(X_norm)

####################### PLOT PREDICTIONS ############################ 
plot_results_2D(X_norm, y_norm, y_pred)
'''




