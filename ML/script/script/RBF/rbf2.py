constant = 42
from idaes.surrogate.pysmo import polynomial_regression as poly
import pandas as pd
from sklearn.preprocessing import MinMaxScaler
from sklearn.model_selection import train_test_split
import numpy as np
import matplotlib.pyplot as plt

from DyMat import DyMatFile as D
import time
import smogn
import seaborn as sns
from sklearn.utils import resample

from scipy.interpolate import Rbf
import joblib
import numpy as np
from scipy.spatial.distance import cdist

from sklearn.preprocessing import MinMaxScaler


def test(drop_col=["der_y2","der_y3"]):
    drop_col.append("time")
    df = pd.read_csv("/home/philgun/Documents/coolstuff/coolstuff/ML/script/script/EQL/ori.csv")
    df = df.drop(columns=drop_col)
    df = df.sample(frac=1).reset_index(drop=True)

    df_test = df[0:int(0.1 * df.shape[0])]
    df_train = df[int(0.1 * df.shape[0]):]

    X_test = df[
        df.columns[0:3]
    ].to_numpy()

    y_test = df[
        df.columns[-1]
    ].to_numpy().reshape(-1,1)

    poly_init = poly.PolynomialRegression(df_train, df_train,2,multinomials=True)
    features = poly_init.get_feature_vector()
    now = time.time()
    polyfit = poly_init.training()
    print(
        "Training time ------------------------> %s seconds"%(time.time() - now)
    )
    l = []
    for i in features.keys():
        l.append(features[i])

    print(polyfit.generate_expression(l))

    y_pred = poly_init.predict_output(X_test)
    print(y_pred,y_test)

    plt.scatter(y_test,y_pred)
    plt.show()

class Data:
    def __init__(self):
        pass

    def generate_data(self,f):
        data = D(f)
        self.Nf = int(data.data("N_f")[0])

        #Get the value
        time = data.abscissa("thermocline_Tank.Tank_A.T_s[1]",valuesOnly=True)

        #Since no design params are perturbed, as such only state variables matter
        u_flow = data.data("thermocline_Tank.Tank_A.u_flow")

        #State variables
        vals = []
        colnames = []

        for i in range(1,self.Nf+1):
            Tf_ = "thermocline_Tank.Tank_A.T_f[%s]"%(i)
            Ts_ = "thermocline_Tank.Tank_A.T_s[%s]"%(i)

            der_hf = "der(thermocline_Tank.Tank_A.h_f[%s])"%(i)
            der_hp = "der(thermocline_Tank.Tank_A.h_p[%s])"%(i)

            vals.append(
                data.data(Tf_)
            )
            vals.append(
                data.data(Ts_)
            )
            vals.append(
                data.data(der_hf)
            )
            vals.append(
                data.data(der_hp)
            )

            colnames.append("T_f_%s"%(i))
            colnames.append("T_s_%s"%(i))
            colnames.append("der_hf_%s"%(i))
            colnames.append("der_hp_%s"%(i))
        
        states = np.array(vals).T


        df = pd.DataFrame(
            states, columns=colnames
        )  
        df["time"] = time; df["u_flow"] = u_flow 
        self.df = df[1:]

        return self.df

    def gen_midsection_data(self):
        T_f = []
        T_f_up = []
        T_f_down = []
        T_s = []
        der_hf = []
        der_hp = []
        u_flow = []

        for i in range(2,self.Nf):
            T_f.extend(self.df["T_f_%s"%(i)])
            T_f_up.extend(self.df["T_f_%s"%(i+1)])
            T_f_down.extend(self.df["T_f_%s"%(i-1)])
            T_s.extend(self.df["T_s_%s"%(i)])
            der_hf.extend(
                self.df["der_hf_%s"%(i)]
            )
            der_hp.extend(
                self.df["der_hp_%s"%(i)]
            )
            u_flow.extend(self.df.u_flow)


        self.df_mid_section = pd.DataFrame(
            zip(u_flow,T_f,T_f_up,T_f_down,T_s,der_hf,der_hp), 
            columns=["u_flow","T_f","T_f_up","T_f_down","T_s","der_hf","der_hp"]
        )

        return self.df_mid_section

def resample_majority(df, ub, lb, frac=0.03):
    df_majority = df[
        (df.der_hf < ub) & (df.der_hf > lb)
    ]

    df_minority = df[
        (df.der_hf >= ub) | (df.der_hf <= lb)
    ]

    df_majority_downsampled = resample(
        df_majority, replace=False, n_samples = int(frac * df_majority.shape[0]), random_state=constant
    )

    print(
        df_majority.shape[0], df_majority_downsampled.shape[0]
    )

    df_final = pd.concat(
        [df_majority_downsampled, df_minority],
        axis=0
    )

    return df_final
    
if __name__ == '__main__':
    #Predict dhf mid
    #split into train and test
    f = "/home/philgun/Documents/coolstuff/coolstuff/ML/script/script/RBF/data/data.mat"
    data = Data()
    df = data.generate_data(f)[0:1440].sample(frac=1).reset_index(drop=True)

    df_mid = df[
        ["T_f_2","T_f_1","T_f_3","T_s_2","u_flow","der_hf_2"]
    ]

    df_test = df_mid[0:int(0.1 * df_mid.shape[0])]
    df_train = df_mid[int(0.1 * df_mid.shape[0]):]

    X_test = df_test[
        df_test.columns[0:5]
    ].to_numpy()
    
    y_test = df_test[
        df_test.columns[-1]
    ].to_numpy().reshape(-1,1)

    a,b,c,d,e,vals = df_train.to_numpy().T
    
    now = time.time()

    rbfi = Rbf(a,b,c,d,e,vals, function="thin_plate")

    print(
        "Training time -----------------------> %s seconds"%(time.time() - now)
    )

    print("ATTRIBUTES RBF")

    print(
        rbfi.nodes
    )

    joblib.dump(rbfi.nodes, "W.pickle",protocol=2)
    
    W = rbfi.nodes
  
    a_test, b_test, c_test, d_test, e_test = df_test[
        df_test.columns[0:5]
    ].to_numpy().T

    X_train = df_train[df_train.columns[0:5]].to_numpy()

    r = cdist(
        df_test[df_test.columns[0:5]].to_numpy() , X_train
    )

    y_pred = np.dot(
        r**2 * np.log(r), W
    )

    #y_pred = np.dot(
    #    r, W
    #)

    #y_pred = rbfi(a_test, b_test, c_test, d_test, e_test)
    plt.scatter(y_test,y_pred)
    #plt.xlim(y_test.min(),y_test.max())
    #plt.ylim(y_test.min(),y_test.max())
    plt.show()

    '''

    #Build the polynomial
    poly_init = poly.PolynomialRegression(df_train, df_train, 3, multinomials=True)
    features = poly_init.get_feature_vector()
    
    now = time.time()
    
    polyfit = poly_init.training()
    
    print(
        "Training time ---------------------> %s seconds"%(time.time() - now)
    )

    l = []
    for i in features.keys():
        l.append(features[i])

    print(polyfit.generate_expression(l))

    y_pred = poly_init.predict_output(X_test)
    print(y_pred,y_test)

    plt.scatter(y_test,y_pred)
    plt.show()
    '''



    