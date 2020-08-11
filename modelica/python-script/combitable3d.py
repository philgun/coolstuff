import numpy as np
import os
from solartherm import postproc
import DyMat

targetdir = "/home/philgun/solartherm-particle/SolarTherm/Data/"


#System parameters
sm = 2.5
dni_des =950
P_net = 100e6
par_fr = 0.1
eta_rcv_assumption = 0.88
eff_blk = 0.502 


T_out_design = 800+273.15
T_in_design = 550+273.15
T_amb_design = 283.15

P_gross_design = P_net/(1-par_fr)
Q_in_rcv = P_gross_design / eff_blk / eta_rcv_assumption * sm

#Receiver design
os.chdir("/home/philgun/solartherm-particle/SolarTherm/Models/CSP/CRS/Receivers")
os.system("st_simulate ParticleReceiver1DCalculator.mo SolarMultiple=%s dni_des=%s eta_rec_assumption=%s T_amb_design=%s P_gross_design=%s T_out_design=%s T_in_design=%s Q_in=%s"%(sm,dni_des,eta_rec_assumption,T_amb_design,P_gross_design,T_out_design,T_in_design,Q_in_rcv))
os.system("rm -rf *.c *.o *.h *.json *.xml *.makefile *.cmake *.bakmo")
resmat = "ParticleReceiver1DCalculator_res_0.mat"
data=DyMat.DyMatFile(resmat)
H_drop = data.data("particleReceiver1D.H_drop")[-1]
os.system("rm -rf *.mat")
os.chdir("/home/philgun/solartherm-particle/examples/")


#Generating the mass flow tables for different T_coldTank, T_amb and Q_in
n_row = 10 #25 points of Q_in
n_col = 10 #25 points of T_amb

qsolar_val = np.linspace(100e6,850e6,num=n_row,endpoint=True)
tamb_val = np.linspace(270.35,318.15,num=n_col,endpoint=True)
t_cold_val = np.arange(730,840,10) 

totalcase=n_row*n_col * len(t_cold_val)
print("Total case = %s"%(totalcase))

for t_cold in t_cold_val[:]:#simulate the receiver model rig (with PID to exactly get 800 C) with different T_cold (K)
	meta=[]
	heading1="#1"
	heading2="#METADATA Mass Flow Rate [kg/s] of the receiver: Q_in_rcv [W] vs T_amb [K]"
	heading3="double mdot (%s,%s)"%(int(n_row+1),int(n_col+1))
	heading4="0"
	for i in range(0,n_col):
		heading4 +=" %s"%(tamb_val[i])

	meta.append(heading1)
	meta.append(heading2)
	meta.append(heading3)
	meta.append(heading4)

	for qsolar in qsolar_val[:]: #simulate the receiver model rig with different q_solar value (MWth)
		heading="%s"%(qsolar) #start a fresh heading --> each list represents one value of q_solar to be simulated under different T_amb conditions

		mdot_list=[] #start a fresh list of mdot

		for tamb in tamb_val[:]: #simulate the receiver model rig with different T_amb (K)
			os.system("st_simulate --stop 200s EffCurve_Rcv1D.mo Ti=1 Q_in=%s T_amb=%s H_rcv=%s T_in_design=%s T_out_design=%s"%(qsolar,tamb,H_drop,t_cold,T_out_design))
			print("#######################################################################")

			resmat="EffCurve_Rcv1D_res_0.mat"
			data=DyMat.DyMatFile(resmat)
			mdot=data.data("particleReceiver1D.mdot")[-1]

			mdot_list.append(mdot)
			print("Done simulating for Q_in = %s Wth, T_amb = %s degC and T_cold = %s degC"%(qsolar,tamb-273.15, t_cold-273.15))
			
		length=len(mdot_list)
		for i in range(0,length):
			heading +=" %s"%(mdot_list[i]) #concatenate the list with eta receiver value to suit the motab format
		meta.append(heading) #append the list to meta

	fn = 'mdot_%s.motab'%(t_cold)
	np.savetxt(targetdir+fn,meta,fmt='%s',delimiter=",")
		
		
		
