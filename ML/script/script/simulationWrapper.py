# -*- coding: utf-8 -*-
import matplotlib.style
import matplotlib as mpl
import numpy as np
import pandas as pd
from matplotlib import pyplot as plt
from pyDOE import *
try:
    from solartherm import simulation
except:
    import sys
    sys.path.append("/home/philgun/solartherm-particle/src/python")
    from solartherm import simulation

try:
    import seaborn as sns
except:
    pass

from DyMat import DyMatFile as D
import shutil
import os
import glob
import pickle
import time
import random
import functools
from scipy.optimize import minimize, Bounds, least_squares
from scipy import optimize

def sigmoid(x, a, b, c, d):
    """ 
        https://stackoverflow.com/questions/43213069/fit-bipolar-sigmoid-python
        General sigmoid function
        a adjusts amplitude : T_max
        b adjusts y offset  : T_min
        c adjusts x offset  : the smaller the c, the more sigmoid moves to the right
        d adjusts slope 
    """
    y = ((a-b) / (1 + np.exp(-d*(x-c)))) + b
    #Revert
    return y

def generateLHS(UB,LB,numdata,criterion='maximin'):
    try:
        assert(
            len(UB)==len(LB)
        )
    except:
        raise ValueError("Length UB and LB are not the same\n")

    LHS = lhs(
        len(UB),samples=numdata,criterion=criterion
    )
    for j in range(LHS.shape[1]):
        LHS[:,j] = LHS[:,j] * (UB[j]-LB[j]) + LB[j]
    return LHS

class SimulationWrapper(object):
    def __init__(self,moname,modir,simdir):
        self.moname = moname
        self.simdir = simdir
        self.modir = modir
        fnmo = "%s/%s.mo"%(self.modir,self.moname)
        shutil.copy(fnmo,self.simdir)
        os.chdir(self.simdir)
        self.sim = simulation.Simulator(
            "%s.mo"%(self.moname),suffix="0"
        )
        self.sim.compile_model()
        self.sim.compile_sim()
    
    def varname(self,L):
        self.modelicaVarName = L

    def gen_LHS(self,UB,LB,numdata):
        LHS = generateLHS(UB,LB,numdata)
    
    def simulate(self,val,start="0",stop="1",step="1",maxStep="1"):
        self.par_n = []

        for n in self.modelicaVarName:
            self.par_n.append(n)

        self.par_v = []
        for v in val:
            self.par_v.append(str(v))

        print(self.par_n)
        print(self.par_v)
        
        #Updating parameters
        self.sim.load_init()
        self.sim.update_pars(self.par_n,self.par_v)

        #Start simulation
        self.sim.simulate(
            start=start,
            stop=stop,
            step=step,
            maxStep=maxStep,
            tolerance="1e-06",
            integOrder="5",
            solver="dassl",
            nls="homotopy"
        )

    def checkParsing(self,N):
        self.matfile = "%s_res_0.mat"%(self.moname)
        self.data = D(self.matfile)

        a = self.data.data("T_max_sampling")[-1]
        b = self.data.data("T_min_sampling")[-1]
        c = self.data.data("X_offset")[-1]
        d = self.data.data("slope")[-1]
        e = self.data.data("delta_T")[-1]

        x = np.arange(1,101,1)
        y = sigmoid(
            x,a,b,c,d
        )
        y_filler = y - e

        T_f = []
        T_p = []

        for i in range(1,N+1):
            T_f.append(
                self.data.data("thermocline_Tank.Tank_A.T_f[%s]"%(int(i)))[0]
            )
            T_p.append(
                self.data.data("thermocline_Tank.Tank_A.T_s[%s]"%(int(i)))[0]
            )
        '''
        fig,ax = plt.subplots(1,figsize=(15,15))
        ax.plot(
            x,T_f,label="fluid matfile",c = "black"
        )
        ax.plot(
            x,y,label="fluid python", c="black",ls="--"
        )
        ax.plot(
            x,T_p,label="filler surface matfile",c="red"
        )
        ax.plot(
            x,y_filler,label="filler surface python",c="red",ls="--"
        )
        ax.legend()
        ax.set_xlabel("X")
        ax.set_ylabel("Temperature in K")
        ax.set_title("Initial temperature in the tank.\n T_max:%s, T_min:%s, Offset:%s, Slope:%s, delta T:%s"%(a,b,c,d,e))
        
        idx = 0
        while os.path.exists("./fig/%s.png"%(idx)):
            idx +=1
            
        plt.savefig("./fig/%s.png"%(idx))
        '''

        diff = sum(abs(y - T_f))
        diff += sum(abs(y_filler - T_p))
        assert(diff< 1e-2)
 
    def genRawData(self,N):
        self.matfile = "%s_res_0.mat"%(self.moname)
        self.data = D(self.matfile)
        self.N = N #--> Number of discretisations

        data = D(self.matfile)

        colnames = ["time","rho_f_avg","dz","U_bot","D_tank","U_wall","eta","m_p"]

        for i in range(1,self.N+1):
            colnames.append("Tf_%s"%i)

        for i in range(1,self.N+1):
            colnames.append("hf_%s"%i)

        for i in range(1,self.N+1):
            colnames.append("hp_%s"%i)

        for i in range(1,self.N+1):
            colnames.append("der_hf_%s"%i)

        for i in range(1,self.N+1):
            colnames.append("der_hp_%s"%i)

        for i in range(1,self.N+1):
            colnames.append("Ts_%s"%i)

        T_fs = []
        T_ss = []
        h_fs = []
        h_ps = []
        der_h_fs = []
        der_h_ps = []
        k_effs = []
        h_vs = []

        time_simul = np.array(self.data.abscissa("der(thermocline_Tank.Tank_A.h_f[1])",valuesOnly=True)).reshape(-1,1)

        for i in range(1,self.N+1):
            key = "thermocline_Tank.Tank_A.T_f[%s]"%(i)
            vals = self.data.data(key)
            T_fs.append(vals)

            key = "thermocline_Tank.Tank_A.T_s[%s]"%(i)
            vals = self.data.data(key)
            T_ss.append(vals)

            key = "thermocline_Tank.Tank_A.h_f[%s]"%(i)
            vals = self.data.data(key)
            h_fs.append(vals)

            key = "thermocline_Tank.Tank_A.h_p[%s]"%(i)
            vals = self.data.data(key)
            h_ps.append(vals)

            key = "der(thermocline_Tank.Tank_A.h_f[%s])"%(i)
            vals = self.data.data(key)
            der_h_fs.append(vals)

            key = "der(thermocline_Tank.Tank_A.h_p[%s])"%(i)
            vals = self.data.data(key)
            der_h_ps.append(vals)

            
        T_fs = np.transpose(np.array(T_fs))
        T_ss = np.transpose(np.array(T_ss))
        h_fs = np.transpose(np.array(h_fs))
        h_ps = np.transpose(np.array(h_ps))
        der_h_fs = np.transpose(np.array(der_h_fs))
        der_h_ps = np.transpose(np.array(der_h_ps))

        par = [
            "thermocline_Tank.Tank_A.rho_f_avg",
            "thermocline_Tank.Tank_A.dz",
            "thermocline_Tank.Tank_A.U_bot",
            "thermocline_Tank.Tank_A.D_tank",
            "thermocline_Tank.Tank_A.U_wall",
            "thermocline_Tank.Tank_A.eta", 
            "thermocline_Tank.Tank_A.m_p[1]"
        ]

        rows = T_fs.shape[0]
        parval = []

        for p in par:
            v = self.data.data(p)[-1]
            v = v * np.ones(rows)
            parval.append(v)

        parval = np.transpose(np.array(parval))

        T_amb = np.array(self.data.data("thermocline_Tank.T_amb")).reshape(-1,1)
        colnames.append("T_amb")

        u_flow = np.array(self.data.data("thermocline_Tank.Tank_A.u_flow")).reshape(-1,1)
        colnames.append("u_flow")

        T_charge = np.transpose(np.array(self.data.data("T_recv_sampling")[0] * np.ones(rows))).reshape(-1,1)
        colnames.append("T_charge")

        T_discharge = np.transpose(np.array(self.data.data("T_PB_sampling")[0] * np.ones(rows))).reshape(-1,1)
        colnames.append("T_discharge")

        h_in = np.array(self.data.data("thermocline_Tank.Tank_A.h_in")).reshape(-1,1)
        colnames.append("h_in")

        h_out = np.array(self.data.data("thermocline_Tank.Tank_A.h_out")).reshape(-1,1)        
        colnames.append("h_out")

        N = np.concatenate(
            (time_simul, parval, T_fs, h_fs, h_ps, der_h_fs, der_h_ps, T_ss, T_amb, u_flow, T_charge, T_discharge,h_in, h_out), 
            axis=1
        )        

        self.df_raw = pd.DataFrame(
            N,columns=colnames
        )

        #Append the new df with existing df
        idx = 0
        while os.path.exists("./res/rawdata%s.csv"%(idx)):
            idx +=1
        
        self.df_raw.to_csv(
            "./res/rawdata%s.csv"%(idx),index=False
        )

    def genMidSectionData(self):
        dfs = []
        self.sections = np.arange(2,self.N,dtype=np.int32)

        for i in self.sections:
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

            #Get the hf data for the ith and the adjacent cell
            hf_i_minus_1 = self.df_raw["hf_%s"%(i-1)]
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

            #Get the delta h. if u_flow < 0 (charging) and u_flow > 0 (discharging)
            if u_flow.iloc[-1] < 0:
                delta_h = hf_i - hf_i_plus_1
            else:
                delta_h = hf_i_minus_1 - hf_i

            df = pd.DataFrame(
                zip(
                    rho_f_avg,dz,U_bot,D_tank,U_wall,eta,
                    Tf_i_minus_1,Tf_i,Tf_i_plus_1,
                    k_eff_i_minus_1,k_eff_i,k_eff_i_plus_1,
                    hf_i_minus_1,hf_i,hf_i_plus_1,delta_h,
                    hv_i,Ts_i,
                    T_amb,u_flow,
                    der_hf_i
                ),
                columns =[
                    "rho_f_avg","dz","U_bot","D_tank","U_wall","eta",
                    "Tf_i_minus_1","Tf_i","Tf_i_plus_1",
                    "k_eff_i_minus_1","k_eff_i","k_eff_i_plus_1",
                    "hf_i_minus_1","hf_i","hf_i_plus_1","delta_h",
                    "hv_i","Ts_i",
                    "T_amb","u_flow",
                    "der_hf_i"
                ]
            )
            #Only take the last value? 
            #dfs.append(df)
            dfs.append(df.iloc[[-1]])
        
        #Concat into one dataframe
        self.masterdf = dfs[0]
        lencheck = len(dfs[0])

        for i in range(1,len(dfs)):
            print(
                "Concat cell no %s"%(i+2)
            )
            self.masterdf = pd.concat(
                [self.masterdf,dfs[i]],axis=0,sort=False
            )
            lencheck += len(dfs[i])
        self.masterdf.reset_index()
        assert(
            len(self.masterdf) == lencheck 
        )

        print(self.masterdf.head())

        #Save datframe into csv
        idx = 0
        while os.path.exists("./res/midSectionData%s.csv"%(idx)):
            idx+=1
    
        self.masterdf.to_csv("./res/midSectionData%s.csv"%(idx),index=False)

        return self.masterdf

    def genRegressionData(self,N, numerical=False):
        self.matfile = "%s_res_0.mat"%(self.moname)
        self.data = D(self.matfile)
        self.N = N

        #Fluid temperatures data
        T_fs = []
        Tf_preds = []
        T_ss = []

        for i in range(1,self.N+1):
            key = "thermocline_Tank.Tank_A.T_f[%s]"%(i)
            vals = self.data.data(key)
            T_fs.append(vals)

            key = "thermocline_Tank.Tank_A.T_s[%s]"%(i)
            vals = self.data.data(key)
            T_ss.append(vals)

            key = "T_f_regression[%s]"%(i)
            vals = self.data.data(key)
            Tf_preds.append(vals)

        T_fs = np.transpose(np.array(T_fs))
        Tf_preds = np.transpose(np.array(Tf_preds))
        T_ss = np.transpose(np.array(T_ss))

        #Derivative of a,b,c,d (regression coefficient)
        self.der_a = np.array(self.data.data("der_a")).reshape(-1,1)
        self.der_b = np.array(self.data.data("der_b")).reshape(-1,1)
        self.der_c = np.array(self.data.data("der_c")).reshape(-1,1)
        self.der_d = np.array(self.data.data("der_d")).reshape(-1,1)

        #a,b,c,d,e,f,g,h
        self.a = np.array(self.data.data("a")).reshape(-1,1)
        self.b = np.array(self.data.data("b")).reshape(-1,1)
        self.c = np.array(self.data.data("c")).reshape(-1,1)
        self.d = np.array(self.data.data("d")).reshape(-1,1)

        try:
            self.e = np.array(self.data.data("e")).reshape(-1,1)
            self.f = np.array(self.data.data("f")).reshape(-1,1)
            self.g = np.array(self.data.data("g")).reshape(-1,1)
            self.h = np.array(self.data.data("h")).reshape(-1,1)
            self.der_e = np.array(self.data.data("der_a")).reshape(-1,1)
            self.der_f = np.array(self.data.data("der_b")).reshape(-1,1)
            self.der_g = np.array(self.data.data("der_c")).reshape(-1,1)
            self.der_h = np.array(self.data.data("der_d")).reshape(-1,1)
            efgh = True
        except:
            efgh = False

        #Get operational params
        self.mdot = self.data.data("mdot")

        T_amb = np.array(self.data.data("thermocline_Tank.T_amb")).reshape(-1,1)
        u_flow = np.array(self.data.data("thermocline_Tank.Tank_A.u_flow")).reshape(-1,1)

        #Get time
        self.time_simul = self.data.abscissa("der_a",valuesOnly=True)
        self.time_simul = np.array(self.time_simul).reshape(-1,1)
        
        #Get parameters
        par = ["thermocline_Tank.Tank_A.rho_f_avg","thermocline_Tank.Tank_A.dz","thermocline_Tank.Tank_A.U_bot","thermocline_Tank.Tank_A.D_tank","thermocline_Tank.Tank_A.U_wall","thermocline_Tank.Tank_A.eta"]
        rows = T_fs.shape[0]
        parval = []

        for p in par:
            v = self.data.data(p)[-1]
            v = v * np.ones(rows)
            parval.append(v)
        
        parval = np.transpose(np.array(parval))

        T_recv_sampling = (self.data.data("T_recv_sampling")[0] * np.ones(rows)).reshape(-1,1)
        T_PB_sampling = (self.data.data("T_PB_sampling")[0] * np.ones(rows)).reshape(-1,1)

        if efgh == True:
            colnames = ["time","rho_f_avg","dz","U_bot","D_tank","U_wall","eta","u_flow","T_rcv","T_PB","T_amb","a","b","c","d","e","f","g","h","der_a","der_b","der_c","der_d","der_e","der_f","der_g","der_h"]
        else:
            colnames = ["time","rho_f_avg","dz","U_bot","D_tank","U_wall","eta","u_flow","T_rcv","T_PB","T_amb","a","b","c","d","der_a","der_b","der_c","der_d"]
        
        for i in range(1,self.N+1):
            colnames.append("Tf_%s"%i)

        for i in range(1,self.N+1):
            colnames.append("Tf_pred_%s"%i)

        for i in range(1,self.N+1):
            colnames.append("Ts_%s"%i)

        if efgh == True:
            N = np.concatenate(
                (self.time_simul,parval,u_flow,T_recv_sampling,T_PB_sampling,T_amb, self.a, self.b, self.c, self.d, self.e, self.f, self.g, self.h, self.der_a, self.der_b, self.der_c,self.der_d, self.der_e, self.der_f, self.der_g,self.der_h, T_fs, Tf_preds,T_ss), axis=1
            )
        else:
            N = np.concatenate(
                (self.time_simul,parval,u_flow,T_recv_sampling,T_PB_sampling,T_amb, self.a, self.b, self.c, self.d, self.der_a, self.der_b, self.der_c,self.der_d, T_fs, Tf_preds,T_ss), axis=1
            )

        self.df_raw = pd.DataFrame(
            N,columns=colnames
        )

        if numerical == True:
            self.der_a = []
            self.der_b = []
            self.der_c = []
            self.der_d = []
            self.der_e = []
            self.der_f = []
            self.der_g = []
            self.der_h = []

            #Manually calculated using forward differencing
            #https://en.wikipedia.org/wiki/Numerical_differentiation#Finite_differences 

            #Leave out the last time step data (repetition of the N-1 data)
            for i in range(self.df_raw.shape[0]-1):
                delta_time = abs(self.df_raw["time"].iloc[i+1] - self.df_raw["time"].iloc[i])
                if delta_time == 0:
                    self.der_a.append(0)
                    self.der_b.append(0)
                    self.der_c.append(0)
                    self.der_d.append(0)
                    self.der_e.append(0)
                    self.der_f.append(0)
                    self.der_g.append(0)
                    self.der_h.append(0)
                else:
                    self.der_a.append(
                        (self.df_raw["a"].iloc[i+1] - self.df_raw["a"].iloc[i])/delta_time
                    )
                    self.der_b.append(
                        (self.df_raw["b"].iloc[i+1] - self.df_raw["b"].iloc[i])/delta_time
                    )
                    self.der_c.append(
                        (self.df_raw["c"].iloc[i+1] - self.df_raw["c"].iloc[i])/delta_time
                    )
                    self.der_d.append(
                        (self.df_raw["d"].iloc[i+1] - self.df_raw["d"].iloc[i])/delta_time
                    )
                    self.der_e.append(
                        (self.df_raw["e"].iloc[i+1] - self.df_raw["e"].iloc[i])/delta_time
                    )
                    self.der_f.append(
                        (self.df_raw["f"].iloc[i+1] - self.df_raw["f"].iloc[i])/delta_time
                    )
                    self.der_g.append(
                        (self.df_raw["g"].iloc[i+1] - self.df_raw["g"].iloc[i])/delta_time
                    )
                    self.der_h.append(
                        (self.df_raw["h"].iloc[i+1] - self.df_raw["h"].iloc[i])/delta_time
                    )
                    
            #Take the row in df that has derivative - data row 1 to N-1
            self.df_raw = self.df_raw[0:self.df_raw.shape[0]-1]

            #Replace the derivative of a,b,c,d
            self.df_raw.der_a = self.der_a
            self.df_raw.der_b = self.der_b
            self.df_raw.der_c = self.der_c
            self.df_raw.der_d = self.der_d
            self.df_raw.der_e = self.der_e
            self.df_raw.der_f = self.der_f
            self.df_raw.der_g = self.der_g
            self.df_raw.der_h = self.der_h

            #Take only from row 2
            self.df_raw = self.df_raw[1:]

        #Save the df as csv
        idx = 0
        while os.path.exists("./res/rawdata%s.csv"%(idx)):
            idx +=1

        self.df_raw.to_csv(
            "./res/rawdata%s.csv"%(idx),index=False
        )

class Data(object):
    def __init__(self,fns):
        self.fns = fns
    
    def append(self):
        if not os.path.exists("tankData.pkl"):
            colnames = pd.read_csv(self.fns[0]).columns
            d_master = np.genfromtxt(self.fns[0],delimiter=",",skip_header=1)
            init_length = d_master.shape[0]
            i = 2
            for fn in self.fns[1:]:
                print("processing file number %s from %s files"%(i,len(self.fns)))
                d = np.genfromtxt(fn,delimiter=",",skip_header=1)
                append_length = d.shape[0]
                init_length+=append_length
                
                #Appending
                d_master = np.append(d_master,d,axis=0)

                i+=1

            self.df = pd.DataFrame(
                d_master,columns=colnames
            )

            assert(
                self.df.shape[0] == init_length
            )
            
            self.df.to_pickle("tankData.pkl")
        else:
            self.df = pd.read_pickle("tankData.pkl")

    def plotder(self):
        fig,ax = plt.subplots(1,2)

        #Plot dh/dt
        sns.distplot(
            self.df[(self.df.der_hf_i < -2) | (self.df.der_hf_i > 2)]["der_hf_i"],ax=ax[0],kde=False,hist=True,bins=1000
        )
        sns.distplot(
            self.df[(self.df.der_hf_i > -2) & (self.df.der_hf_i < 2)]["der_hf_i"],ax=ax[1],kde=False,hist=True,bins=1000
        )
        plt.show()
        
    def explore(self):
        fig, ax = plt.subplots(figsize =(10, 10)) 

        #T_i-1 - T_i
        self.df["delta_T_downwind"] = self.df["Tf_i_minus_1"] - self.df["Tf_i"]

        #T_i - T_i+1
        self.df["delta_T_upwind"] = self.df["Tf_i"] - self.df["Tf_i_plus_1"]

        #sum_k_downwind
        self.df["sum_k_downwind"] = self.df["k_eff_i_minus_1"] - self.df["k_eff_i"]

        #sum_k_upwind
        self.df["sum_k_upwind"] = self.df["k_eff_i"] - self.df["k_eff_i_plus_1"]

        #k_mul_downwind
        self.df["k_mul_downwind"] = self.df["k_eff_i_minus_1"] * self.df["k_eff_i"]

        #k_mul_upwind
        self.df["k_mul_upwind"] = self.df["k_eff_i"] * self.df["k_eff_i_plus_1"]

        #delta Tf - Ts
        self.df["Tf_minus_Ts"] = self.df["Tf_i"] * self.df["Ts_i"]

        #Drop the "constants"
        self.corrMatrix = self.df[
            self.df.columns[6:]
        ].drop(
            columns=[
                "T_amb","hf_i","hf_i_minus_1","hf_i_plus_1","Tf_i_minus_1","Tf_i_plus_1","Tf_i","k_eff_i_minus_1",
                "k_eff_i","k_eff_i_plus_1","Ts_i"
            ]
        ).corr()
        sns.heatmap(self.corrMatrix,ax = ax, cmap ="YlGnBu", linewidths = 0.1,annot=True)

        #Plot the sensitivity
        cols = self.corrMatrix.columns
        fig,axes = plt.subplots(2,int((len(cols)-1)/2))
        fig.tight_layout(pad=2)

        y = self.df["der_hf_i"]

        for i,ax in enumerate(axes.flat):
            if cols[i] is not "der_hf_i":
                x = self.df[cols[i]]  
                ax.scatter(x,y,s=0.5)
                ax.set_xlabel(cols[i])
                ax.set_ylabel("dh$_i$/dt")

        #Plot PDF with binned delta_T_downwind
        fig,ax = plt.subplots(1)
        r = np.linspace(
            self.df["delta_T_downwind"].min(), self.df["delta_T_downwind"].max(), 50
        )

        for i in range(len(r)-1):
            lb = r[i]
            ub = r[i+1]

            #Slice the df
            df_plot = self.df[
                (self.df.delta_T_downwind >= lb) & (self.df.delta_T_downwind < ub)
            ]

            #Plot
            y = df_plot.der_hf_i
            sns.distplot(
                y,kde=False,hist=True,
                label="dh$_\mathrm{i}$/dt %s °C ≤ ΔT_downwind < %s °C. Count: %s, max = %s, min %s"%(round(lb,2),round(ub,2),len(df_plot),round(df_plot.der_hf_i.max(),2),round(df_plot.der_hf_i.min(),2)), 
                ax=ax
            )
        ax.legend(fontsize =10,loc="upper left",ncol=2,labelspacing=0.05) 
        ax.set_title("Original data")

        #Drop the majority data in a random order but keep the "interesting" data in the dataset
        self.df_mod = self.df.drop(
            self.df[
                (self.df.delta_T_downwind > -0.56) & (self.df.delta_T_downwind < 0.72) & (abs(self.df.der_hf_i) <5)
            ].sample(frac=0.95).index
        )

        #Plot PDF with binned delta_T_downwind over modified df
        fig,ax = plt.subplots(1)
        r = np.linspace(
            self.df_mod["delta_T_downwind"].min(), self.df_mod["delta_T_downwind"].max(), 50
        )

        for i in range(len(r)-1):
            lb = r[i]
            ub = r[i+1]

            #Slice the df
            df_plot = self.df_mod[
                (self.df_mod.delta_T_downwind >= lb) & (self.df_mod.delta_T_downwind < ub)
            ]

            #Plot
            y = df_plot.der_hf_i
            sns.distplot(
                y,kde=False,hist=True,
                label="dh$_\mathrm{i}$/dt %s °C ≤ ΔT_downwind < %s °C. Count: %s, max = %s, min %s"%(round(lb,2),round(ub,2),len(df_plot),round(df_plot.der_hf_i.max(),2),round(df_plot.der_hf_i.min(),2)), 
                ax=ax
            )
        ax.legend(fontsize = 10,loc="upper left",ncol=2,labelspacing=0.05) 
        ax.set_title("Dropped data")

        plt.show()

        self.df_mod.to_csv(
            "dataMiddleSectionDropped.csv",index=False
        )

def estimate_offset(T):
    #Sigmoid is always symetrical, as such location of the offset point will always be around when the temperature is at the average
    if abs(T[-1] - T[0]) > 1e-3: #If the remperature is not flat
        average_temp = sum(T)/len(T)

        #Locate where the offset is
        offset = np.where(T>average_temp)
        offset = (offset[0][0]+ offset[0][0]-2)/2
    else:
        offset = 100
    return offset

def estimate_top_bot_temp(T):
    if T[-1] - T[0] > 1e-3: #If the remperature is not flat
        T_bot = T[0]
        T_top  = T[-1]
    else:   
        T_bot,T_top = T[0],T[0]          
        
    return T_bot, T_top

def customFunction(x, pars):
    #Function: superposition of sigmoid
    a,b,c,d,e,f,g,h = pars
    
    y1 = sigmoid(x,a,b,c,d)
    y2 = sigmoid(x,e,f,g,h)
    
    return y1 - y2

def mse(x, T, pars):
    y = customFunction(x, pars)
    L2 = sum((T - y)**2)/y.shape[0]
    return L2

def estimate_offset(T):
    #Sigmoid is always symetrical, as such location of the offset point will always be around when the temperature is at the average
    if abs(T[-1] - T[0]) > 1e-3: #If the remperature is not flat
        average_temp = sum(T)/len(T)

        #Locate where the offset is
        offset = np.where(T>average_temp)
        offset = (offset[0][0]+ offset[0][0]-2)/2
    else:
        offset = 100
    return offset

def fit(input,u_flow,method="Nelder-Mead"):
    # Get the input from dictionary
    T = input["Temperatures"]
    x = input["num_discretisation"]

    #Several assertions
    try:
        assert(len(T) == x)
    except:
        raise AssertionError("Length of temperature from Modelica is not the same as the number of discretisation. Num. of discretisation is %s, length of temperature array is %s"%(x,len(T)))
    
    #Convert type of T if necessary
    if not isinstance(T,np.ndarray):
        T = np.array(T).reshape(-1,)

    #Discretisations
    X = np.arange(1,x+1,dtype=np.int32)

    #Partially initialise the model
    objfunc = functools.partial(
        mse,    #Lost function (L2)
        X,      #Discretisations
        T       #True temp
    )

    if T[0] - T[-1] <1e-3:
        maxT = max(T)
        minT = min(T)
    else:
        maxT = 680
        
    #Minimize
    if method=="Nelder-Mead":
        #Initial values for the main sigmoid
        T_max_init, T_min_init = estimate_top_bot_temp(T)
        offset_init = estimate_offset(T)
        
        #Initial values for the 2nd sigmoid
        if u_flow < 0: #charging
            e_init, f_init = [-20,0]
            g_init, h_init = [100,0.2]
        else: #discharging
            e_init, f_init = [20,0]
            g_init, h_init = [0,-0.5]

        pars0 = np.array(
            [T_max_init, T_min_init, offset_init, 0.5, e_init, f_init, g_init, h_init]
        )
        
        res = minimize(
            objfunc,pars0,method="nelder-mead", options={'xatol': 1e-11, 'disp': False}
        )

    elif method=="Global":
        #Need to guide the bound
        if u_flow < 0: #Charging
            bounds = [
                (680 + 273.15, 720 + 273.15),       #a  : T_max
                (510 + 273.15, 550 + 273.15),       #b  : T_min
                (0,100),                            #c  : offset
                (0,1),                              #d  : slope

                (-20,0),                            #e  : max 2nd sigmoid   -> negative
                (0,1e-3),                           #f  : min 2nd sigmoid   -> close to 0
                (-150,150),                            #g  : offset 2nd sigmoid 
                (0,1)                               #h  : slope 2nd sigmoid -> positive
            ] 
        else:   #discharging
            bounds = [
                (680 + 273.15, 720 + 273.15),       #a  : T_max
                (510 + 273.15, 550 + 273.15),       #b  : T_min
                (0,100),                            #c  : offset
                (0,1),                              #d  : slope

                (0,20),                             #e  : max 2nd sigmoid  -> positive
                (0,1e-3),                           #f  : min 2nd sigmoid  -> close to 0
                (-150,150),                            #g  : offset 2nd sigmoid 
                (-1,0)                              #h  : slope 2nd sigmoid -> negative
            ] 


        res = optimize.shgo(
            objfunc,bounds
        )
    
    elif method=="TC":
        if u_flow <0: #Charging
            bounds = Bounds(
                [680+273.15, 510+273.15, 0,   0, -20,    0, -20, -1], 
                [720+273.15, 550+273.15, 100, 1,  20, 1e-3,  150, 1]     
            )

            par0 = [
                max(T),min(T), estimate_offset(T),0.5,
                -10, 0, 100, 0.5
            ]

        else:
            bounds = Bounds(
                [680+273.15, 510+273.15, 0,   0,  -20,    0, -20, -1], 
                [720+273.15, 550+273.15, 100, 1,  20, 1e-3,  150,  1]                                                               
            )

            par0 = [
                max(T),min(T), estimate_offset(T),0.5,
                10, 0, 0, -0.5
            ]

        res = minimize(
            objfunc,par0,method="trust-constr",bounds=bounds
        )

    params = []
    
    for p in res.x:  
        params.append(p)
    
    return params

if __name__ == '__main__':
    '''
        [12:00, 24/03/2021] Zebedee PhD ANU: So T-min and T-max are temperatures that you charge the storage with
        [12:00, 24/03/2021] Zebedee PhD ANU: T-Pb-min is temperature of the top that forces you to stop discharging
        [12:01, 24/03/2021] Zebedee PhD ANU: T-rcv-max is the temp of the bottom that forces you to stop charging

        parameter SI.Temperature T_min = 510 + 273.15 "Minimum temperature";
        parameter SI.Temperature T_max = 720 + 273.15 "Maximum temperature";
        parameter SI.Temperature T_PB_min = 680 + 273.15 "Minimum tolerated outlet temperature to PB";
        parameter SI.Temperature T_Recv_max = 550 + 273.15 "Maximum tolerated outlet temperature to recv";
    '''
    
    x = np.arange(1,101,1)
    numsamples = 2000

    #UB and LB for the sigmoid function
    slope_UB = 1
    slope_LB = 0

    offset_UB = 100
    offset_LB = 10

    T_top_UB = 720+273.15
    T_top_LB = 680+273.15

    T_bot_UB = 550+273.15
    T_bot_LB = 510+273.15

    delta_T_UB = 30
    delta_T_LB = 0
    
    mdot_UB = 2000
    mdot_LB = -2000
    
    #Form the UB-LB lists
    UB = [T_top_UB, T_bot_UB, offset_UB, slope_UB, delta_T_UB, mdot_UB]
    LB = [T_top_LB, T_bot_LB, offset_LB, slope_LB, delta_T_LB, mdot_LB]

    #Generate LHS
    print("Generating LHS of %s samples"%(numsamples))
    LHS = generateLHS(UB,LB,numsamples)
    print("Done generating LHS!")

    #Prep the simulation
    moname = "Part2_MgO_6h_10h_8h"
    modir = "/home/philgun/solartherm-zeb/SolarTherm/Systems/Publications/Thermocline/Constant_Charging/Time_Controlled"
    simdir = "./simulation_tank"

    if not os.path.exists(simdir):
        os.makedirs(simdir)

    sim = SimulationWrapper(moname,modir,simdir)

    for i in range(LHS.shape[0]):
        #Operational parameters that are sampled using LHS
        T_max_sampling  = LHS[i,0]
        T_min_sampling  = LHS[i,1]
        X_offset        = LHS[i,2]
        slope           = LHS[i,3]
        delta_T         = LHS[i,4]
        mdot            = LHS[i,5]

        #Check the temperature at the top and bottom
        #   if T_top < 680°C then discharging is not an option
        #   if T_bot > 550°C then charging is not an option
        #   else, free either charging or discharging

        #Occasionally throws a uniform initial temperature
        uniform = random.random() > 0.8
        if uniform:
            T_max_sampling = T_min_sampling

        Tf = sigmoid(x,T_max_sampling,T_min_sampling,X_offset,slope)

        T_top = Tf[-1]
        T_bot = Tf[0]

        condition_1 = T_top > 680 + 273.15 and T_bot > 550 + 273.15 #discharge only
        condition_2 = T_top < 680 + 273.15 and T_bot > 550 + 273.15 #cant discharge nor charge
        condition_3 = T_top < 680 + 273.15 and T_bot < 550 + 273.15 #charge only
        condition_4 = T_top > 680 + 273.15 and T_bot < 550 + 273.15 #can do both

        if condition_1 == True:
            mdot = abs(mdot)
            print("Discharge only: T_top %s °C > %s °C and T_bot %s °C > %s °C"%(T_top-273.15, 680, T_bot-273.15,550))
        elif condition_2 == True:
            mdot = 0
            print("Can't discharge nor charge: T_top %s °C < %s °C and T_bot %s °C > %s °C"%(T_top-273.15, 680, T_bot-273.15,550))
        elif condition_3 == True:
            if mdot > 0:
                mdot = mdot * -1
            print("Charge only: T_top %s °C < %s °C and T_bot %s °C < %s °C"%(T_top-273.15, 680, T_bot-273.15,550))
        elif condition_4 == True:
            mdot = mdot
            print("Can do both: T_top %s °C > %s °C and T_bot %s °C < %s °C"%(T_top-273.15, 680, T_bot-273.15,550))

        #Variables that control state
        modelicaVarName = [
            "T_max_sampling","T_min_sampling","X_offset","slope","delta_T","mdot"
        ]

        #Initiate the modelica variables that will be tuned by Python script
        sim.varname(modelicaVarName)

        val = [
            T_max_sampling, 
            T_min_sampling, 
            X_offset, 
            slope, 
            delta_T, 
            mdot
        ]

        sim.simulate(
            val,
            start="0",
            stop="21600",
            step="60s",
            maxStep = "60s"

        )

        sim.checkParsing(100)
        sim.genRawData(100)

    '''
    #Play with superposition of sigmoid and cubic function?
    for iii in ["test"]:
        f = "./simulation_tank/res/rawdata_%s.csv"%(iii)
        df = pd.read_csv(f)
        fig,ax = plt.subplots()   

        for i in range(0,df.shape[0],10):
            Tf = df[
                df.columns[7:107] #Take the Tf
            ].iloc[i].tolist()

            u_flow = df["u_flow"].iloc[i]
            inputs = {"Temperatures": Tf, "num_discretisation" : len(Tf)}

            #Do the regression -  TC
            res = np.array(fit(inputs,u_flow, method="TC"))
            pred = customFunction(
                np.arange(1,101,1,dtype=np.int32),
                res
            )

            write = "a: %s, b: %s, c: %s, d: %s, e: %s, f: %s, g: %s, h: %s"%(res[0],res[1],res[2],res[3],res[4],res[5],res[6],res[7])
            print("TC")
            print(write)

            ax.plot(
                [x for x in range(1,101)],
                [x - 273.15 for x in pred],
                label="Python regression with new func: TC"
            )

            ax.plot(
                [x for x in range(1,101)],
                [x - 273.15 for x in Tf],
                label="Modelica result"
            )
                      

            t = df["time"].iloc[i]

            ax.set_ylabel("Temp [°C]")
            ax.set_xlabel("Position [x]")
            ax.set_title(
                "Time: %s s"%(t)
            )
            ax.set_ylim(500,740)
            ax.yaxis.set_ticks(np.arange(510,740,10))
            ax.xaxis.set_ticks(np.arange(0,110,10))
            
            ax.grid(
                color="r",linestyle="-",linewidth=0.1
            )
            ax.legend()
            plt.pause(0.001)
            ax.cla()
            
        plt.show()
        plt.close(fig)
    '''    
    
    
    '''
    #Plotting the result of the regression
    fns = glob.glob(
        "./simulation_tank/old/rawdata*"
    )


    fig = plt.figure()
    ax = fig.add_axes([0.05,0.05,0.9,0.9])
    ax.set_xlabel("X")
    ax.set_ylabel("Fluid temp. K")
   
    for ii in range(1):
        f = "./simulation_tank/res/rawdata%s.csv"%(ii)
        df = pd.read_csv(f)
        for i in range(df.shape[0]):
            Tf = df[
                df.columns[19:119] #Take the Tf
            ].iloc[i].tolist()

            Tf_pred = df[
                df.columns[119:] #Take the Tf_pred
            ].iloc[i].tolist()

            u_flow = df["u_flow"].iloc[i]
            time = df["time"].iloc[i]

            delta = 0
            for j,T in enumerate(Tf):
                delta += T - Tf_pred[j]
            delta = delta**2
            MSE = delta/len(Tf)

            ax.plot(np.arange(1,101,1),[x-273.15 for x in Tf],label="Modelica")
            ax.plot(np.arange(1,101,1),[x-273.15 for x in Tf_pred],label="Regression")
            ax.set_ylim(500,740)
            ax.set_title(
                "MSE: %s  u_flow: %s   time: %s\n fn:%s  row: %s"%(MSE,u_flow,time,f, i)
            )
            ax.yaxis.set_ticks(
                np.arange(500,740,10)
            )
            ax.grid(color="r",linestyle="-",linewidth=0.5)

            ax.legend()
            plt.pause(0.01)
            ax.cla()
    plt.show()
    '''
    
    '''
    import random
    
    fig,ax = plt.subplots(1)

    for _ in range(200):
        T_top = random.uniform(650.0,720)
        T_bot = random.uniform(490,550)
        offset = random.uniform(0,200)
        slope = random.uniform(0,1)

        y = sigmoid(np.arange(1,101),T_top,T_bot,offset,slope)
        print(y[0],y[-1],type(y),y.shape)
        ax.plot(np.arange(1,101),y)
        ax.set_title("T_max %s T_min %s offset %s slope %s"%(T_top,T_bot,offset,slope))
        ax.set_ylim(T_bot-10,T_top+10)
        ax.yaxis.set_ticks(
            np.arange(T_bot,T_top+20,10))

        if y[0] == y[-1]:
            plt.pause(2)
        else:
            plt.pause(0.05)
        ax.cla()
    plt.show()
    '''

    #Check whether the form of sigmoid function as such can only get 1 solution

    '''
    #Plotting the training data
    try:
        fns = glob.glob(
            "./simulation_tank/res/midSectionData*"
        )

    except:
        print("Data is not ready!")
    
    data = Data(fns)
    data.append()
    data.explore()

    #data.plotder()
    '''


    
