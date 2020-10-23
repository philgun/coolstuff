from pyDOE import *
import numpy as np
import os

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

def generate_samples(UB,LB,num_inputs,numdata,num_data_operating,resfn='/home/philgun/Documents/PhD/Modelica/validation-surrogate/sCO2-PB/Simon-PB/expensive/data.csv'):
    f = open(resfn,'w')
    f.write('P_net,T_in_ref_blk,p_high,PR,dTemp_HTF_PHX,delta,load,T_HTF_in,T_amb_input\n')
    f.close()

    design_params_in = lhs(num_inputs,samples=numdata,criterion='maximin')
    for i in range(design_params_in.shape[0]):
        for j in range(design_params_in.shape[1]):
            val = design_params_in[i,j]
            ub = UB[j]
            lb = LB[j]
            real_val = val * (ub - lb) + lb
            design_params_in[i,j] = real_val
            
    for ins in design_params_in:
        to_write_1 = []
        for i in range(len(ins)):
            to_write_1.append(round(ins[i],2))

        thigh = ins[0]

        #UB and LB for load, T_HTF_in, T_amb_input - Operation param
        newUB = [1.05,thigh,318.15]
        newLB = [0.5,thigh-20,263.15]
        operating_conditions_in = generate_lhs(newUB,newLB,len(newUB),num_data_operating)

        for operation in operating_conditions_in:
            to_write_3 = []
            for j in range(len(operation)):
                to_write_3.append(round(operation[j],2))
            
            #Write to CSV
            written = ''
            for a in to_write_1:
                written += '%s,'%(a)

            for j in range(len(to_write_3)):
                a = to_write_3[j]
                if j == len(to_write_3)-1:
                    written += '%s\n'%(a)
                else:
                    written += '%s,'%(a)

            print(written)
            f = open(resfn,'a')
            f.write(written)
            f.close()

def hackmofile(mofile,modir,P_net,line_number=25):
    fnmo = '%s%s.mo'%(modir,mofile)
    fnres = '%s_hacked.mo'%(mofile)

    g = open(fnres,'w')
    g.close()

    f = open(fnmo,'r')
    i=0
    for line in f:
        print(i,line)
        if i == line_number:
            line = '  parameter SI.Power P_net = %s;\n'%(str(P_net))
        g = open(fnres,'a')
        g.write(line)
        g.close()
        i+=1

    print('./%s'%(fnres))
    print('./%s.mo'%(mofile))
    f.close()
    os.rename('./%s'%(fnres),'./%s.mo'%(mofile))
