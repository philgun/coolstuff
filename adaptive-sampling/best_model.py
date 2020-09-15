import pandas as pd
import numpy as np
import tensorflow as tf
constant = 42
tf.random.set_seed(constant)
np.random.seed(constant)

from sklearn.preprocessing import MinMaxScaler,StandardScaler
from sklearn.model_selection import train_test_split,GridSearchCV
from sklearn.metrics import mean_squared_error

from tensorflow.keras.models import Sequential
from tensorflow.keras.layers import Dense
from tensorflow.keras.activations import relu,tanh,sigmoid
from tensorflow.keras.callbacks import EarlyStopping, ModelCheckpoint
from tensorflow.keras.wrappers.scikit_learn import KerasRegressor
from tensorflow.keras.callbacks import EarlyStopping, ModelCheckpoint
from tensorflow.keras import backend,optimizers

import os
import NN

numinputs = 2
numoutput = 1

df = pd.read_csv('./TrainingData/data_training.csv',header=None)

X = df[df.columns[0:numinputs]].to_numpy()
y = df[df.columns[-1]].to_numpy().reshape(-1,1)

Xtrain,Xtest,ytrain,ytest = train_test_split(X,y,test_size=0.2,shuffle=True)

mmx = MinMaxScaler().fit(Xtrain)
mmy = MinMaxScaler().fit(ytrain)

Xtrain = mmx.transform(Xtrain)
ytrain = mmy.transform(ytrain)

Xtest = mmx.transform(Xtest)
ytest = mmy.transform(ytest)

def create_model(layers,activation,initializer,epochs,lr=0.001):
    model = Sequential()
    opt = optimizers.Adam(learning_rate = lr,decay=lr / epochs)

    for i in range(len(layers)):
        if i == 0:
            model.add(Dense(
                layers[i],
                name='Input',
                input_dim = numinputs,
                activation=activation,
                kernel_initializer=initializer,
            ))
        else:
            model.add(Dense(
                layers[i],
                activation=activation,
                kernel_initializer=initializer
            ))

    model.add(Dense(
        numoutput,
        name='Output',
        activation=activation,
        kernel_initializer=initializer
    ))

    backend.set_epsilon(1)
    print("COMPILE!")
    model.compile(optimizer=opt,loss='mse',metrics=['mse','mae','mape'])
    model.summary()

    return model

layers=[15]
activations='relu'
initializers='he_uniform'
epochs=4000
lr=0.1

model = create_model(
    layers=layers,
    activation=activations,
    initializer=initializers,
    epochs=epochs,
    lr=lr
    )

model.fit(
    x=Xtrain,
    y=ytrain,
    validation_data=(Xtest,ytest),
    epochs=epochs,
    )


from mpl_toolkits import mplot3d
from matplotlib import pyplot as plt
from matplotlib.mlab import griddata

#Generate new data
UB = 10
LB = 0

xval = LB
yval = LB

X= []
Y= []

while xval <= UB:
    yval = LB
    while yval <= UB:
        Y.append(yval)
        X.append(xval)

        yval += 0.5
    xval += 0.5

X = np.array(X).reshape(-1,1)
Y = np.array(Y).reshape(-1,1)
data = np.concatenate((X,Y),axis=1)
dim = int((X.shape[0])**0.5)

#Scaled input
data_scaled = mmx.transform(data)

#Predict and inverse transform
Z = model.predict(data_scaled)
Z = mmy.inverse_transform(Z)

#Reshape for 3D surface plot
x = np.reshape(X,(dim,dim))
y = np.reshape(Y,(dim,dim))
z = np.reshape(Z,(dim,dim))

fig = plt.figure()
ax = fig.add_subplot(111, projection='3d')

ax.plot_surface(x, y, z)

ax.set_xlabel('X Label')
ax.set_ylabel('Y Label')
ax.set_zlabel('Z Label')
ax.set_title("NN Best Shekel Function")
plt.savefig("NNBestShekelFunction.png")
plt.show()


'''
model = KerasRegressor(build_fn=create_model,verbose=1)

layers=[
    [12],
    [12,12],
    [12,12,12],
    [2,2,2,2,2]
]

activations = ['relu','tanh']
initializers = ['he_uniform','glorot_uniform','he_normal','glorot_normal']

param_grid = {
    'layers':layers,
    'activation':activations,
    'initializer':initializers,
    'batch_size' : [128,256],
    'epochs':[2000,3000,4000]
}

grid = GridSearchCV(
    estimator=model,
    param_grid=param_grid,
    cv=5
    )

es = EarlyStopping(monitor='val_loss', mode='min',verbose=1,patience=500,restore_best_weights=True)

grid_result = grid.fit(
    Xtrain,ytrain,
    validation_data=(Xtest,ytest),
    callbacks=[es],
    verbose=1)

print(grid_result.best_score_,grid_result.best_params_)

grid_result.best_estimator_.save('BestModelHyperTuning')

y_pred = grid.predict(Xtest)
y_pred = mmy.inverse_transform(y_pred)

score = mean_squared_error(y_pred,ytest)
print(score)

df = pd.DataFrame(grid_result.cv_results_)
df.to_csv("Tuning.csv",index=False)
'''