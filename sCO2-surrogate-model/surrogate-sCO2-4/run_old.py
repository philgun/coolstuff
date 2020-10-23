import DyMat
import numpy as np
import lib
import os
import csv
from itertools import izip
import time

now = time.time()
simdir = '/home/philgun/Documents/codecodecode/codecodecode/surrogate-sCO2-4/simulation'
mofile = 'sCO2PBCalculator'


#Design param
varname = [
    'T_in_ref_blk',
    'p_high',
    'PR',
    'delta',
    'dTemp_particle_PHX',
    'load',
    'T_HTF_in',
    'T_amb_input'
]


resultname = [
    'eta_gross',
    'eta_cycle',
    'UA_HTR',
    'UA_LTR',
    'UA_HX',
    'W_turb_des',
    'W_comp_des',
    'W_recomp_des',
    'UA_cooler',
    'Q_HX_des',
    'delta_temp_particle_HX',
    'C_PB'
]

P_net_list = [10e6,50e6,100e6]

UB = [
    1473.15,
    250e5,
    4,
    120,
    30
    ]

LB = [
    1023.15,
    240e5,
    2.75,
    30,
    10
    ]

assert(len(UB)==len(LB))

os.chdir(simdir)

fnres = 'res_new_model.csv'
header = 'P_net,'
for var in varname:
    header+='%s,'%(var)
header+='pinch_PHX,'
for var in resultname:
    header+='%s,'%(var)
header+='\n'

f = open(fnres,'w')
f.write(header)
f.close()

points = np.genfromtxt(
    '/home/philgun/Documents/codecodecode/codecodecode/surrogate-sCO2-4/res/res_old_model.csv',
    skip_header=1,
    delimiter=','
    )

for i in range(points.shape[0]):
    varname = ['T_in_ref_blk','p_high','PR','delta','dTemp_HTF_PHX','load','T_HTF_in','T_amb_input']
    P_net = points[i,0]
    os.system('cp /home/philgun/solartherm-particle/SolarTherm/Models/PowerBlocks/%s.mo .'%(mofile))
    lib.hackmofile(mofile,'./',round(P_net,2))

    not_good = True
    
    while not_good:
        cmd = 'st_simulate --np=0 --stop 1 --step 0.002 --integOrder 5 --tolerance 1e-06 --solver dassl --nls homotopy %s.mo '%(mofile)

        printing = []
        printing.append(round(P_net,2))
        
        for j in range(len(varname)):
            cmd += '%s=%s '%(varname[j],points[i,j+1])
            printing.append(points[i,j+1])

        print('################################################### ITERATION %s #########################################################'%(i+1))
        
        print(cmd)
        with open('cmd.txt','w') as a:
            a.write(cmd)
            a.close()
        a = open('cmd.txt','a')
        a.write('\n%s P_net=%s'%(i+1,P_net))
        a.close()
        #Run solartherm
        os.system(cmd)
        
        matfile ='%s_res_0.mat'%(mofile)
        data = DyMat.DyMatFile(matfile)

        #Get the data
        eta_gross_array = data.data('eta_gross')
        eta_Q_array = data.data('eta_Q')  
    
        T_CO2_in = data.data('powerBlock.exchanger.T_CO2_des[1]')[0]
        T_HTF_out = data.data('powerBlock.exchanger.T_HTF_des[1]')[0]
        delta_Temp = T_HTF_out - T_CO2_in

        #If data exists:
        if len(eta_gross_array)>0:
            if delta_Temp > 0:
                print("MODEL CONVERGE, NO TEMPERATURE CROSSING IN PHX, ALL GOOD! CROSSING: %s"%(delta_Temp))
                eta_gross = eta_gross_array[0]
                eta_Q = eta_Q_array[0]
                eta_cycle = data.data('powerBlock.eta_cycle')[0]
                ua_htr = data.data('powerBlock.HTR.UA_HTR')[0]
                ua_ltr = data.data('powerBlock.LTR.UA_HTR')[0]
                phx_ua = data.data('powerBlock.exchanger.UA_HX')[0]
                w_turb_des = data.data('powerBlock.turbine.W_turb_des')[0]*-1
                w_comp_des = data.data('powerBlock.mainCompressor.W_comp_des')[0]
                w_recomp_des = data.data('powerBlock.reCompressor.W_comp_des')[0]
                ua_cooler = data.data('powerBlock.cooler.UA_cooler')[0]
                q_hx_des = data.data('powerBlock.Q_HX_des')[0]
                dtemp_htf_phx = data.data('powerBlock.exchanger.T_HTF_des[15]')[0] - data.data('powerBlock.exchanger.T_HTF_des[1]')[0]
                pb_cost = data.data('powerBlock.C_PB')[0]
                not_good = False

            else:
                eta_gross = -1
                eta_Q = -1
                eta_cycle = 0
                ua_htr = 0
                ua_ltr = 0
                phx_ua = 0
                w_turb_des = 0
                w_comp_des = 0
                w_recomp_des = 0
                ua_cooler = 0
                q_hx_des = 0
                dtemp_htf_phx = data.data('powerBlock.exchanger.T_HTF_des[15]')[0] - data.data('powerBlock.exchanger.T_HTF_des[1]')[0]
                not_good = True
                print("MODEL CONVERGE BUT TEMPERATURE IS CROSSING IN PHX! NOT GOOD! CROSSING: %s, T PARTICLE IN - TIT: %s"%(delta_Temp,points[i,4]))
                pb_cost = data.data('powerBlock.C_PB')[0]
                points[i,4] =  points[i,4] + (10-delta_Temp+2)

        else:
            print("MODEL DOESN'T CONVERGE! NOT GOOD! CROSSING:%s, T PARTICLE IN - TIT:%s"%(delta_Temp,points[i,4]))
            eta_gross = -1
            eta_Q = -1
            ua_htr = 0
            ua_ltr = 0
            phx_ua = 0
            w_turb_des = 0
            w_comp_des = 0
            w_recomp_des = 0
            ua_cooler = 0
            q_hx_des = 0
            dtemp_htf_phx = data.data('powerBlock.exchanger.T_HTF_des[15]')[0] - data.data('powerBlock.exchanger.T_HTF_des[1]')[0]
            pb_cost = data.data('powerBlock.C_PB')[0]
            not_good = True
            if delta_Temp < 0:
                points[i,4] =  points[i,4] + (10 - delta_Temp + 2)
            else:
                points[i,4] =  points[i,4] + 10



        printing.append(delta_Temp)
        printing.append(eta_gross)
        printing.append(eta_Q)
        printing.append(eta_cycle)
        printing.append(w_turb_des)
        printing.append(w_comp_des)
        printing.append(w_recomp_des)
        printing.append(ua_htr)
        printing.append(ua_ltr)
        printing.append(phx_ua)
        printing.append(ua_cooler)
        printing.append(q_hx_des)
        printing.append(pb_cost)

        w = ''
        for lll in printing:
            w+='%s,'%(str(lll))
        w+='\n'  

        a = open(fnres,'a')
        a.write(w)
        a.close()

elapsed_time = time.time() - now
print("TOTAL SIMULATION TIME: %s"%(elapsed_time))