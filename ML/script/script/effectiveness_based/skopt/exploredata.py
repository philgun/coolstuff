import pandas as pd
from matplotlib import pyplot as plt
import matplotlib as mpl
from DyMat import DyMatFile as D
import sys
sys.path.append("/home/philgun/Documents/coolstuff/coolstuff/ML/script/script/effectiveness_based")
sys.path.append("/home/philgun/solartherm-zeb/SolarTherm/Resources/Include")
from run2 import Data
import fit_sigmoid 
import seaborn as sns
import numpy as np

class NewData(Data):
    def __init__(self,fmat):
        super().__init__(fmat)
    
    def generate_filler_temp(self):
        self.N_f = int(self.data.data("N_f")[0])

        T_s = []
        col_name = []

        for i in range(1,self.N_f+1):
            #print(i)
            v_name = "thermocline_Tank.Tank_A.T_s[%s]"%(i)
            T_s.append(
                self.data.data(v_name)
            )
            col_name.append(
                "T_s_%s"%(i)
            )
        
        T_s = np.array(T_s).T

        print(T_s.shape)

        self.df_T_s = pd.DataFrame(
            T_s, columns=col_name
        )
    
    def generate_sigmoid(self):
        fig,ax = plt.subplots()

        X = np.arange(1,101,1,dtype=np.int32)
        A = []; B = []; C = []; D = []

        T_s_pred = []

        for i in range(self.df_T_s.shape[0]):
            T_s = self.df_T_s.iloc[i].to_numpy()
            
            #Plot true data
            ax.plot(
                X,T_s,label="True",c="Black",marker="o"
            )

            #Regression
            inputs = {
                "Temperatures":T_s,
                "num_discretisation":self.N_f
            }
            '''
            https://stackoverflow.com/questions/43213069/fit-bipolar-sigmoid-python
            General sigmoid function
            a adjusts amplitude : T_max
            b adjusts y offset  : T_min
            c adjusts x offset  : the smaller the c, the more sigmoid moves to the right
            d adjusts slope 
            '''
            a,b,c,d = fit_sigmoid.fit(inputs)
            A.append(a); B.append(b); C.append(c); D.append(d)

            T_s_fit = fit_sigmoid.sigmoid(X,(a,b,c,d))
            
            T_s_pred.append(
                [val for val in T_s_fit]
            )
            
            #Plot true fit
            ax.plot(
                X,T_s_fit,label="Fitted",c="Red",ls="--", marker="^"
            )

            ax.set_xlabel("Dimensionless position [x/L]")
            ax.set_ylabel("Filler Temperature [K]")
            ax.set_ylim(
                500+273.15, 730 + 273.15
            )
            ax.set_xlim(1,101)
            
            ax.set_title(
                "Regression vs True Filler Temp. Data no %s from %s data"%(i, self.df_T_s.shape[0])
            )
            ax.legend()

            plt.pause(0.0001)
            ax.cla()

        plt.show()

        T_s_pred = np.array(T_s_pred)
        print(T_s_pred.shape)

        if T_s_pred.shape[1] != self.N_f:
            #Transpose
            T_s_pred = T_s_pred.T

        self.df_T_s_pred = pd.DataFrame(
            T_s_pred, columns = ["T_s_%s_pred"%(index)for index in range(1,self.N_f+1)]
        )

        self.df_sigmoid_param = pd.DataFrame(
            zip(A,B,C,D),columns=["T_max","T_min","Offset","slope"]
        )
        
        self.df_final = pd.concat(
           (self.df, self.df_T_s, self.df_T_s_pred, self.df_sigmoid_param),axis=1
        )

        return self.df_final

def exp11days():
    df = pd.read_csv("df_final_11days.csv")
    v_name = ["T_s_%s"%index for index in range(1,101)]
    plotname = ["Data from :all days","Data from: day 2 - End","Data from: day 3-End", "Data from: day 4-End","Data from: day 5-End","Data from: day 6 - End"]

    fig,axes = plt.subplots(3,2)
    fig.tight_layout(pad=2)

    for i,ax in enumerate(axes.flat):
        df_ = df[df.time>=i*24*3600]
        df_ch = df_[df_.mdot<0]
        df_dis = df_[df_.mdot>0]
        
        ax.scatter(
            df_ch.lv, df_ch.epsilon,c="blue",s=2,label="charging"
        )
        ax.scatter(
            df_dis.lv, df_dis.epsilon,c="red",s=2,label="discharging"
        )
        ax.set_xlabel("State of charge")
        ax.set_ylabel("Epsilon")
        ax.set_title(plotname[i])
        ax.legend()
    
    fig.suptitle("Simulation for charging (6h) and discharging (10h) for 11 days")
    plt.show()

if __name__ == '__main__':
    exp11days()
    fmat = "/home/philgun/Documents/coolstuff/coolstuff/ML/script/script/effectiveness_based/data/11days.mat"
    
    '''
    newData = NewData(fmat)
    df = newData.get_data()
    print(df.tail())
    newData.generate_filler_temp()
    df_final = newData.generate_sigmoid()
    print(df_final.head())
    df_final.to_csv(
        "./df_final_11days.csv",index=False
    )
    '''

    '''
    df = pd.read_csv("df_final.csv")
    
    df_disc = df[df.mdot>0]
    df_ch = df[df.mdot<0]

    fig,ax = plt.subplots(2,2)
    fig.tight_layout(pad=2)
    ax[0,0].scatter(
        df_disc.T_max, df_disc.epsilon,c="red", s=1,label = "discharging"
    )
    ax[0,0].scatter(
        df_ch.T_max, df_ch.epsilon,c="black", s=1,label = "charging"
    )
    ax[0,0].set_title("T_max vs epsilon")
    ax[0,0].set_xlabel("T_max [K]")
    
    ax[0,1].scatter(
        df_disc.T_min, df_disc.epsilon,c="red", s=1,label = "discharging"
    )
    ax[0,1].scatter(
        df_ch.T_min, df_ch.epsilon,c="black", s=1,label = "charging"
    )
    ax[0,1].set_title("T_min vs epsilon")
    ax[0,1].set_xlabel("T_min [K]")

    ax[1,0].scatter(
        df_disc.Offset, df_disc.epsilon,c="red", s=1,label = "discharging"
    )
    ax[1,0].scatter(
        df_ch.Offset, df_ch.epsilon,c="black", s=1,label = "charging"
    )
    ax[1,0].set_title("Offset vs epsilon")
    ax[1,0].set_xlabel("Offset")

    ax[1,1].scatter(
        df_disc.slope, df_disc.epsilon,c="red", s=1,label = "discharging"
    )
    ax[1,1].scatter(
        df_ch.slope, df_ch.epsilon,c="black", s=1,label = "charging"
    )
    ax[1,1].set_title("Slope vs epsilon")
    ax[1,1].set_xlabel("Slope")
    for a in ax.flat:
        a.legend()
    plt.show()
    '''
    '''
    data = Data(fmat)
    df = data.get_data()
    df = df.drop(columns="time")

    df_ch = df[df.mdot<0]
    df_disc = df[df.mdot>0]

    fig,ax = plt.subplots()
    ax.scatter(
        df_disc.lv, df_disc.epsilon, c = "red",label="discharging"
    )
    ax.scatter(
        df_ch.lv, df_ch.epsilon, c = "blue",label="charging"
    )
    ax.legend()
    ax.set_xlabel("SOC")
    ax.set_ylabel("Epsilon")
    plt.show()

    corrMatrix = df_ch.corr()
    sns.heatmap(
        corrMatrix, annot=True
    )
    plt.show()

    '''

