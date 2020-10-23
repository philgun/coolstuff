import numpy as np
import random
import os
import DyMat
import csv

#Num Independent vars
vars = 6
num_interval = 8
jump_level = int(0.5 * num_interval + 1)

#How many runs?
howmany = 10

#Interval
idx = np.linspace(0,1,num_interval+1)

#UB-LB
varname = [
    'P_net',
    'T_in_ref_blk',
    'p_high',
    'PR',
    'T_cold_set',
    'delta'
]

UB = [1.5e8,1273.15,250e5,3,853.15,20]
LB = [1e7,1023.15,240e5,25/9.14,798.15,100]

#Mofile
mofile = "sCO2PBRig"

#Copy mofile
os.chdir("./simulation")
os.system('cp /home/philgun/solartherm-particle/examples/%s.mo .'%(mofile))

#Objectivefunction
objfunc = [
    'powerBlock.eta_cycle_design'
]

fnres = "/home/philgun/Documents/codecodecode/codecodecode/surrogate-sCO2-morris-algorithm/res/out.csv"
f = open(fnres,'w')
f.close()

#Elementary effects
EE_master = [] 

iterator = 0

#Do the morris algorithm for 'howmany' number of tmime
while iterator < howmany:
    print("SIMULATION NUMBER: %s FROM TOTAL %s SIMULATED"%(iterator+1,howmany))

    #Get the index for each run
    baseinputs = []
    path = []
    for i in range(vars):
        l = random.randint(0,num_interval)
        path.append(l)

    #Get the Real input values
    for i in range(vars):
        ub,lb = UB[i],LB[i]
        uni_index = idx[path[i]]
        value = uni_index * (ub-lb) + lb
        baseinputs.append(value)

    #Run Modelica
    cmd_base = 'st_simulate --maxStep 0.02s --step 1s --stop 1s --start 0s --np=0 --tolerance 1e-06 %s.mo '%(mofile)
    for j in range(len(varname)):
        cmd_base += "%s=%s "%(varname[j],baseinputs[j])
    print(cmd_base)
    os.system(cmd_base)

    #Get the objective function values
    matfile = mofile+"_res_0.mat"
    data = DyMat.DyMatFile(matfile)
    array = data.data(objfunc[0])
    base_objective_function = []

    ElementaryEffects = []
        
    if len(array)>0:
        for lll in range(len(objfunc)):
            base_objective_function.append(data.data(objfunc[lll])[-1])
            #base_objective_function.append(data.data(objfunc[1])[-1])

        os.system("rm -rf %s"%(matfile))

        #Incorporates the jump!
        for i in range(vars):
            investigated_index = path[i]

            #Check if we should substract or add the jump to the investigated index
            if investigated_index + jump_level > num_interval:
                new_index = investigated_index - jump_level
            elif investigated_index - jump_level < 0:
                new_index = investigated_index + jump_level
            else:
                new_index = investigated_index + jump_level
            
            #Construct a newpath that has incorporated the jump_level
            newpath = []
            for j in range(len(path)):
                if j==i:
                    newpath.append(new_index)
                else:
                    newpath.append(path[j])
            
            #Get the new Real inputs that based on the new path
            newinputs = []
            for j in range(len(newpath)):
                ub,lb = UB[j],LB[j]
                uni_index = idx[newpath[j]]
                value = uni_index * (ub-lb) + lb
                newinputs.append(value)
            
            #Run Modelica with new inputs
            cmd_base = 'st_simulate --maxStep 0.02s --step 1s --stop 1s --start 0s --np=0 --tolerance 1e-06 %s.mo '%(mofile)
            for j in range(len(varname)):
                cmd_base += "%s=%s "%(varname[j],newinputs[j])
            print(cmd_base)
            os.system(cmd_base)

            #Calculate the EE
            new_func = []
            deltas = []

            for l in range(len(objfunc)):
            #Get the new obj function
                data = DyMat.DyMatFile(matfile)
                array = data.data(objfunc[l])
                if len(array) > 0:
                    new_objective_function = array[-1]
                    new_func.append(new_objective_function)

                    deltaObjFunc = new_objective_function - base_objective_function[l]
                    deltas.append(deltaObjFunc)

                    delta = abs(newinputs[i] - baseinputs[i]) / (UB[i]-LB[i])

                    elementaryeffect = deltaObjFunc / delta
                    ElementaryEffects.append(elementaryeffect)
                else:
                    break
            
            os.system("rm -rf %s"%(matfile))
            print("BASE INPUTS:",baseinputs,'BASEPATH:',path)
            print("NEW INPUTS:",newinputs,'NEWPATH:',newpath)
            print("BASE OBJ FUNCTION: ",base_objective_function, "NEW OBJ. FUNCTION: ",new_func)
            print("DELTA: ",deltas,"ELEMENTARY EFFECT: ",ElementaryEffects)
            print("\n\n\n")

        if len(ElementaryEffects)>0:
            EE_master.append(ElementaryEffects)
        print(EE_master)
        iterator += 1

a = np.array(EE_master)
np.savetxt(
    "/home/philgun/Documents/codecodecode/codecodecode/surrogate-sCO2-morris-algorithm/res/out.csv",
    a,
    delimiter=',')

