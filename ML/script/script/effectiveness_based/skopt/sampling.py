# -*- coding: utf-8 -*-
from solartherm import simulation
from DyMat import DyMatFile as D
import shutil
import os
import time
from pyDOE import *
import pandas as pd
import numpy as np
import unittest

def generateLHS(UB,LB,numdata,criterion='maximin'):
    try:
        assert(
            len(UB)==len(LB)
        )
    except:
        raise ValueError("Length UB and LB are not the same\n")

    LHS = lhs(
        len(UB),samples=numdata,criterion=criterion
    )
    for j in range(LHS.shape[1]):
        LHS[:,j] = LHS[:,j] * (UB[j]-LB[j]) + LB[j]
    return LHS

class SimulationWrapper(object):
    def __init__(self,moname,modir,simdir):
        self.moname = moname
        self.simdir = simdir
        self.modir = modir
        fnmo = "%s/%s.mo"%(self.modir,self.moname)
        shutil.copy(fnmo,self.simdir)
        os.chdir(self.simdir)
        self.sim = simulation.Simulator(
            "%s.mo"%(self.moname),suffix="0"
        )
        self.sim.compile_model()
        self.sim.compile_sim()
    
    def varname(self,L):
        self.modelicaVarName = L

    def gen_LHS(self,UB,LB,numdata):
        LHS = generateLHS(UB,LB,numdata)
    
    def simulate(self,val,start="0",stop="1",step="1",maxStep="1"):
        self.par_n = []
        self.val = val

        for n in self.modelicaVarName:
            self.par_n.append(n)

        self.par_v = []
        for v in val:
            self.par_v.append(str(v))

        print(self.par_n)
        print(self.par_v)
        
        #Updating parameters
        self.sim.load_init()
        self.sim.update_pars(self.par_n,self.par_v)

        #Start simulation
        self.sim.simulate(
            start=start,
            stop=stop,
            step=step,
            maxStep=maxStep,
            tolerance="1e-06",
            integOrder="5",
            solver="dassl",
            nls="homotopy"
        )

    def check_parsing(self):
        t_discharge = self.data.data("t_discharge")[0]
        t_charge = self.data.data('t_charge')[0]
        T_amb = self.data.data("T_amb_design")[0]
        T_recv_sampling = self.data.data("T_recv_sampling")[0]
        T_PB_sampling = self.data.data("T_PB_sampling")[0]


        assert all([a == b for a, b in zip([T_amb,t_discharge,t_charge,T_recv_sampling,T_PB_sampling], self.val)])

    def get_data(self):
        self.fmat = "./%s_res_0.mat"%(self.moname)
        self.data = D(self.fmat)

        epsilon = self.data.data("epsilon_stg")
        mdot = self.data.data("thermocline_Tank.Tank_A.m_flow")
        lv = self.data.data("tank_level")
        h_in = self.data.data("thermocline_Tank.Tank_A.h_in")
        T_p_rep = self.data.data("T_p_rep")
        time = self.data.abscissa("epsilon_stg",valuesOnly=True)
        T_amb = self.data.data("thermocline_Tank.Tank_A.T_amb")
        h_in = self.data.data("thermocline_Tank.Tank_A.h_in")

        if len(T_amb) != len(time):
            T_amb = [T_amb[0]] * len(time)
        
        self.df = pd.DataFrame(
            zip(
                time, mdot, lv, h_in, T_p_rep, T_amb, h_in, epsilon
            ),
            columns=["time","mdot","lv","h_in", "T_p_rep","T_amb", "h_in", "epsilon"]
        )
        print(self.df)
        return self.df
    
if __name__ == '__main__':
    numsamples = 200

    #UB and LB for the sigmoid function
    T_amb_design_UB = 40 + 273.15
    T_amb_design_LB = -20 + 273.15

    #UB and LB for discharging and charging time
    t_discharge_UB = 10*3600
    t_discharge_LB = 4*3600

    t_charge_UB = 10*3600
    t_charge_LB = 4*3600

    #Assume that the outlet temp of the receiver can wiggle +/- 5°C from design point 720°C
    T_recv_sampling_UB = 725 + 273.15
    T_recv_sampling_LB = 715 + 273.15

    #Assume that the outlet temp of the PB can wiggle +/- 5°C from design point 510°C
    T_PB_sampling_UB = 515 + 273.15
    T_PB_sampling_LB = 505 + 273.15
    
    #Form the UB-LB lists
    UB = [T_amb_design_UB, t_discharge_UB, t_charge_UB, T_recv_sampling_UB, T_PB_sampling_UB]
    LB = [T_amb_design_LB, t_discharge_LB, t_charge_LB, T_recv_sampling_LB, T_PB_sampling_LB]

    #Generate LHS
    print("Generating LHS of %s samples"%(numsamples))
    LHS = generateLHS(UB,LB,numsamples)
    print("Done generating LHS!")

    #Prep the simulation
    moname = "Part1_MgO_6h_10h_8h"
    modir = "/home/philgun/solartherm-zeb/SolarTherm/Systems/Publications/Thermocline/Constant_Charging/Temperature_Controlled"
    simdir = "./simulation_tank"

    #Make folder to contain the simulation
    if not os.path.exists(simdir):
        os.makedirs(simdir)

    #Instantiate simulation class
    sim = SimulationWrapper(moname,modir,simdir)

    #Loop over the generated samples
    for i in range(LHS.shape[0]):
        #Operational parameters that are sampled using LHS
        T_amb_design_sampling       = LHS[i,0]
        t_discharge_sampling        = LHS[i,1]
        t_charge_sampling           = LHS[i,2]
        T_recv_sampling             = LHS[i,3]
        T_PB_sampling               = LHS[i,4]

        #Variables that control state
        modelicaVarName = [
            "T_amb_design","t_discharge","t_charge","T_recv_sampling", "T_PB_sampling"
        ]

        #Initiate the modelica variables that will be tuned by Python script
        sim.varname(modelicaVarName)

        val = [
            T_amb_design_sampling, 
            t_discharge_sampling, 
            t_charge_sampling,
            T_recv_sampling,
            T_PB_sampling
        ]

        #Simulate
        sim.simulate(
            val,
            start="0",
            stop=str(11*24*3600),
            step="60s",
            maxStep = "60s"

        )

        #Get the data
        df = sim.get_data()
        sim.check_parsing()
        cwd = os.getcwd()

        #Create result folder
        if not os.path.exists("%s/result"%(cwd)):
            os.makedirs("%s/result"%(cwd))
        
        #Save the dataframe as a csv
        df.to_csv(
            "%s/result/res_%s.csv"%(cwd,i),index=False
        )
        


