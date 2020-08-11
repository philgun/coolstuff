import numpy as np
import pandas as pd
import os
import pickle
import sklearn.preprocessing

def load_model(x1,x2,x3,x4): 
    # Reshaping the input into 2D matrix (1 row 4 cols)
    x = []
    x.append(x1)
    x.append(x2)
    x.append(x3)
    x.append(x4)
    x = np.array(x)
    x = np.reshape(x,(-1,4))

    # Get the data ~ X_raw and y_raw (training data set)
    fn = "/home/philgun/Desktop/python-project/ML/data/res.csv"
    df = pd.read_csv(fn)

    df.tamb_C = df.tamb_C + 273.15
    df.tin_C = df.tin_C + 273.15
    df.q_W = df.q_W/1e6

    df.columns = ["h_m","q_MW","tamb_K","tin_K","tout_K","mdot"]

    #Input and output number
    inputdim = 4 #in order: height[m], Q_in[W],T ambient

    #split the raw into input (X) and ouput(y)
    X_raw = df[df.columns[0:inputdim]].to_numpy()
    y_raw = df.mdot.to_numpy()
    y_raw = y_raw.reshape(-1,1)

    #Get the scaler parameters ~ xmin xmax ymin ymax
    mmx = sklearn.preprocessing.MinMaxScaler()
    mmy = sklearn.preprocessing.MinMaxScaler()
    mmx.fit(X_raw)
    mmy.fit(y_raw)

    #Get the X_scaled ~ input to trained model
    X_scaled = mmx.transform(x)

    #Open and load the model
    fn = "/home/philgun/Desktop/python-project/ML/trained-model/rcv-control.sav"
    loaded_model = pickle.load(open(fn,'rb'))

    #Predict the y
    y_predict = loaded_model.predict(X_scaled)

    #Scale back y_predict to the original scale
    y_predict = mmy.inverse_transform(y_predict)
    #Return the predicted value 
    y_predict = float(y_predict[0,-1])
    print(type(y_predict))
    return y_predict

if __name__ == "__main__":

    # Test data
    fn = "/home/philgun/Desktop/python-project/ML/data/res.csv"
    df = pd.read_csv(fn)

    df.tamb_C = df.tamb_C + 273.15
    df.tin_C = df.tin_C + 273.15
    df.q_W = df.q_W/1e6

    df.columns = ["h_m","q_MW","tamb_K","tin_K","tout_K","mdot"]

    #Input and output number
    outputdim = 1

    #split the raw into input (X) and ouput(y)
    y_raw = df.mdot.to_numpy()
    y_raw = y_raw.reshape(-1,outputdim)

    #Use only 1 sample, turn the data type into list to test if the function can take list
    X_raw = (36.53,418.208705,283.56,814.6)
    y_raw = y_raw[-1]

    print(type(X_raw))
    y_predict = load_model(X_raw[0],X_raw[1],X_raw[2],X_raw[3])
    
    #Check the error
    rmse_real = np.sqrt(np.mean(y_predict-y_raw[-1])**2)
    print("Root mean square error: %.2f  [kg/s]"%rmse_real)
    assert(rmse_real < 1.3 and rmse_real > 1.1)
    assert(y_predict>1050 and y_predict<1052)

    print("y_predict: %.2f [kg/s]"%y_predict)
