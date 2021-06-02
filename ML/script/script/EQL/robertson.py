constant=42
import NNSymReg as NN
import function as func

import tensorflow as tf
tf.random.set_seed(constant)
from tensorflow.keras import initializers, optimizers, backend
from tensorflow.keras.callbacks import EarlyStopping

import pandas as pd
import numpy as np
np.random.seed(constant)

import matplotlib.pyplot as plt
from DyMat import DyMatFile as D
from sklearn.preprocessing import MinMaxScaler
from sklearn.model_selection import train_test_split
from joblib import load, dump

import keras

def process_data(matfile):
    data = D(matfile)
    t = data.abscissa("y1",valuesOnly=True)
    y1 = data.data("y1")
    y2 = data.data("y2")
    y3 = data.data("y3")

    df = pd.DataFrame(
        zip(t,y1,y2,y3),
        columns=["time","y1","y2","y3"]
    )[1:]

    delta_t  = []
    target_y1 = []
    target_y2 = []
    target_y3 = []
    
    y1_init = []
    y2_init = []
    y3_init = []

    for i in range(df.shape[0]-1):
        delta_t.append(df.time.iloc[i+1] - df.time.iloc[i])

        target_y1.append(df.y1.iloc[i+1])
        target_y2.append(df.y2.iloc[i+1])
        target_y3.append(df.y3.iloc[i+1])    

        y1_init.append(df.y1.iloc[i])
        y2_init.append(df.y2.iloc[i])
        y3_init.append(df.y3.iloc[i])
    
    data = pd.DataFrame(
        zip(delta_t, y1_init, y2_init ,y3_init, target_y1, target_y2, target_y3),
        columns=["delta_t","y1","y2","y3","target_y1","target_y2","target_y3"]
    )

    der_y1 = (data.target_y1 - data.y1)/data.delta_t
    der_y2 = (data.target_y2 - data.y2)/data.delta_t
    der_y3 = (data.target_y3 - data.y3)/data.delta_t
    N = np.array([der_y1,der_y2,der_y3]).T
    print(N.shape)
    assert(N.shape[1]==3)

    mm_der = MinMaxScaler().fit(
        N
    )

    state=np.array([data.y1,data.y2,data.y3]).T
    print(N.shape)
    assert(state.shape[1]==3)

    mm_state = MinMaxScaler().fit(
        state
    )

    data = data.sample(frac=1).reset_index(drop=True)

    print(mm_state.data_max_)
    print(mm_state.data_min_)
    print(mm_der.data_max_)
    print(mm_der.data_min_)

    return data , mm_der, mm_state

def process_data_2(matfile):
    data = D(matfile)
    t = data.abscissa("y1",valuesOnly=True)
    y1 = data.data("y1")
    y2 = data.data("y2")
    y3 = data.data("y3")
    
    df = pd.DataFrame(
        zip(t,y1,y2,y3,data.data("der(y1)"),data.data("der(y2)"),data.data("der(y3)")),
        columns=["time","y1","y2","y3","der_y1","der_y2","der_y3"]
    )

    df.to_csv("ori.csv",index=False)

    df = df[1:]

    delta_t  = []
    target_y1 = []
    target_y2 = []
    target_y3 = []
    
    y1_init = []
    y2_init = []
    y3_init = []

    der_y1 = []
    der_y2 = []
    der_y3 = []

    for i in range(df.shape[0]-1):
        delta_t.append(
            df.time.iloc[i+1] - df.time.iloc[i]
        )

        target_y1.append(df.y1.iloc[i+1])
        target_y2.append(df.y2.iloc[i+1])
        target_y3.append(df.y3.iloc[i+1])    

        y1_init.append(df.y1.iloc[i])
        y2_init.append(df.y2.iloc[i])
        y3_init.append(df.y3.iloc[i])
    
    data = pd.DataFrame(
        zip(delta_t, y1_init, y2_init ,y3_init, target_y1, target_y2, target_y3),
        columns=["delta_t","y1","y2","y3","target_y1","target_y2","target_y3"]
    )

    data.to_csv("dat.csv",index=False)

    der_y1 = (data.target_y1 - data.y1)/data.delta_t
    der_y2 = (data.target_y2 - data.y2)/data.delta_t
    der_y3 = (data.target_y3 - data.y3)/data.delta_t

    data["der_y1"] = der_y1
    data["der_y2"] = der_y2
    data["der_y3"] = der_y3

    data.to_csv("modif.csv",index=False)

    data = data.sample(frac=1).reset_index(drop=True)

    return data

if __name__ == '__main__':
    #Process data
    f = "./data/robertson.mat"

    data = process_data_2(f)
    data = pd.read_csv("./ori.csv").drop(columns="time")

    fig,ax = plt.subplots()
    N, bins, patches = ax.hist(
        data.der_y1,bins=20
    )

    for i,n in enumerate(N):
        lb = bins[i]
        ub = bins[i+1]
        print("data between %.6f to %.6f = %s"%(lb, ub, n))

    plt.show()

    print(data.head())

    data_test = data[0:200]
    data_train = data[200:]
    
    print(data_train)

    X = data_train[data.columns[0:3]].to_numpy()
    y = data_train[data.columns[3]].to_numpy().reshape(-1,1)

    print(X)
    print(y)

    mmx, mmy = MinMaxScaler(), MinMaxScaler()

    X = mmx.fit_transform(X)
    y = mmy.fit_transform(y)
   
    #Form training-validation dataset
    X_train, X_valid, y_train, y_valid = train_test_split(
        X,y,test_size=0.3,random_state=constant
    )
    
    dump(mmx,"/home/philgun/Documents/coolstuff/coolstuff/ML/script/script/EQL/scalers/mmx_robertson.pkl")
    dump(mmy,"/home/philgun/Documents/coolstuff/coolstuff/ML/script/script/EQL/scalers/mmy_robertson.pkl")

    unary_func = [
        func.func_square()
    ]

    binary_func = [
        func.func_multiply(), func.func_div()
    ]

    network_depth = 3

    model = NN.NNSymbolicRegressor(3,1,unary_func,binary_func,network_depth,0,False)
    
    #Compile the model
    metrics = keras.metrics.MeanAbsolutePercentageError(name="metric")
    optimiser = optimizers.Adam(lr = 1e-4)  
    
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
        batch_size = int(X_train.shape[0]/100), #batch size = 600
        callbacks=[monitor],
        epochs = 300
    )

    #Save the trained model
    model.save("./robinson_model")

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
    feat_names = ['y1', 'y2', 'y3']
    target = ['dery1']

    #Print equation
    expr = NN.print_equation(
        model, feat_names, target, unary_func, binary_func,save_equation=True, threshold=None
    )

    #Test the function
    X_test = data_test[data_test.columns[0:3]].to_numpy()
    y_test = data_test[data_test.columns[3]].to_numpy()

    X_test = mmx.transform(X_test)
    
    y_pred= mmy.inverse_transform(
        model.predict(
            X_test
        )
    )

    print(X_test.shape, y_pred.shape, y_test.shape)

    fig,ax = plt.subplots()

    ax.scatter(
        y_test,  y_pred
    )
    ax.set_xlabel("Test data y1")
    ax.set_ylabel("Prediction y1")
    
    fig.savefig("./fig/fig_robinson.png")

    plt.show()

