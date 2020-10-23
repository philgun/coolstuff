import DyMat
import numpy as np
import lib
import os
import csv
from itertools import izip
import time

now = time.time()

samplefn = '/home/philgun/Documents/codecodecode/codecodecode/sCO2-surrogate-model/surrogate-sCO2-5/samples.csv'
resfn = '/home/philgun/Documents/codecodecode/codecodecode/sCO2-surrogate-model/surrogate-sCO2-5/res/response.csv'
simdir = '/home/philgun/Documents/codecodecode/codecodecode/sCO2-surrogate-model/surrogate-sCO2-5/simulation'
mofile = 'sCO2PBCalculator_Using_JPidea'

f = open(samplefn,'w')
f.write('T_in_ref_blk_K,p_high_Pa,PR,delta,pinch_PHX\n')
f.close()

#Design param
varname = [
    'T_in_ref_blk',
    'p_high',
    'PR',
    'pinch_PHX',
    'dTemp_HTF_PHX',
    'load',
    'T_HTF_in',
    'T_amb_input'
]

P_net_list = np.arange(20e6,220e6,20e6)

UB = [
    1300.15,
    255e5,
    4,
    30,
    300
    ]

LB = [
    1023.15,
    200e5,
    2.7,
    14.9,
    100
    ]

assert(len(UB)==len(LB))

num_data = 45
num_data_operating = 20

iters = 1

#Generate simulation samples
lib.generate_samples(UB,LB,len(UB),num_data,num_data_operating,samplefn)

points = np.genfromtxt(samplefn,skip_header=1,delimiter=',')

os.chdir(simdir)

#Saveresult
headers = [
    'P_net',
    'T_in_ref_blk',
    'p_high',
    'PR',
    'Pinch_PHX',
    'dTemp_HTF_PHX',
    'load',
    'T_HTF_in',
    'T_amb_input',
    'eta_gross',
    'eta_Q',
    'UA_HTR',
    'UA_LTR',
    'UA_PHX',
    'UA_cooler',
    'W_turb_des',
    'W_comp_des',
    'W_recomp_des',
    'Q_HX_des',
    'C_PB',
    'eta_cycle_des'
]

fnres = 'res.csv'

f = open(fnres,'w')
head = ''
for header in headers:
    head+='%s,'%(header)
head+='\n'

f.write(head)

f.close()

for P_net in P_net_list:
    os.system('cp /home/philgun/solartherm-particle/SolarTherm/Models/PowerBlocks/%s.mo .'%(mofile))
    lib.hackmofile(mofile,'./',round(P_net,2))
    for i in range(points.shape[0]):

        not_good = True
        
        while not_good:
            cmd = 'st_simulate --np=0 --stop 1 --step 0.002 --integOrder 5 --tolerance 1e-06 --solver dassl --nls homotopy %s.mo '%(mofile)

            printing = []
            printing.append(round(P_net,2))
            
            for j in range(len(varname)):
                cmd += '%s=%s '%(varname[j],round(points[i,j],2))
                printing.append(points[i,j])

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
                    eta_gross = eta_gross_array[-1]
                    eta_Q = eta_Q_array[-1]
                    eta_cycle_des = data.data('powerBlock.eta_cycle_design')[0]
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
                    eta_cycle_des = -1
                    ua_htr = -1
                    ua_ltr = -1
                    phx_ua = -1
                    w_turb_des =  -1
                    w_comp_des =  -1
                    w_recomp_des =  -1
                    ua_cooler =  -1
                    q_hx_des =  -1
                    dtemp_htf_phx =  -1
                    not_good = True
                    print("MODEL CONVERGE BUT TEMPERATURE IS CROSSING IN PHX! NOT GOOD! CROSSING: %s, T PARTICLE IN - TIT: %s"%(delta_Temp,points[i,3]))
                    pb_cost =  -1
                    points[i,3] =  points[i,3] + (15 - delta_Temp + 2)

            else:
                print("MODEL DOESN'T CONVERGE! NOT GOOD! CROSSING:%s, T PARTICLE IN - TIT:%s"%(delta_Temp,points[i,3]))
                eta_gross = -1
                eta_Q = -1
                eta_cycle_des =  -1
                ua_htr =  -1
                ua_ltr =  -1
                phx_ua =  -1
                w_turb_des =  -1
                w_comp_des =  -1
                w_recomp_des =  -1
                ua_cooler =  -1
                q_hx_des =  -1
                dtemp_htf_phx =  -1
                pb_cost =  -1
                not_good = True
                if delta_Temp < 0:
                    points[i,3] =  points[i,3] + (15 - delta_Temp + 2)
                else:
                    points[i,3] =  points[i,3] + 15



            printing.append(eta_gross)
            printing.append(eta_Q)

            printing.append(ua_htr)
            printing.append(ua_ltr)
            printing.append(phx_ua)
            printing.append(ua_cooler)

            printing.append(w_turb_des)
            printing.append(w_comp_des)
            printing.append(w_recomp_des)
            printing.append(q_hx_des)

            printing.append(pb_cost)
            printing.append(eta_cycle_des)
            
            w = ''
            for lll in printing:
                w+='%s,'%(str(lll))
            w+='\n'  

            a = open(fnres,'a')
            a.write(w)
            a.close()

elapsed_time = time.time() - now
print("TOTAL SIMULATION TIME: %s"%(elapsed_time))
