import pandas as pd
import numpy as np
from DyMat import DyMatFile as D

from scipy.optimize import minimize, Bounds
from scipy import optimize
import functools
from matplotlib import pyplot as plt
import random
from solartherm import simulation

class Data:
    def __init__(self, f):
        self.f  = f
    
    def generate_data(self):
        data = D(self.f)
        
        self.Nf = int(data.data("N_f")[0])

        #Get the value
        time = data.abscissa("thermocline_Tank.Tank_A.h_p[1]",valuesOnly=True)

        #Since no design params are perturbed, as such only state variables matter
        u_flow = data.data("thermocline_Tank.Tank_A.u_flow")

        #State variables
        vals = []
        colnames = []

        for i in range(1,self.Nf+1):
            Tf_ = "thermocline_Tank.Tank_A.T_f[%s]"%(i)
            Ts_ = "thermocline_Tank.Tank_A.T_s[%s]"%(i)

            #der_hf = "der(thermocline_Tank.Tank_A.h_f[%s])"%(i)
            #der_hp = "der(thermocline_Tank.Tank_A.h_p[%s])"%(i)

            vals.append(
                data.data(Tf_)
            )
            vals.append(
                data.data(Ts_)
            )
            
            #vals.append(
            #    data.data(der_hf)
            #)
            #vals.append(
            #    data.data(der_hp)
            #)

            colnames.append("T_f_%s"%(i))
            colnames.append("T_s_%s"%(i))
            #colnames.append("der_hf_%s"%(i))
            #colnames.append("der_hp_%s"%(i))
        
        h_p_rep = data.data("h_p_rep")
        hf_in = data.data("thermocline_Tank.Tank_A.h_in")
        hf_out = data.data("thermocline_Tank.Tank_A.h_out")

        vals.append(h_p_rep)
        vals.append(hf_in)
        vals.append(hf_out)

        colnames.append("h_p_rep")
        colnames.append("h_f_in")
        colnames.append("h_f_out")

        states = np.array(vals).T

        df = pd.DataFrame(
            states, columns=colnames
        )  
        
        eta_storage = data.data("eta_storage")
        df["u_flow"] = u_flow 
        df["eta_stg"] = eta_storage
        df["time"] = time
            
        self.df = df[
            df.time > 86400
        ]

        return self.df

def sigmoid(x, pars):
    """ 
        https://stackoverflow.com/questions/43213069/fit-bipolar-sigmoid-python
        General sigmoid function
        a adjusts amplitude : T_max
        b adjusts y offset  : T_min
        c adjusts x offset  : the smaller the c, the more sigmoid moves to the right
        d adjusts slope 
    """
    a,b,c,d = pars

    y = (a-b) / (1 + np.exp(-d*(x-c))) + b
    return y

def customFunction(x, pars):
    #Function: superposition of sigmoid
    a,b,c,d,e,f,g,h = pars
    
    y1 = sigmoid(x,[a,b,c,d])
    y2 = sigmoid(x,[e,f,g,h])
    
    return y1 - y2

def mse(x,T,pars):
    y = sigmoid(x,pars)
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

def estimate_top_bot_temp(T):
    if T[-1] - T[0] > 1e-3: #If the remperature is not flat
        T_bot = T[0]
        T_top  = T[-1]
    else:   
        T_bot,T_top = T[0],T[0]          
        
    return T_bot, T_top

def fit(input,method="trust-constr"):
    # Get the input from dictionary
    T = input["Temperatures"]
    N = input["num_discretisation"]
    try:
        u_flow = input["u_flow"]
    except:
        u_flow = 100

    #Several assertions
    try:
        assert(len(T) == N)
    except:
        raise AssertionError("Length of temperature from Modelica is not the same as the number of discretisation. Num. of discretisation is %s, length of temperature array is %s"%(N,len(T)))
    
    #Convert type of T if necessary
    if not isinstance(T,np.ndarray):
        T = np.array(T).reshape(-1,)

    #Discretisations
    X = np.arange(1,N+1,dtype=np.int32)

    if method == "trust-constr":
        #Partially initialise the model - left the "pars" variable to be iterated by the optimiser
        objfunc = functools.partial(
            mse,    #Lost function (L2)
            X,      #Discretisations
            T       #True temp
        )

        #Initial values
        T_max_init, T_min_init = estimate_top_bot_temp(T)
        offset_init = estimate_offset(T)

        if u_flow <0: 
            #Charging
            bounds = Bounds(
                    [max(T)-40 , min(T)-40 ,   -20,   0],         #LB
                    [max(T)    , min(T)    ,   120,   1]          #UB                    
                )

            #Since when charging flows comes from the top of the tank
            par0 = [
                max(T)-min(T),min(T), estimate_offset(T), 0.5
            ]

        else:
            #Discharging
            bounds = Bounds(
                    [max(T)-40, min(T)-40 ,   -20,   0],         #LB
                    [max(T)     , min(T)    ,   120,   1]          #UB                    
                )

            #Since when discharging flows comes from the bottom of the tank
            par0 = [
                max(T),min(T), estimate_offset(T),0.5
            ]
        
        #Options
        options = {
            'xtol': 1e-10, 'gtol': 1e-10, 'barrier_tol': 1e-10, 'sparse_jacobian': None, 'maxiter': 3000, 'verbose': 0, 'finite_diff_rel_step': None, 'initial_constr_penalty': 1.0, 'initial_tr_radius': 1.0, 'initial_barrier_parameter': 0.1, 'initial_barrier_tolerance': 0.1, 'factorization_method': None, 'disp': False
        }
        
        #Do the regression - method: Trust Constraint of scipy
        res = minimize(
            objfunc,par0,method="trust-constr",bounds=bounds,options=options
        )

        params = []
        
        for p in res.x:  
            params.append(p)
    
    elif method =="shgo":
        #Partially initialise the model - left the "pars" variable to be iterated by the optimiser
        objfunc = functools.partial(
            mse,    #Lost function (L2)
            X,      #Discretisations
            T       #True temp
        )

        #Initial values
        T_max_init, T_min_init = estimate_top_bot_temp(T)
        offset_init = estimate_offset(T)
        
        if u_flow <0: 
            #Charging
            bounds = [
                (max(T)-40,max(T)),
                (min(T)-40,min(T)),
                (-20,120),
                (0,1)
            ]
            

        else:
            #Discharging
            bounds = [
                (max(T)-40,max(T)),
                (min(T)-40,min(T)),
                (-20,120),
                (0,1)
            ]
                
        #Do the regression - method: Trust Constraint of scipy
        res = optimize.shgo(
            objfunc,bounds=bounds
        )

        params = []
        
        for p in res.x:  
            params.append(p)

    elif method =="brute":
        #Partially initialise the model - left the "pars" variable to be iterated by the optimiser
        objfunc = functools.partial(
            mse,    #Lost function (L2)
            X,      #Discretisations
            T       #True temp
        )

        #Initial values
        T_max_init, T_min_init = estimate_top_bot_temp(T)
        offset_init = estimate_offset(T)
        
        if u_flow <0: 
            #Charging
            bounds = [
                (max(T)-40,max(T)+20),
                (min(T)-40,min(T)+20),
                (-20,120),
                (1e-3,1)
            ]
            

        else:
            #Discharging
            bounds = [
                (max(T)-40,max(T)+20),
                (min(T)-40,min(T)+20),
                (-20,120),
                (1e-3,1)
            ]
                
        #Do the regression - method: Trust Constraint of scipy
        res = optimize.brute(
            objfunc,bounds,full_output=True,finish=optimize.fmin,Ns=30,workers=-1
        )

        params = []
        
        for p in res[0]:  
            params.append(p)

    #Return the params of regression
    return params

if __name__ == '__main__':
    f = "./data/data.mat"
    data = Data(f)
    df = data.generate_data()
    print(df.head())

    
    fig,ax = plt.subplots()
    X = np.arange(1,101,1)

    for i in range(df.shape[0]):
        print(
            "Processing data no.%s from total %s data"%(i,df.shape[0])
        )

        Tp = []
        u_flow = df.u_flow.iloc[i]
        for j in range(1,101):
            v = df["T_s_%s"%(j)].iloc[i]
            Tp.append(v)
        
        ax.plot(
            X,Tp,label="Ground truth",c="black"
        )

        inputs = {
            "Temperatures":Tp,
            "u_flow":u_flow,
            "num_discretisation":100
        }

        df_temp = pd.DataFrame()
        df_temp["T"] = Tp
        df_temp["X"] = [xx for xx in range(1,101)]
        df_temp.to_csv(
            "./a/data.csv",index=...
        )

        sigmoid_par = fit(inputs,method="trust-constr")

        T_pred = sigmoid(X,sigmoid_par)
        ax.plot(
            X,T_pred,label="Sigmoid regression",c="Blue",ls="--"
        )
        ax.legend()
        
        ax.set_ylim(
            min(Tp)-10,max(Tp)+10
        )
        
        ax.set_xlim(
            1,101
        )

        ax.set_title(
            "Regression param:\nT_max: %.2f, T_min= %.2f, X_offset= %.1f, Slope= %.2f"%(
                sigmoid_par[0],sigmoid_par[1],sigmoid_par[2],sigmoid_par[3]
            )
        )

        plt.pause(0.1)
        ax.grid(True)
        ax.cla()
    
    plt.show()




        
            




