import DyMat
import numpy as np
import lib
import os
import csv
from itertools import izip
import time

now = time.time()

samplefn = '/home/philgun/Documents/codecodecode/codecodecode/surrogate-sCO2-2/samples.csv'
resfn = '/home/philgun/Documents/codecodecode/codecodecode/surrogate-sCO2-2/res/response.csv'
simdir = '/home/philgun/Documents/codecodecode/codecodecode/surrogate-sCO2-2/simulation'
mofile = 'sCO2PBCalculator'

f = open(samplefn,'w')
f.write('P_net_W,T_in_ref_blk_K,p_high_Pa,PR,T_cold_set_K,delta,load,T_HTF_in_K,T_amb_input_K\n')
f.close()

#Design param
varname = [
    'P_net',
    'T_in_ref_blk',
    'p_high',
    'PR',
    'T_cold_set',
    'delta',
    'load',
    'T_HTF_in',
    'T_amb_input',
]

UB = [1.5e8,1273.15,250e5,3,853.15,20]
LB = [1e7,1023.15,240e5,25/9.14,798.15,100]
assert(len(UB)==len(LB))

num_data = 750
num_data_operating = 8

iters = 1

#Generate simulation samples
lib.generate_samples(UB,LB,len(UB),num_data,num_data_operating,samplefn)

points = np.genfromtxt(samplefn,skip_header=1,delimiter=',')
os.chdir(simdir)

ETA_GROSS = []
ETA_Q = []

for i in range(points.shape[0]):
    os.system('cp /home/philgun/solartherm-particle/SolarTherm/Models/PowerBlocks/%s.mo .'%(mofile))
    cmd = 'st_simulate --np=0 --stop 1 --step 0.002 --integOrder 5 --tolerance 1e-06 --solver dassl --nls homotopy %s.mo '%(mofile)

    for j in range(len(varname)):
        cmd += '%s=%s '%(varname[j],round(points[i,j],2))

    print('################################################### ITERATION %s #########################################################'%(iters))
    
    print(cmd)

    #Run solartherm
    os.system(cmd)
    
    matfile ='%s_res_0.mat'%(mofile)
    data = DyMat.DyMatFile(matfile)

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

    os.system('rm -rf %s'%matfile)
    os.system('rm -rf *.c *.o *.h *.xml *.makefile')

    iters += 1


with open(resfn,'wb') as f:
    writer = csv.writer(f)
    writer.writerows(izip(ETA_GROSS,ETA_Q))

elapsed_time = time.time() - now
print(elapsed_time)

