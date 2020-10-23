from pyDOE import *
import numpy as np
import os
from DyMat import DyMatFile as D

def generate_lhs(UB,LB,num_inputs,numdata):
    LHS = lhs(num_inputs,samples=numdata,criterion='maximin')
    for i in range(LHS.shape[0]):
        for j in range(LHS.shape[1]):
            print(i,j)
            val = LHS[i,j]
            ub = UB[j]
            lb = LB[j]
            real_val = val * (ub - lb) + lb
            LHS[i,j] = real_val
    return LHS

def delta20_400(x):
    y = 1.3 * x - 297
    return y

def delta20_325(x):
    y = 1.2 * x - 240
    return y

def delta20_275(x):
    y = 1.2 * x -220
    return y

def delta25_400(x):
    y = 1.16 * x - 247
    return y

def delta25_325(x):
    y = 1.16 * x - 227
    return y

def delta25_275(x):
    y = 1.16* x -222
    return y

def interp2D(p_high,PR,dT_particle):
    if PR >=2.75 and PR <= 3.25:
        #20MPa
        y20 = delta20_275(dT_particle) + (PR-2.75)/(3.25-2.75) * (delta20_325(dT_particle)-delta20_275(dT_particle))
        #25MPa
        y25 = delta25_275(dT_particle) + (PR-2.75)/(3.25-2.75) * (delta25_325(dT_particle)-delta25_275(dT_particle))
    else:
        #20MPa
        y20 = delta20_325(dT_particle) + (PR-3.25)/(4-3.25) * (delta20_400(dT_particle)-delta20_325(dT_particle))
        #25MPa
        y25 = delta25_325(dT_particle) + (PR-3.25)/(4-3.25) * (delta25_400(dT_particle)-delta25_325(dT_particle))   
    y = y20 + (p_high-20e6)/(25e6-20e6) * (y25-y20) + 25
    print(y25,y20,y)
    return y

def limitdelta(list_vars):
    T_in_particle_des = list_vars[0]
    p_high = list_vars[1]
    PR = list_vars[2]
    dT_particle = list_vars[3]
    low_limit_delta = interp2D(p_high,PR,dT_particle)
    return low_limit_delta



if __name__ == "__main__":
    varname = [
    'T_in_ref_blk',
    'p_high',
    'PR',
    'dTemp_HTF_PHX',
    'delta'
]
    UB_T_in_ref_blk = 1200 + 273.15
    LB_T_in_ref_blk = 800 + 273.15

    UB = [
        UB_T_in_ref_blk,
        25e6,
        3.25,
        350,
        ]
    
    LB = [
        LB_T_in_ref_blk,
        20e6,
        2.75,
        250,
        ]

    LHS = generate_lhs(UB,LB,len(UB),10)
    os.chdir('./test_run')
    os.system('cp /home/philgun/solartherm-particle/SolarTherm/Models/PowerBlocks/sCO2PBCalculator.mo .')
    limdel = []
    for lhs in LHS:
        limdelta = limitdelta(lhs)
        limdel.append(limdelta)
    
    f = open('samples.csv','w')
    f.write('T_in_ref_blk,p_high,PR,dTemp_HTF_PHX,delta\n')
    f.close()
    for i in range(LHS.shape[0]):
        write=''
        for j in range(LHS.shape[1]):
            write+='%s,'%(LHS[i,j])
        write+='%s\n'%(limdel[i])
        f = open('samples.csv','a')
        f.write(write)
        f.close()
    
    inputs = np.genfromtxt('./samples.csv',skip_header=1,delimiter=',')
    print(inputs)
    cmd = 'st_simulate --step 0.002 --stop 1 --tolerance 1e-06 --np 0 --nls homotopy --solver dassl sCO2PBCalculator.mo '
    ETA_GROSS=[]
    ETA_Q=[]
    for i in range(inputs.shape[0]):
        for j in range(inputs.shape[1]):
            cmd+='%s=%s '%(varname[j],inputs[i,j])
        os.system(cmd)

        data = D('sCO2PBCalculator_res_0.mat')
        
        #Get the data
        eta_gross_array = data.data('eta_gross')
        eta_Q_array = data.data('eta_Q')

        #If data exists:
        if len(eta_gross_array)>0:
            eta_gross = eta_gross_array[0]
        else:
            eta_gross = -1000

        if len(eta_Q_array)>0:
            eta_Q = eta_Q_array[0]
        else:
            eta_Q = -1000

        ETA_GROSS.append(eta_gross)
        ETA_Q.append(eta_Q)

import csv
from itertools import izip
with open('./response.csv','wb') as f:
    writer = csv.writer(f)
    writer.writerows(izip(ETA_GROSS,ETA_Q))



        
    
