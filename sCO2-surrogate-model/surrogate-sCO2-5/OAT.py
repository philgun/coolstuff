import DyMat
import numpy as np
import lib
import os
import csv
from itertools import izip
import time
from random import randint

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

P_net_list = np.arange(20e6,220e6,40e6)
def_value_des_param = [
    1073.15,
    250e5,
    2.76,
    15,
    250
]

def_value_opt_param = [
    1,
    1073.15,
    39+273.15
]

T_hot_set_list = np.linspace(1023.15,1300.15,num=10)
p_high_list = np.linspace(200e5,250e5,num=10)
PR_list = np.linspace(2.7,4,num=10)
pinch_list = np.linspace(15,30,num=10)
dTemp_list = np.linspace(100,300,num=10)

OAT_list = [
    T_hot_set_list,
    p_high_list,
    PR_list,
    pinch_list,
    dTemp_list
    ]

os.chdir(simdir)

#Saveresult
headers = [
    'P_net',
    'T_in_ref_blk',
    'p_high',
    'PR',
    'pinch_PHX',
    'dTemp_HTF_PHX',
    'load',
    'T_HTF_in',
    'T_amb_input',
    'eta_gross',
    'eta_Q',
]

fnres = 'res_OAT.csv'

f = open(fnres,'w')
head = ''
for header in headers:
    head+='%s,'%(header)
head+='\n'
f.write(head)
f.close()

counts = 0
for P_net in P_net_list:
    #Copy the mofile from SolarTherm repository to the working dir
    os.system('cp /home/philgun/solartherm-particle/SolarTherm/Models/PowerBlocks/%s.mo .'%(mofile))
    lib.hackmofile(mofile,'./',round(P_net,2))

    #Design Param OAT
    for i in range(len(OAT_list)):
        cmd = 'st_simulate --np=0 --stop 1 --step 0.002 --integOrder 5 --tolerance 1e-06 --solver dassl --nls homotopy %s.mo P_net=%s '%(mofile,P_net)

        opt_param = []

        for j in range(len(def_value_des_param)):
            if j != i:
                opt_param.append(def_value_des_param[j])
                cmd += '%s=%s '%(varname[j],def_value_des_param[j])
        
        listval =  OAT_list[i]

        for k in range(len(listval)):

            val = listval[k]

            if i==0:
                T_hot_set = val
            else:
                T_hot_set = def_value_des_param[0]

            cmdreal = cmd
            cmdreal += '%s=%s '%(varname[i],val)

            #insert the operational parameter
            cmdreal += 'load=1 T_HTF_in=%s T_amb_input=312.15 '%(T_hot_set)
            
            print(cmdreal)
            print('\n')

            os.system(cmdreal)

            modelicavarname = [             
                'P_net',
                'T_in_ref_blk',
                'p_high',
                'PR',
                'pinch_PHX',
                'dTemp_HTF_PHX',
                'load',
                'T_HTF_in',
                'T_amb_input',
                'eta_gross',
                'eta_Q'
            ]

            data = DyMat.DyMatFile('%s_res_0.mat'%(mofile))

            #check convergence of the simulation
            eta_array = data.data('eta_gross')
            written = ''

            if len(eta_array)>0:
                for name in modelicavarname:
                    val = data.data(name)[-1]
                    written+='%s,'%(val)
            else:
                for name in modelicavarname:
                    written+='%s,'%(0)

            written+='\n'

            f = open(fnres,'a')
            f.write(written)
            f.close()
    
#Operational Param OAT
points = np.genfromtxt(fnres,delimiter=',',skip_header=1)
print(points)
lenpoints = points.shape[0]

modelicavarname = [             
                'P_net',
                'T_in_ref_blk',
                'p_high',
                'PR',
                'pinch_PHX',
                'dTemp_HTF_PHX',
                'load',
                'T_HTF_in',
                'T_amb_input',
                'eta_gross',
                'eta_Q'
]

randomlist = []

for _ in range(5):
    vals = randint(0,lenpoints-1)
    randomlist.append(vals)

load_list = np.linspace(0.5,1.05,num=5)
T_amb_input_list = np.linspace(265,325,num=5)


for index in randomlist:
    #hack the mofile
    desparam = points[index,0:6]
    P_net = desparam[0]
    T_hot_set = desparam[1]
    os.system('cp /home/philgun/solartherm-particle/SolarTherm/Models/PowerBlocks/%s.mo .'%(mofile))
    lib.hackmofile(mofile,'./',round(P_net,2))

    cmdbase = 'st_simulate --np=0 --stop 1 --step 0.002 --integOrder 5 --tolerance 1e-06 --solver dassl --nls homotopy %s.mo P_net=%s '%(mofile,P_net)

    for i in range(1,6):
        cmdbase += '%s=%s '%(modelicavarname[i],desparam[i])
    
    T_HTF_in_list = np.linspace(T_hot_set-20,T_hot_set,5)


    #Off design performance is using full factorial
    for load in load_list:
        for T_HTF_in in T_HTF_in_list:
            for T_amb_input in T_amb_input_list:
                cmdreal = cmdbase
                
                cmdreal += 'load=%s T_HTF_in=%s T_amb_input=%s'%(load,T_HTF_in,T_amb_input)

                os.system(cmdreal)

                data = DyMat.DyMatFile('%s_res_0.mat'%(mofile))

                #check convergence of the simulation
                eta_array = data.data('eta_gross')
                written = ''

                if len(eta_array)>0:
                    for name in modelicavarname:
                        val = data.data(name)[-1]
                        written+='%s,'%(val)
                else:
                    for name in modelicavarname:
                        written+='%s,'%(0)

                written+='\n'

                f = open(fnres,'a')
                f.write(written)
                f.close()



    '''
    OAT_list = [
        load_list,
        T_HTF_in_list,
        T_amb_input_list
    ]

    

    for j in range(len(OAT_list)):
        listval = OAT_list[j]

        cmdintermediate = cmdbase
        #Insert default param
        for k in range(len(def_value_opt_param)):
            if k != j:
                cmdintermediate += '%s=%s '%(modelicavarname[k+6],def_value_opt_param[k])
        
        for l in range(len(listval)):
            val = listval[l]
            cmdreal = cmdintermediate

            cmdreal += '%s=%s '%(modelicavarname[j+6],val)

            print(cmdreal)
    '''

            



    

    
      
            

        
'''
for val in
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
'''
