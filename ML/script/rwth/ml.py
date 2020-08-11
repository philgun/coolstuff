import numpy as np
import matplotlib.pyplot as plt
import keras
import tensorflow as tf

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

def create_model(layers,activation):
	model = Sequential()
	for i , nodes in enumerate(layers):
		if i ==0:
			model.add(Dense(nodes,
					name='input',
					kernel_initializer='he_normal',
					kernel_regularizer=tf.keras.regularizers.l2(l=0.0001),
					activation=activation,
					input_dim=2)) 
		else:
			model.add(Dense(nodes,
					kernel_initializer='he_normal',
					kernel_regularizer=tf.keras.regularizers.l2(l=0.0001),
					activation=activation)) #2nd hidden layer and so on

	model.add(Dense(1, name ='output',
			kernel_initializer='glorot_uniform',
			kernel_regularizer=tf.keras.regularizers.l2(l=0.0001),
			activation='linear'))
	model.compile(optimizer='adam', loss='mse', metrics=['accuracy'])	
	model.summary()
	return model

fn_data = "peaks.csv"
data = np.loadtxt(fn_data,delimiter=",")

output_dim = 1
input_dim = 2

X=data[:,0:input_dim]
Y=data[:,input_dim:]

ss=StandardScaler()
mm=MinMaxScaler()
X_scaled = ss.fit_transform(X)
Y_scaled = mm.fit_transform(Y)

'''
X_scaled = scale(X,True)
Y_scaled = normalize(Y,True)
'''

X_train, X_test, Y_train, Y_test = train_test_split(X_scaled,Y_scaled,test_size=0.15)
print(X_train,Y_train)

model = KerasClassifier(build_fn=create_model)
layers=[(10,10)]
activations=['sigmoid','relu']
param_grid=dict(layers=layers,activation=activations,batch_size=[128,256],epochs=[100])
grid=GridSearchCV(estimator=model,param_grid=param_grid)

grid_result=grid.fit(X_train,Y_train)
res=[grid_result.best_score_,grid_result.best_params_]
print(res)

