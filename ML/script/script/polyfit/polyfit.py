constant = 42
import numpy as np
from sklearn import linear_model
from sklearn.preprocessing import PolynomialFeatures, MinMaxScaler
from sklearn.metrics import mean_absolute_percentage_error as MAPE

import sys
sys.path.append("/home/philgun/Documents/coolstuff/coolstuff/ML/script/script/RBF")
from rbf import Data

import matplotlib.pyplot as plt

if __name__ == "__main__":
    f = "/home/philgun/Documents/coolstuff/coolstuff/ML/script/script/RBF/data/data.mat"
    data = Data()
    df = data.generate_data(f)
    
    #Test the method for the 2nd slice 
    df = df[
        ["h_f_2","h_f_1","h_f_3","h_s_2","u_flow","der_hf_2"]
    ]
    df.insert(
        0,"delta_h_f_up",df.h_f_2 - df.h_f_1
    )
    df.insert(
        1,"delta_h_f_down",df.h_f_2 - df.h_f_3
    )
    df.insert(
        2,"delta_h_sp",df.h_f_2 - df.h_s_2
    )
    
    df = df.drop(
        columns=["h_f_2","h_f_1","h_f_3","h_s_2"]
    )

    print(df.head())

    #Separate data into X and y
    X = df[
        df.columns[0:-1]
    ].to_numpy()

    y = df[
        df.columns[-1]
    ].to_numpy().reshape(-1,1)
    
    #Create the polynomial
    deg = 8
    poly_scaler = PolynomialFeatures(degree=deg,include_bias=False)

    #Transform X into polynomial
    X_poly = poly_scaler.fit_transform(X)

    mmx = MinMaxScaler().fit(X_poly)
    mmy = MinMaxScaler().fit(y)

    X_poly = mmx.transform(X_poly)
    y_scaled = mmy.transform(y)
    
    #Feature names
    feat_names = poly_scaler.get_feature_names(df.columns[0:-1].to_list())

    print(len(feat_names))

    #Start the regression
    model = linear_model.LinearRegression().fit(X_poly,y_scaled)

    #Print G-O-F
    y_pred_linear = mmy.inverse_transform(model.predict(X_poly).reshape(-1,1))
    score_linear = MAPE(y_pred_linear,y)

    print(
        "MAPE poly %s = %s %%"%(deg,score_linear)
    )

    #Lasso
    alpha = 0.001
    model_lasso = linear_model.LassoCV(cv=5, random_state=constant, tol=1e-4, max_iter=10000).fit(X_poly,y_scaled)
    y_pred_lasso = mmy.inverse_transform(model_lasso.predict(X_poly).reshape(-1,1))

    score_lasso = MAPE(y_pred_lasso,y)

    print(
        "MAPE lasso w/ alpha %s = %s %%"%(alpha,score_lasso)
    )

    fig,ax = plt.subplots(2)
    fig.tight_layout(pad=2)

    ax[0].scatter(
        y, mmy.inverse_transform(model.predict(X_poly).reshape(-1,1))
    )
    ax[0].set_title("Linear Regression with %s degree polynomial"%(deg))

    ax[1].scatter(
        y, mmy.inverse_transform(model_lasso.predict(X_poly).reshape(-1,1))
    )
    ax[1].set_title("Lasso Regression")
    
    plt.show()