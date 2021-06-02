constant = 42

import tensorflow as tf
tf.random.set_seed(constant)

import numpy as np
np.random.seed(constant)

import pandas as pd
from DyMat import DyMatFile as D
import matplotlib.pyplot as plt

import tensorflow.keras as keras

from sklearn.preprocessing import MinMaxScaler
from sklearn.model_selection import train_test_split
from sklearn.metrics import mean_squared_error, r2_score

class Data:
    def __init__(self,f):
        self.f = f
        self.data = D(self.f)

    def get_data(self):
        epsilon = self.data.data("epsilon_stg")
        mdot = self.data.data("thermocline_Tank.Tank_A.m_flow")
        lv = self.data.data("tank_level")
        h_in = self.data.data("thermocline_Tank.Tank_A.h_in")
        T_p_rep = self.data.data("T_p_rep")
        time = self.data.abscissa("epsilon_stg",valuesOnly=True)
        
        self.df = pd.DataFrame(
            zip(
                time,mdot, lv, h_in, T_p_rep, epsilon
            ),
            columns=["time","mdot","lv","h_in", "T_p_rep","epsilon"]
        )
        return self.df

def init_plot(df):
    df_charging = df[df.mdot<0]
    df_disc = df[df.mdot>0]

    plt.hist(
        df.h_in
    )
    plt.show()

    fig, ax = plt.subplots(2)
    fig.tight_layout(pad=2)

    ax[0].scatter(
        df_charging.lv, df_charging.epsilon, s = 0.1
    )
    ax[0].set_xlabel("Lvl")
    ax[0].set_ylabel("Epsilon")
    ax[0].set_title("Charging")

    ax[1].scatter(
        df_disc.lv, df_disc.epsilon, s=0.1
    )
    ax[1].set_xlabel("Lvl")
    ax[1].set_ylabel("Epsilon")
    ax[1].set_title("Discharging")

    fig, ax = plt.subplots(2)
    fig.tight_layout(pad=2)

    ax[0].scatter(
        df_charging.T_p_rep, df_charging.epsilon, s = 0.1
    )
    ax[0].set_xlabel("$T_{p,rep} [K]$")
    ax[0].set_ylabel("Epsilon")
    ax[0].set_title("Charging")

    ax[1].scatter(
        df_disc.T_p_rep, df_disc.epsilon, s=0.1
    )
    ax[1].set_xlabel("$T_{p,rep} [K]$")
    ax[1].set_ylabel("Epsilon")
    ax[1].set_title("Discharging")

    plt.show()
    
def generate_model(A):
    model = keras.models.Sequential()

    model.add(
        keras.layers.Dense(
            A[0],
            input_dim=input_dim,
            name="Input",
            kernel_initializer="he_uniform",
            use_bias=True,
            activation="relu"
        )
    )

    for a in A[1:]:
        model.add(
            keras.layers.Dense(
                a,
                kernel_initializer="he_uniform",
                use_bias=True,
                activation="relu"
            )
        )
    
    model.add(
        keras.layers.Dense(
            output_dim,
            name="Output",
            kernel_initializer="he_uniform",
            use_bias=True
        )
    )

    model.summary()

    return model

def prep_data(df, input_dim, output_dim):
    #Split into df train and test
    df = df.sample(frac=1).reset_index(drop=True)

    df_test = df[0:int(0.2*df.shape[0])]

    df_train = df[int(0.2*df.shape[0]):]

    #Split df_train into X and y
    X = df_train[
        df_train.columns[0:input_dim]
    ].to_numpy()

    y = df_train[
        df_train.columns[input_dim:input_dim+output_dim]
    ].to_numpy().reshape(-1,1)

    #Split X and y into train-validation data
    X_train, X_valid, y_train, y_valid = train_test_split(
        X, y, test_size=0.3, random_state=constant, shuffle=True
    )

    #Split df_test into X_test and y_test
    X_test = df_test[
        df_test.columns[0:input_dim]
    ].to_numpy()

    y_test = df_test[
        df_test.columns[input_dim:input_dim+output_dim]
    ].to_numpy().reshape(-1,1)

    #Fit the scalers with X_train and y_train_data
    mmx = MinMaxScaler().fit(X_train)
    mmy = MinMaxScaler().fit(y_train)

    #scale down the data using scalers - leave y_test untouched
    X_train = mmx.transform(X_train)
    y_train = mmy.transform(y_train)

    X_valid = mmx.transform(X_valid)
    y_valid = mmy.transform(y_valid)

    X_test = mmx.transform(X_test)

    return X_train, y_train, X_valid, y_valid, X_test, y_test, mmx, mmy

def run_NN(A,X_train, y_train, X_valid, y_valid, X_test, y_test, mmx, mmy, lr=1e-3, batch_size=100,mode="charging"):
    optimiser = keras.optimizers.Adam(lr=0.001, beta_1=0.9, beta_2=0.999, epsilon=1e-08, decay=0.0)
    batch_size = batch_size
    
    monitor = keras.callbacks.EarlyStopping(
        monitor="val_mae",
        mode="min",
        min_delta=1e-4,
        patience=500,
        restore_best_weights=True
    )

    model = generate_model(A)

    model.compile(
        loss=keras.losses.MeanSquaredError(name="MSE"),
        optimizer=optimiser,
        metrics=["mae"]
    )

    tf.keras.backend.set_epsilon(0)

    #**************** Train
    model.fit(
        x=X_train, y=y_train,
        validation_data=(X_valid,y_valid),
        batch_size=batch_size,
        epochs = 5000,
        callbacks=[monitor]
    )

    #**************** Save model
    model.save("./mymodel_%s"%(mode))

    #**************** Predict and inverse transform
    y_pred = mmy.inverse_transform(
        model.predict(X_test)
    )

    #*************** Calculate score
    MSE = mean_squared_error(y_pred, y_test)
    R2 = r2_score(y_pred, y_test)

    #*************** Plot
    fig,ax = plt.subplots()
    ax.scatter(
        y_test, y_pred, c="red", s=5
    )
    ax.set_xlabel("Test")
    ax.set_ylabel("Prediction")
    ax.set_title(
        "Test vs. Prediction %s. $R^2: %.6f, MSE: %.6f$"%(mode,R2,MSE)
    )
    ax.set_xlim(y_test.min(),y_test.max())
    ax.set_ylim(y_test.min(),y_test.max())
    plt.show()

def explore(f):
    data = D(f)
    T_top = data.data("thermocline_Tank.T_top_measured")
    T_bot = data.data("thermocline_Tank.T_bot_measured")
    T_p_rep = data.data("T_p_rep")
    level = data.data("tank_level")
    mdot = data.data("thermocline_Tank.Tank_A.m_flow")
    delta_top = T_p_rep - T_top
    delta_bot = T_p_rep - T_bot

    df = pd.DataFrame(
        zip(mdot, level, T_p_rep, T_top, T_bot, delta_top, delta_bot),
        columns = ["mdot","level","T_p_rep","T_top","T_bot","delta_top","delta_bot"]
    )

    #Charging
    df_charging = df[df.mdot<0]
    df_standby = df[abs(df.mdot)<1e-3]
    df_disc = df[df.mdot > 0]

    fig,ax = plt.subplots(3,2)
    fig.tight_layout(pad=2)
    ax[0,0].scatter(
        df_charging.level, df_charging.T_top-273.15, c = "red", s=1
    )
    ax[0,0].set_xlabel("SOC")
    ax[0,0].set_ylabel("T_top [°C]")
    ax[0,0].set_title("Charging")

    ax[0,1].scatter(
        df_charging.level, df_charging.T_bot-273.15, c = "red", s=1
    )
    ax[0,1].set_xlabel("SOC")
    ax[0,1].set_ylabel("T_bot [°C]")
    ax[0,1].set_title("Charging")


    ax[1,0].scatter(
        df_disc.level, df_disc.T_top-273.15, c = "red", s=1
    )
    ax[1,0].set_xlabel("SOC")
    ax[1,0].set_ylabel("T_top [°C]")
    ax[1,0].set_title("Discharging")

    ax[1,1].scatter(
        df_disc.level, df_disc.T_bot-273.15, c = "red", s=1
    )
    ax[1,1].set_xlabel("SOC")
    ax[1,1].set_ylabel("T_bot [°C]")
    ax[1,1].set_title("Disharging")

    ax[2,0].scatter(
        df_standby.level, df_standby.T_top-273.15, c = "red", s=1
    )
    ax[2,0].set_xlabel("SOC")
    ax[2,0].set_ylabel("T_top [°C]")
    ax[2,0].set_title("Stand-by")

    ax[2,1].scatter(
        df_standby.level, df_standby.T_bot-273.15, c = "red", s=1
    )
    ax[2,1].set_xlabel("SOC")
    ax[2,1].set_ylabel("T_bot [°C]")
    ax[2,1].set_title("Stand-by")

    plt.show()

    fig,ax = plt.subplots(1,2)
    ax[0].scatter(
        df_charging.T_p_rep, df_charging.T_top
    )
    ax[1].scatter(
        df_disc.T_p_rep, df_disc.T_top
    )
    plt.show()

def compare(f_r, f_s):
    data_r, data_s = D(f_r), D(f_s)

    abscissa_r = data_r.abscissa("E_stored",valuesOnly=True)/3600
    E_stored_r = data_r.data("E_stored")
    der_E_stored_r = data_r.data("der(E_stored)")
    m_flow_r = data_r.data("thermocline_Tank.Tank_A.m_flow")
    logic_A_r = data_r.data("logic_A")
    T_bot_r = data_r.data("T_bot_degC")
    T_top_r = data_r.data("T_top_degC")
    
    abscissa_s = data_s.abscissa("E_stored",valuesOnly=True)/3600
    E_stored_s = data_s.data("E_stored")
    der_E_stored_s = data_s.data("der(E_stored)")
    m_flow_s = data_s.data("thermocline_Tank.Tank_A.m_flow")
    logic_A_s = data_s.data("logic_A")
    T_bot_s = data_s.data("T_bot_degC")
    T_top_s = data_s.data("T_top_degC")

    fig,ax = plt.subplots(3,1)
    ax[0].plot(
        abscissa_r,np.ones(len(abscissa_r)) * 550, label="$T_{rcv,max}$",ls = "-."
    )
    ax[0].plot(
        abscissa_r,np.ones(len(abscissa_r)) * 680, label="$T_{PB,min}$",ls = "-."
    )
    ax[0].plot(
        abscissa_r, T_bot_r, label="$T_{bot,real}$",c="red"
    )
    ax[0].plot(
        abscissa_s, T_bot_s, label="$T_{bot,sur}$",c="red", ls="--"
    )
    ax[0].legend()

    ax[2].plot(
        abscissa_s, m_flow_s, label="$\dot{m}_{fluid,s}$ ", ls="--"
    )
    ax[2].plot(
        abscissa_r, m_flow_r, label="$\dot{m}_{fluid,r}$ "
    )
    ax[2].set_ylabel("$\dot{m}_{fluid}$ [kg/s]")
    ax[2].set_xlabel("Time [h]")
    ax[2].legend()

    for a in ax.flat:
        a.set_xlim(0,max(abscissa_r))
    
    plt.show()


if __name__ == '__main__':
    #f1 = "./data/LC_model_temp_control.mat"
    #f2 = "./data/surogate_model_temp_control.mat"
    #explore(f1)
    #compare(f1,f2)
    f = "./data/LC_model_temp_control.mat"
    
    data = Data(f)
    df = data.get_data()
    df = df[df.epsilon>0]

    print(df.head())

    #init_plot(df)

    #Prep data
    df = df.drop(columns="time")
    input_dim = df.shape[1] - 1
    output_dim = 1

    df_charging = df[df.mdot<0]
    df_disc = df[df.mdot>0]

    dfs = [df_charging]
    t = ["charging_temp_control"]

    for idx,d in enumerate(dfs):
        X_train, y_train, X_valid, y_valid, X_test, y_test, mmx, mmy = prep_data(d, input_dim, output_dim)

        maxdata = "./max_%s.txt"%(t[idx])
        mindata = "./min_%s.txt"%(t[idx])

        Xmax = mmx.data_max_

        try:
            ymax = mmy.data_max_
        except:
            ymax=[-1000000]

        write=""

        for i in range(len(Xmax)):
            write+="%s,"%(Xmax[i])
        write+="%s"%(ymax[0])
        f = open(maxdata,"w")
        f.write(write)
        f.close()

        Xmin = mmx.data_min_

        try:
            ymin = mmy.data_min_
        except:
            ymin = [-1000000]

        write=""
        
        for i in range(len(Xmin)):
            write+="%s,"%(Xmin[i])
        write+="%s"%(ymin[0])
        f = open(mindata,"w")
        f.write(write)
        f.close()

        
        #Hyperparameters
        A = [15,15,15] #Network architecture
        lr = 1e-3
        batch_size = 500

        run_NN(
            A,
            X_train,
            y_train,
            X_valid,
            y_valid,
            X_test,
            y_test,
            mmx,
            mmy,
            lr,
            batch_size,
            t[idx]
        )

        keras.backend.clear_session()
    

    

    


    
    


    
    