import math
import pandas as pd
import os
from pyDOE import *
from sklearn.model_selection import StratifiedKFold
from sklearn.utils import shuffle
import numpy as np

constant = 42
np.random.seed(constant)

def expensive_model(data): #Shekel function
    
    m = 1
    bb = [5]
    b = []
    for bbb in bb:
        val = 0.1 * bbb
        b.append(val)

    C = [[5],[5]]    

    outer = 0
    for ii in range(m):
        bi = b[ii]
        inner = 0
        for jj in range(len(data)):
            xj = data[jj]
            Cji = C[jj][ii]
            inner = inner + (xj-Cji)**2
        
        outer = outer + 1/(inner+bi)

    z = -outer
    return z

def expensive_model2(data): #Shekel function
    x = data[0]
    y = data[1]

    z = -20 * math.exp(-0.2 * math.sqrt(0.5 * (x**2 + y**2))) - math.exp(0.5 * (math.cos(2*math.pi*x)+math.cos(2*math.pi*y))) + 20 + math.exp(1)
    return z

def generate_LHS(UB,LB,num_inputs,numdata=5):

    assert(len(UB)==len(LB))
    
    LHS = lhs(num_inputs,samples=numdata,criterion='maximin')
    for i in range(LHS.shape[0]):
        for j in range(LHS.shape[1]):
            val = LHS[i,j]
            ub = UB[j]
            lb = LB[j]
            real_val = val * (ub - lb) + lb
            LHS[i,j] = real_val
    return LHS

def generate_training_data_set(data,name):
    cwd = os.getcwd()
    if not os.path.exists(name):
        os.makedirs(name)

    os.chdir(name)
    i = 1
    fn = "%s_1.csv"%(name)
    while os.path.exists(fn):
        i+=1
        fn = "%s_%s.csv"%(name,i)

    f = open(fn,'w')
    f.close()
    
    for i in range(data.shape[0]):
        inputs = data[i]
        z = expensive_model2(inputs)
        a= ""
        for j in range(len(inputs)):
            a += "%s,"%(inputs[j])
        a += "%s\n"%(z)

        f = open(fn,'a')
        f.write(a)
        f.close()
    os.chdir(cwd)
    fn = '%s/%s'%(name,fn)
    return fn

def split_data_frame(df,K_subsets):
    #Make sure the splitting is applied in a random dataframe
    df = shuffle(df)
    df.reset_index(inplace=True,drop=True)
    length_df = df.shape[0]
    left = length_df%K_subsets
    length_subset = int(length_df/K_subsets)

    dfs = []
    for i in range(K_subsets):
        if i == K_subsets-1:
            dfsubset = df[i*length_subset:]
        else:
            dfsubset = df[i*length_subset : (i+1)*length_subset]
        dfs.append(dfsubset)
    
    return dfs
