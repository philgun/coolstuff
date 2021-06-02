from sampling import SimulationWrapper, generateLHS
import numpy as np
import os

#Prep the simulation
moname = "Part1_MgO_6h_10h_8h"
modir = "/home/philgun/solartherm-zeb/SolarTherm/Systems/Publications/Thermocline/Constant_Charging/Temperature_Controlled"
simdir = "./simulation_tank_sweep"

#Make folder to contain the simulation
if not os.path.exists(simdir):
    os.makedirs(simdir)

t_discharge = np.linspace(4*3600,10*3600,5)
t_charge = np.linspace(4*3600,10*3600,5)
T_recv = np.linspace(700+273.15,750+273.15,5)
T_PB = np.linspace(500+273.15,550+273.15,5)
T_amb = np.linspace(-10+273.15,30+273.15,5)

PARAMS = [
    T_amb, t_discharge, t_charge, T_recv, T_PB
]

#Variables that control state
modelicaVarName = [
    "T_amb_design","t_discharge","t_charge","T_recv_sampling", "T_PB_sampling"
]

#Instantiate simulation class
sim = SimulationWrapper(moname,modir,simdir)

for i,set_PAR in enumerate(PARAMS):
    #Operational parameters
    varname = [modelicaVarName[i]]

    for j,p in enumerate(set_PAR):
        #Initiate the modelica variables that will be tuned by Python script
        sim.varname(varname)

        val = [
            p
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
        cwd = os.getcwd()

        #Create result folder
        if not os.path.exists("%s/sweep/%s"%(cwd,varname[0])):
            os.makedirs("%s/sweep/%s"%(cwd,varname[0]))

        #Save the dataframe as a csv
        df.to_csv(
            "%s/sweep/%s/res_%s.csv"%(cwd,varname[0],j),index=False
        )



