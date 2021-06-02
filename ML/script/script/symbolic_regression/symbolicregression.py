#-*- coding: utf-8 -*-

constant=42
import pandas as pd
import numpy as np
np.seterr(all="ignore")

import warnings
warnings.filterwarnings('ignore')

import os
os.environ["PYTHONWARNINGS"] = "ignore"

from matplotlib import pyplot as plt
import seaborn as sns

from sklearn.preprocessing import MinMaxScaler, StandardScaler
from sklearn.model_selection import train_test_split
from sklearn.utils import resample
from sklearn.metrics import r2_score, mean_squared_error

from gplearn.genetic import SymbolicRegressor
from gplearn.functions import make_function
from matplotlib import pyplot as plt
from sympy import *

from joblib import dump, load
import timeit 

class Data(object):
    def __init__(self,f):
        self.df = pd.read_pickle(f)
    
    def generate_derivative(self):
        self.df["dhf_dt"] = self.df.delta_hf / self.df.dt
        self.df["dhp_dt"] = self.df.delta_hp / self.df.dt

    def downsample(self, plot):
        #Find the majority 
        n, bins, patches = plt.hist(self.df.dhf_dt, bins=30)
        LBS = []
        UBS = []
        
        for i,num in enumerate(n):
            if num > 1e6:
                lb_majority = bins[i]
                ub_majority = bins[i+1]
                LBS.append(lb_majority)
                UBS.append(ub_majority)
        
        #Divide the dataframe into two big classes - majority and minority
        dfs = []
        for i, lb_majority in enumerate(LBS):
            ub_majority = UBS[i]

            if len(dfs) == 0:
                df = self.df.copy()
            else:
                df = dfs[0].copy()

            df_majority = df[
                (df.dhf_dt > lb_majority)&    
                (df.dhf_dt <= ub_majority)
            ]

            df_minority = df[
                (df.dhf_dt < lb_majority)|    
                (df.dhf_dt > ub_majority)
            ]

            #Downsample the majority class using resample method from sklearn.utils
            df_majority_down_sampled = resample(
                df_majority,
                replace=False,
                n_samples=int(0.05e7),
                random_state=constant
            )

            #Append the df_majority_downsampled with df_minority
            self.df_downsampled = pd.concat(
                [df_majority_down_sampled, df_minority], 
                axis=0
            ).reset_index(drop=True)

            if len(dfs) == 0:
                dfs.append(self.df_downsampled)
            else:
                dfs[0] = self.df_downsampled
                
        #Plotting stuffs
        if plot==True:
            fig,ax = plt.subplots(1,2)
            sns.distplot(self.df["dhf_dt"],ax=ax[1],kde=False, hist=True)
            sns.distplot(self.df["dhp_dt"],ax=ax[0],kde=False, hist=True)
            fig.suptitle("Original Distribution")

            fig,ax = plt.subplots(1,2)
            sns.distplot(self.df_downsampled["dhp_dt"],ax=ax[0],kde=False, hist=True)
            sns.distplot(self.df_downsampled["dhf_dt"],ax=ax[1],kde=False, hist=True)
            fig.suptitle("Distribution of downsampled.\nOriginal data points: %s data, downsampled: %s data"%(self.df.shape[0], self.df_downsampled.shape[0]))

            plt.show()

        #Scaler of the state derivative
        self.mm_der = MinMaxScaler().fit(
            self.df_downsampled[["dhf_dt","dhp_dt"]].values
        )

        #Randomly shuffle the data before returned
        self.df_downsampled = self.df_downsampled.sample(frac=1).reset_index(drop=True)

def test_symbolic_regression(plotOnly=True):
    nsample = 4000
    sig = 0.2
    x = np.linspace(-50,50,nsample)
    X = np.column_stack(
        (
            x/5, 
            10*np.sin(x), 
            (x-5)**3, 
            np.ones(nsample)
        )
    )
    beta = [0.01, 1, 0.001, 5.]

    y_true = np.dot(X,beta)
    y = y_true + sig * np.random.normal(size=nsample)

    df = pd.DataFrame()
    df["x"] = x; df["y"] = y

    fig,ax = plt.subplots()
    ax.plot(df.x, df.y, c="k", ls="--",label="Truth")
    ax.set_title("Ground truth")
    
    X = df[["x"]]; y = df.y

    #Split into train test data
    X_train, X_test, y_train, y_test = train_test_split(
        X, y, test_size=0.3, random_state=constant
    )

    #Converter to print the function using sympy
    converter = {
        'sub': lambda x, y : x - y,
        'div': lambda x, y : x/y,
        'mul': lambda x, y : x*y,
        'add': lambda x, y : x + y,
        'neg': lambda x    : -x,
        'pow': lambda x, y : x**y,
        'sin': lambda x    : sin(x),
        'cos': lambda x    : cos(x),
        'inv': lambda x: 1/x,
        'sqrt': lambda x: x**0.5,
        'pow3': lambda x: x**3
    }

    if plotOnly == False:
        #Train the regressor
        function_set = [
            "add", "sub", "mul", "div", "cos", "sin", "neg", "inv"
        ]

        #Instantiate the symbolic regression
        SR = SymbolicRegressor(
            population_size=5000,
            function_set=function_set,
            generations=5,
            stopping_criteria=0.01,
            p_crossover=0.7,
            p_subtree_mutation=0.1,
            p_hoist_mutation=0.05,
            p_point_mutation=0.1,
            max_samples=0.9,
            verbose=1,
            parsimony_coefficient=0.001,
            random_state=0,
            feature_names=X_train.columns
        )
        
        #Fit vs. training data
        SR.fit(X_train, y_train)  

        dump(SR,"./SR_Test.bin")

    try:
        SR = load("./SR_Test.bin")
    except:
        raise IOError("./SR_Test.bin does not exist, train a model first")

    print(
        "R$^2$: %s"%(SR.score(X_test, y_test))
    )

    #Write the function expression
    func = sympify(
        (SR._program), locals=converter
    )
    print(func)

    with open("./test_print_formula.txt","w") as f:
        f.write(str(func))

    #Predict using trained SR
    y_pred = SR.predict(df.x.to_numpy().reshape(-1,1))

    #Overlay the plot
    ax.scatter(
        df.x, y_pred, label="SR"
    )
    ax.legend()
    plt.show()

def power_4(x):
    f = x**4
    return f

def power_3(x):
    f = x**3
    return f

def power_2(x):
    f = x * x
    return f

def power(x,y):
    f = x**y
    with warnings.catch_warnings():
        warnings.simplefilter("ignore")
    return f

if __name__ == '__main__':
    #test_symbolic_regression(plotOnly=False)

    if not os.path.exists("./df_final_dhpdt.pkl"):
        f = "./df_final_original.bin"
        data = Data(f)
        data.generate_derivative()
        
        data.downsample(plot=False)
        
        df = data.df_downsampled.copy()

        #Drop unnecessary columns
        df = df.drop(columns=["delta_hp","delta_hf","dt","target_hf","target_hp"])
        
        #Try predict dhp_dt first
        df = df.drop(columns="dhf_dt")
        df.to_pickle("./df_final_dhpdt.pkl")
    else:
        df = pd.read_pickle("./df_final_dhpdt.pkl")

    #Reduce the dataset
    fig,ax = plt.subplots(3)

    #Plot the original data set
    N, bins, patches = ax[0].hist(df.dhp_dt,bins=30)
    
    #Reduce the data set by iterating through the bins and reduce the data to mean frequency
    N_avg = int(np.mean(N))
    
    df_trimmed = df.copy()

    for i,n in enumerate(N):
        lb = bins[i]
        ub = bins[i+1]

        if n > N_avg:
            #Reduce the data
            df_over = df_trimmed[
                (df_trimmed.dhp_dt >= lb) &
                (df_trimmed.dhp_dt < ub)
            ]

            df_over = resample(
                df_over,
                replace=False,
                n_samples=int(N_avg),
                random_state=constant
            )

            df_rest = df_trimmed[
                (df_trimmed.dhp_dt < lb) |
                (df_trimmed.dhp_dt >= ub)
            ]

            df_trimmed = pd.concat(
                [df_over, df_rest], 
                axis=0
            ).reset_index(drop=True)

    ax[1].hist(df_trimmed.dhp_dt,bins=60)
    
    #Reduce the dataset by trimmed the df directly
    df_random_trimmed = resample(
        df, replace=False, n_samples = 300000, random_state=constant
    )

    #Plot
    ax[2].hist(df_random_trimmed.dhp_dt,bins=60)

    ax[0].set_title("Original %s data"%(df.shape[0]))
    ax[1].set_title("Trimmed %s data"%(df_trimmed.shape[0]))
    ax[2].set_title("Randomly trimmed %s data"%(df_random_trimmed.shape[0]))

    ax[2].set_xlabel("dhp/dt")
    
    #plt.show()
    df_random_trimmed.to_pickle("./df_random_trimmed.pkl")
    df_trimmed.to_pickle("./df_trimmed.pkl")

    #Choose which df to be regressed
    df = df_random_trimmed.copy()

    df = df.drop(columns=["rho", "dz", "U_bot", "U_wall", "eta", "mp", "T_amb","hf_plus","hf_minus"])

    feat_names = df.columns[0:df.shape[1]-1].tolist()

    #Scale the features
    X = df[
        df.columns[0:df.shape[1]-1]
    ].to_numpy()

    y = df[
        df.columns[-1]
    ].to_numpy().reshape(-1,1)

    X_train, X_test, y_train, y_test = train_test_split(
        X, y, test_size=0.3, random_state=constant
    )

    #Scale the X_train,y_train and X_test
    mmx = MinMaxScaler()
    X_train = mmx.fit_transform(X_train)
    X_test = mmx.fit_transform(X_test)

    mmy = MinMaxScaler()
    y_train = mmy.fit_transform(y_train)

    #Save the scalers
    dump(mmx,"./mmx.bin")
    dump(mmy,"./mmy.bin")    
    
    #Make custom function
    power = make_function(function=power, name="power", arity=2)
    power_2 = make_function(function=power_2, name="power_2", arity=1)
    power_3 = make_function(function=power_3, name="power_3", arity=1)
    power_4 = make_function(function=power_4, name="power_4", arity=1)
    
    #Form the function set
    function_set = [
        "add", "sub", "mul", "div", "inv", "sqrt",                  #Default-function
        power_2                                                     #Custom-function
    ]

    #Converter: from function to string (*args to sympify)
    converter = {
        'add': lambda x, y : x + y,
        'sub': lambda x, y : x - y,
        'mul': lambda x, y : x*y,
        'div': lambda x, y : x/y,
        'neg': lambda x    : -x,
        'inv': lambda x: 1/x,
        'sqrt': lambda x: x**0.5,
        'log': lambda x: log(x),
        'power_2': lambda x: x*x,
        'power_3': lambda x: x**3,
        'power_4': lambda x: x**4,
        'power': lambda x, y : x**y
    }

    #Instantiate the regressor
    if not os.path.exists("./TrainedRegressor.pkl"):
        SR = SymbolicRegressor(
            population_size=5000,
            generations=500,
            tournament_size=1000,
            const_range=(-1,1),
            init_method='full',
            init_depth=(6,10),
            function_set=function_set,
            metric="mse",
            stopping_criteria=1e-4,
            p_crossover=0.7, 
            p_subtree_mutation=0.1,
            p_hoist_mutation=0.05, 
            p_point_mutation=0.1,
            max_samples=0.9,
            verbose=1,
            feature_names=feat_names,
            parsimony_coefficient=1e-4,
            random_state=constant,
            n_jobs = 6
        )

        #Train
        tic = timeit.default_timer()

        SR.fit(
            X_train, y_train
        )
        toc = timeit.default_timer()
        
        print(
            "Training time: %s s"%(toc - tic)
        )

        #Dump the trained regressor
        dump(SR,"./TrainedRegressor.pkl")
    else:
        SR = load("./TrainedRegressor.pkl")

    #Print-out the regression formula
    formula = sympify(
        (SR._program), 
        locals=converter
    )

    #Print formula, R2 and save it as a txt
    print("Formula: ", formula)

    print('R$^2$:',SR.score(
        X_test,        #scaled X_test 
        mmy.transform(
                y_test #scaled y_test
            )
        )
    )

    with open("./formula.txt","w") as f:
        f.write(str(formula))

    #Predict the test data
    y_pred = SR.predict(X_test).reshape(-1,1)

    #Scale back y_pred
    y_pred = mmy.inverse_transform(y_pred)

    #Dump y_pred vs y_test
    df = pd.DataFrame()
    df["y_test"] = y_test[:,0]
    df["y_pred"] = y_pred[:,0]
    df.to_csv("./TestvsPred.csv",index=False)

    #Calculate G-O-F (R2 and RMSE)
    R2 = r2_score(y_pred, y_test)
    RMSE = mean_squared_error(y_pred, y_test,squared=False)

    #Plot
    fig,ax = plt.subplots()
    ax.scatter(y_test, y_pred)
    ax.set_xlabel("dhp/dt test [J/kg⋅s]")
    ax.set_ylabel("dhp/dt prediction [J/kg⋅s]")
    ax.set_title("R$^2$ = %s, RMSE = %s"%(R2, RMSE))
    plt.show()



    
    
    