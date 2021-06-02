constant = 42
import pandas as pd
import numpy as np
np.random.seed(constant)

import os
import sympy as sp

import tensorflow as tf
tf.random.set_seed(constant)
tf.config.run_functions_eagerly(True)
tf.get_logger().setLevel(3)

from tensorflow.keras import initializers, optimizers, backend
from tensorflow.keras.callbacks import EarlyStopping

import keras

from sklearn.model_selection import train_test_split
from sklearn.metrics import mean_squared_error, r2_score
from sklearn.preprocessing import MinMaxScaler

from matplotlib import pyplot as plt

import NNSymReg as nn
import function as f

from joblib import dump, load

##################################Prep the data

df = pd.read_pickle("/home/philgun/Documents/coolstuff/coolstuff/ML/script/script/symbolic_regression/df_final_dhpdt.pkl")

#Drop unnecessary columns
df = df.drop(columns=["rho", "dz", "U_bot", "U_wall", "eta", "mp", "T_amb","hf_plus","hf_minus"])

#Check nan in df
print(
    df.isnull().values.any()
)

#Shuffle the data and reset the index
df = df.sample(frac=1).reset_index(drop=True)

#Separate df_test from df_rest
df_test = df[0:int(0.1 * df.shape[0])]
df_test.to_csv("./data/test_data.csv")

df_rest = df[int(0.1 * df.shape[0]):]

#Chopped df_rest into X and y
X = df_rest[df_rest.columns[0:-1]].to_numpy()
y = df_rest[df_rest.columns[-1]].to_numpy().reshape(-1,1)

mmx = MinMaxScaler().fit(X)
mmy = MinMaxScaler().fit(y)

dump(mmx,"/home/philgun/Documents/coolstuff/coolstuff/ML/script/script/EQL/scalers/mmx.pkl")
dump(mmy,"/home/philgun/Documents/coolstuff/coolstuff/ML/script/script/EQL/scalers/mmy.pkl")

#Form training-validation dataset
X_train, X_valid, y_train, y_valid = train_test_split(
    X,y,test_size=0.3
)

#Scale the training and validation set
X_train = mmx.transform(X_train)
y_train = mmy.transform(y_train)

X_valid = mmx.transform(X_valid)
y_valid = mmy.transform(y_valid)

######################### End prep data

######################### Instantiate function that want to be considered
unary_func = [
    f.func_id(), f.func_square(), f.func_sqrt(), f.func_ln(), f.func_cubic()]

binary_func = [
    f.func_multiply(), f.func_div()
]

#Input layer ----- hidden layer ----- output
network_depth = 2

#Regularisation constant
alpha_l1 = 0.01

######################### Instantiate the model
model = nn.NNSymbolicRegressor(
    input_dim= X_train.shape[1],
    output_dim = y_train.shape[1],
    unary_func = unary_func,
    binary_func = binary_func,
    network_depth = network_depth,
    alpha_l1=alpha_l1,
    reg=False
)

#Compile the model
metrics = keras.metrics.MeanAbsolutePercentageError(name="MAPE")
optimiser = optimizers.Adam(lr = 1e-3)

model.compile(
    optimizer=optimiser,
    loss = keras.losses.MeanSquaredError(),
    metrics = metrics
)

#Callbacks
monitor = EarlyStopping(
    monitor="val_metric",
    mode = "min",
    min_delta = 0.01,
    patience = 10, 
    restore_best_weights=True
)

backend.set_epsilon(1)

#Training 
history = model.fit(
    X_train, y_train,
    validation_data=(X_valid, y_valid),
    batch_size = int(X_train.shape[0]/600), #batch size = 600
    callbacks=[monitor],
    epochs = 100
)

#Save the trained model
model.save("./trained_model")

#Print error evolution
fig,ax = plt.subplots()

ax.plot(
    np.arange(
        1, len(history.history["metric"])+1
    ), 
    history.history["metric"], label="MAPE training"
)
ax.plot(
    np.arange(
        1, len(history.history["val_metric"])+1
    ), 
    history.history["val_metric"], label="MAPE validation"
)
ax.set_title(
    "MAPE evolution: training and validation"
)

ax.set_xlabel("Epochs")
ax.set_ylabel("Percentage error [%]")
ax.legend()
fig.savefig("./fig/evolution.png")

############################ Prep the printing of the equation
feat_names = ['hf', 'hp', 'u_flow', 'hp_plus', 'hp_minus']
target = ['dhp_dt']

#Print equation
expr = nn.print_equation(
    model, feat_names, target, unary_func, binary_func,save_equation=True, threshold=None
)

#Test the function
X_test = df_test[df_rest.columns[0:-1]].to_numpy()
y_test = df_test[df_rest.columns[-1]].to_numpy().reshape(-1,1)

X_test = mmx.transform(X_test)
y_pred = mmy.inverse_transform(model.predict(X_test))

fig,ax = plt.subplots()
ax.scatter(
    y_test,  y_pred
)
ax.set_xlabel("Test data dhp/dt [J/kg.s]")
ax.set_ylabel("Prediction data dhp/dt [J/kg.s]")

ax.set_xlim(
    min(y_test), max(y_test)
)
ax.set_ylim(
    min(y_test), max(y_test)
)
fig.savefig("./fig/fig.png")

plt.show()












