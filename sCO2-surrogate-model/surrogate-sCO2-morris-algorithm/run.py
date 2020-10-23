import DyMat
import numpy as np
import lib
import os

resfn = 'data.csv'
f = open(resfn,'w')
f.write('P_net_W,T_in_ref_blk_K,p_high_Pa,PR,T_cold_set_K,T_high,load,T_HTF_in_K,T_amb_input_K,eta_gross,eta_Q\n')
f.close()

#Design param
varname = [
    'P_net',
    'T_in_ref_blk',
    'p_high',
    'PR',
    'T_cold_set',
    'T_high',
    'load',
    'T_HTF_in',
    'T_amb_input',
]

UB = [1.5e8,1273.15,250e5,3,853.15]
LB = [1e7,1023.15,240e5,25/9.14,798.15]

assert(len(UB)==len(LB))
num_data = 750
num_data_operating = 8

total_cases = num_data * num_data_operating
iters = 1

design_params_in = lib.generate_samples(UB,LB,len(UB),num_data)
assert(len(design_params_in)==num_data)

mofile = 'sCO2PBRig'
os.system('cp /home/philgun/solartherm-particle/examples/%s.mo .'%(mofile))

for ins in design_params_in:
    to_write_1 = []
    cmd_base = 'st_simulate --maxStep 0.02s --step 1s --stop 1s --start 0s --np=0 --tolerance 1e-06 %s.mo '%(mofile)
    for i in range(len(ins)):
        cmd_base += '%s=%s '%(varname[i],round(ins[i],2))
        to_write_1.append(round(ins[i],2))

    #Design param of turbine inlet temperature - T_ref_blk - 100 --> T_ref_blk - 20
    thigh = lib.generate_samples([ins[1]-20],[ins[1]-100],1,num_data_operating)
    for t_high in thigh:
        to_write_2 = []

        cmd_base_2 = cmd_base
        cmd_base_2 += '%s=%s '%(varname[5],round(t_high,2))

        to_write_2.append(t_high)

        #UB and LB for load, T_HTF_in, T_amb_input
        newUB = [1.05,ins[1],318.15]
        newLB = [0.5,ins[1]-15,263.15]
        operating_conditions_in = lib.generate_samples(newUB,newLB,len(newUB),num_data_operating)

        for operation in operating_conditions_in:
            to_write_3 = []

            cmd = cmd_base_2
            print('################################################### ITERATION %s #########################################################'%(iters))
            to_write_operation = []
            for j in range(len(operation)):
                cmd += '%s=%s '%(varname[len(UB)+1+j],round(operation[j],2))
                to_write_3.append(round(operation[j],2))
            
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

            #Write to CSV
            written = ''
            for a in to_write_1:
                written += '%s,'%(a)
            for a in to_write_2:
                written += '%s,'%(a)
            for a in to_write_3:
                written += '%s,'%(a)

            written += '%s,'%(eta_gross)
            written += '%s\n'%(eta_Q)
            print(written)
            f = open(resfn,'a')
            f.write(written)
            f.close()

            iters += 1
        





