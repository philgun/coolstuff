from DyMat import DyMatFile as D
import pandas as pd
import numpy as np
from matplotlib import pyplot as plt
import seaborn as sns
from sklearn import preprocessing
import smogn
import time
import random

def sigmoid(x):
    return(1 / (1+np.exp(-x)))

def relevance(x):
    x = np.array(x)
    return sigmoid(x - 50)

class Data(object):
    def __init__(self,matfile,N):
        self.matfile = matfile
        self.N = N
        self.data = D(matfile)
    
    def genRawData(self):
        colnames = ["rho_f_avg","dz","U_bot","D_tank","U_wall","eta"]

        for i in range(1,self.N+1):
            colnames.append("Tf_%s"%i)

        for i in range(1,self.N+1):
            colnames.append("hf_%s"%i)

        for i in range(1,self.N+1):
            colnames.append("der_hf_%s"%i)

        for i in range(1,self.N+1):
            colnames.append("k_eff_%s"%i)

        for i in range(1,self.N+1):
            colnames.append("hv_%s"%i)

        for i in range(1,self.N+1):
            colnames.append("Ts_%s"%i)

        T_fs = []
        T_ss = []
        h_fs = []
        der_h_fs = []
        k_effs = []
        h_vs = []

        for i in range(1,self.N+1):
            key = "Tank.Tank_A.T_f[%s]"%(i)
            vals = self.data.data(key)
            T_fs.append(vals)

            key2 = "der(Tank.Tank_A.h_f[%s])"%(i)
            vals2 = self.data.data(key2)
            der_h_fs.append(vals2)

            key3 = "Tank.Tank_A.h_f[%s]"%(i)
            vals3 = self.data.data(key3)
            h_fs.append(vals3)

            key4 = "Tank.Tank_A.k_eff[%s]"%(i)
            vals4 = self.data.data(key4)
            k_effs.append(vals4)

            key5 = "Tank.Tank_A.h_v[%s]"%(i)
            vals5 = self.data.data(key5)
            h_vs.append(vals5)

            key6 = "Tank.Tank_A.T_s[%s]"%(i)
            vals6 = self.data.data(key6)
            T_ss.append(vals6)
            
        T_fs = np.transpose(np.array(T_fs))
        h_fs = np.transpose(np.array(h_fs))
        der_h_fs = np.transpose(np.array(der_h_fs))
        k_effs = np.transpose(np.array(k_effs))
        h_vs = np.transpose(np.array(h_vs))
        T_ss = np.transpose(np.array(T_ss))

        par = ["Tank.Tank_A.rho_f_avg","Tank.Tank_A.dz","Tank.Tank_A.U_bot","Tank.Tank_A.D_tank","Tank.Tank_A.U_wall","Tank.Tank_A.eta"]
        rows = T_fs.shape[0]
        parval = []

        for p in par:
            v = self.data.data(p)[-1]
            v = v * np.ones(rows)
            parval.append(v)

        parval = np.transpose(np.array(parval))

        T_amb = np.array(self.data.data("Tank.T_amb")).reshape(-1,1)
        colnames.append("T_amb")

        u_flow = np.array(self.data.data("Tank.Tank_A.u_flow")).reshape(-1,1)
        colnames.append("u_flow")

        N = np.concatenate(
            (parval,T_fs,h_fs,der_h_fs,k_effs,h_vs,T_ss,T_amb,u_flow), axis=1
        )

        self.df_raw = pd.DataFrame(
            N,columns=colnames
        )

    def genMiddleSectionData(self):
        dfs = []
        self.sections = np.arange(2,self.N,dtype=np.int32)
        for i in self.sections:
            print(
                "Processing cell no %s"%(i)
            )

            #Get the constants
            rho_f_avg = self.df_raw["rho_f_avg"]
            dz = self.df_raw["dz"]
            U_bot = self.df_raw["U_bot"]
            D_tank = self.df_raw["D_tank"]
            U_wall = self.df_raw["U_wall"]
            eta = self.df_raw["eta"]

            #Get the Tf data for the ith and the adjacent cells
            Tf_i_minus_1 = self.df_raw["Tf_%s"%(i-1)]
            Tf_i = self.df_raw["Tf_%s"%(i)]
            Tf_i_plus_1 = self.df_raw["Tf_%s"%(i+1)]

            #Get the k_eff data for the ith and the adjacent cells
            k_eff_i_minus_1 = self.df_raw["k_eff_%s"%(i-1)]
            k_eff_i = self.df_raw["k_eff_%s"%(i)]
            k_eff_i_plus_1 = self.df_raw["k_eff_%s"%(i+1)]

            #Get the hf data for the ith and the next cell
            hf_i = self.df_raw["hf_%s"%(i)]
            hf_i_plus_1 = self.df_raw["hf_%s"%(i+1)]

            #Get the hv (convection coefficient) of the ith cell
            hv_i = self.df_raw["hv_%s"%(i)]

            #Get the filler temperature at the ith cell
            Ts_i = self.df_raw["Ts_%s"%(i)]

            #Get the operational parameters
            T_amb = self.df_raw["T_amb"]
            u_flow = self.df_raw["u_flow"]

            #Get the target variable (der h)
            der_hf_i = self.df_raw["der_hf_%s"%(i)]

            df = pd.DataFrame(
                zip(
                    rho_f_avg,dz,U_bot,D_tank,U_wall,eta,
                    Tf_i_minus_1,Tf_i,Tf_i_plus_1,
                    k_eff_i_minus_1,k_eff_i,k_eff_i_plus_1,
                    hf_i,hf_i_plus_1,
                    hv_i,Ts_i,
                    T_amb,u_flow,
                    der_hf_i
                ),
                columns =[
                    "rho_f_avg","dz","U_bot","D_tank","U_wall","eta",
                    "Tf_i_minus_1","Tf_i","Tf_i_plus_1",
                    "k_eff_i_minus_1","k_eff_i","k_eff_i_plus_1",
                    "hf_i","hf_i_plus_1",
                    "hv_i","Ts_i",
                    "T_amb","u_flow",
                    "der_hf_i"
                ]
            )
            dfs.append(df)
        
        self.masterdf = dfs[0]
        lencheck = len(dfs[0])
        for i in range(1,len(dfs)):
            print(
                "Concat cell no %s"%(i+2)
            )
            self.masterdf = pd.concat(
                [self.masterdf,dfs[i]],axis=0
            )
            lencheck += len(dfs[i])
        self.masterdf.reset_index()
        assert(
            len(self.masterdf) == lencheck 
        )
        return self.masterdf

    def genTopBottomData(self,n):
        self.df_discretised = pd.DataFrame(
            zip(
                self.df_raw ["rho_f_avg"],
                self.df_raw ["dz"],
                self.df_raw["U_bot"],
                self.df_raw["D_tank"],
                self.df_raw["U_wall"],
                self.df_raw["eta"],
                self.df_raw["u_flow"],
                self.df_raw["T_amb"],
                self.df_raw["Tf_%s"%(n)], 
                self.df_raw["Tf_%s"%(n+1)],
                self.df_raw["Ts_%s"%(n)],
                self.df_raw["k_eff_%s"%(n)],
                self.df_raw["k_eff_%s"%(n+1)],
                self.df_raw["hf_%s"%(n)],
                self.df_raw["hf_%s"%(n+1)],
                self.df_raw["der_hf_%s"%(n)]
            ),
            columns=[
                "rho_f_avg","dz","U_bot","D_tank","U_wall","eta","u_flow","T_amb","Tf_%s"%(n),"Tf_%s"%(n+1),"Ts_%s"%(n),"k_eff_%s"%(n),"k_eff_%s"%(n+1),"hf_%s"%(n),"hf_%s"%(n+1),"der_hf_%s"%(n)
            ]
        )
        return self.df_discretised


if __name__ == '__main__':

    N = 100

    matfile = "/home/philgun/Documents/PhD/Publication/ANNforDynamicModelling/data/SolarTherm.Systems.Publications.Thermocline.System_Models.PBS_Surround_SCO2NREL_res.mat"

    data = Data(matfile,N)
    data.genRawData()
    df_1 = data.genTopBottomData(1)
    df_mid = data.genMiddleSectionData()
    a = len(df_mid)
    df_mid.to_csv(
        "data_middle_slice.csv",index=False
    )

    df_mid = pd.read_csv("data_middle_slice.csv")

    assert(a == len(df_mid))

    fig,ax = plt.subplots(1)
    sns.distplot(
        df_mid["der_hf_i"],hist=True, kde=False,ax=ax,bins=1000
    )
    plt.show()

    '''
    #Split df_1 into majority and minority
    df_1_majority = df_1[
        (df_1.der_hf_1 > -0.5) & (df_1.der_hf_1<0.45)  
    ].reset_index()

    df_1_minority = df_1[
        (df_1.der_hf_1 <= -0.5) | (df_1.der_hf_1>0.45)  
    ].reset_index()

    print(df_1_minority.describe())

    #Undersample majority
    idx = np.arange(len(df_1_majority))
    r = np.random.choice(
        idx,len(df_1) - len(df_1_majority),replace=False
    )
    df_1_majority_undersampled = df_1_majority.iloc[r]

    #Append df_1_majority undersampled with df_1_minority
    df_1_undersampled = pd.concat(
        [df_1_majority_undersampled,df_1_minority],axis=0
    ).reset_index()

    fig,ax = plt.subplots(1,2)

    sns.distplot(
        df_1.der_hf_1,hist=True,kde=False, label="True",ax=ax[0]
    )
    ax[0].set_title("True data")

    sns.distplot(
        df_1_undersampled.der_hf_1,hist=True,kde=False, label="True",ax=ax[1]
    )
    ax[1].set_title("Undersampled data")

    plt.show()
    '''