import matplotlib.pyplot as plt
from joblib import load
from sklearn.preprocessing import MinMaxScaler
import matplotlib.pyplot as plt
import pandas as pd
import numpy as np

import tensorflow as tf
import keras
from sympy import *

def eq(hf, hp, u_flow, hp_plus, hp_minus):
    return 0.0792414*hf - 0.0508922*hp + 0.0138368*hp_minus + 0.00775489*hp_plus + 0.00967353*u_flow + 0.162148*(-hf + 0.10341*hp + 0.091595*hp_minus + 0.0182049*hp_plus + 0.141872*u_flow + 0.0899706)**3 - 0.0238108*(-hf + 0.342209*hp + 0.789152*hp_minus + 0.492091*hp_plus - 0.660449*u_flow + 0.847772)**2 - 0.698662*(-0.339796*hf + 0.354705*hp + 0.00760156*hp_minus + 0.000664143*hp_plus + 0.0642219*u_flow - 0.130075)*(0.682478*hf - 0.304007*hp + 0.666532*hp_minus + 0.0811824*hp_plus + 0.00515455*u_flow + 0.861111) - 1.12332e-7*(0.00587612*hf - 0.0132589*hp - 0.00780864*hp_minus + 0.038868*hp_plus - 0.0245837*u_flow - 0.0213593)/(0.091277*hf - 0.156211*hp - 0.0258885*hp_minus + 0.0148764*hp_plus + 0.0445535*u_flow - 0.0185721) - 0.04491*log(Abs(0.0617779*hf + 0.0464895*hp + 0.0261501*hp_minus - 0.0132318*hp_plus + 0.0472383*u_flow + 0.00277193)) + 0.231436*sqrt(Abs(0.188238*hf - 0.0744035*hp + 0.0454163*hp_minus + 0.0124502*hp_plus + 0.148365*u_flow - 0.019884)) + 0.138995


if __name__ == '__main__':
    test_data = pd.read_csv("/home/philgun/Documents/coolstuff/coolstuff/ML/script/script/EQL/data/test_data.csv")
    test_data = test_data[
        test_data.columns[1:]
    ]

    mmx = load("/home/philgun/Documents/coolstuff/coolstuff/ML/script/script/EQL/scalers/mmx.pkl")
    mmy = load("/home/philgun/Documents/coolstuff/coolstuff/ML/script/script/EQL/scalers/mmy.pkl")
    model = tf.keras.models.load_model("/home/philgun/Documents/coolstuff/coolstuff/ML/script/script/EQL/trained_model")
    
    print(test_data)

    #Calculate using model
    X_test = test_data[
        test_data.columns[
            0:-1
        ]
    ].to_numpy()
    X_test = mmx.transform(X_test)
    y_test = test_data[test_data.columns[-1]]

    y_model = mmy.inverse_transform(model.predict(X_test))

    y_func = []
    for i in range(X_test.shape[0]):
        hf = X_test[i,0]
        hp = X_test[i,1]

        u_flow = X_test[i,2]
        
        hp_plus = X_test[i,3]
        hp_minus = X_test[i,4]
        

        y_func.append(
            eq(hf, hp, u_flow, hp_plus, hp_minus)
        )
    y_func = np.array(y_func).reshape(-1,1)
    y_func = mmy.inverse_transform(y_func)

    fig,ax = plt.subplots(1,3)
    ax[0].scatter(
        y_model, y_func
    )
    ax[1].scatter(
        y_test,y_model
    )
    ax[2].scatter(
        y_test,y_func
    )

    ax[0].set_xlabel("ANN prediction result")
    ax[0].set_ylabel("regression function")

    ax[1].set_xlabel("Test data")
    ax[1].set_ylabel("ANN Prediction result")

    ax[2].set_xlabel("Test data")
    ax[2].set_ylabel("regression result")
    plt.show()

    