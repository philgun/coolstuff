import numpy as np
import os
from solartherm import postproc
import DyMat

targetdir = "/home/philgun/solartherm-particle/SolarTherm/Data/"


#receiver parameters

sm = 2.5
dni_des =950
P_net = 100e6
par_fr = 0.1
eta_rec_assumption = 0.88
T_amb_design = 283.15
P_gross_design = P_net/(1-par_fr)
T_out_design = 800+273.15
T_in_design = 550+273.15

os.chdir("/home/philgun/solartherm-particle/SolarTherm/Models/CSP/CRS/Receivers")
os.system("st_simulate ParticleReceiver1DCalculator.mo SolarMultiple=%s dni_des=%s eta_rec_assumption=%s T_amb_design=%s P_gross_design=%s T_out_design=%s T_in_design=%s"%(sm,dni_des,eta_rec_assumption,T_amb_design,P_gross_design,T_out_design,T_in_design))
os.system("rm -rf *.c *.o *.h *.json *.xml *.makefile *.cmake *.bakmo")
resmat = "ParticleReceiver1DCalculator_res_0.mat"
data=DyMat.DyMatFile(resmat)
H_drop = data.data("particleReceiver1D.H_drop")[-1]
print(H_drop)
os.system("rm -rf *.mat")
os.chdir("/home/philgun/solartherm-particle/examples/")


#Generating the efficiency data
n_row = 15 #25 points of Q_in
n_col = 15 #25 points of T_amb

qsolar_val = np.linspace(100e6,750e6,num=n_row,endpoint=True)
tamb_val = np.linspace(263.15,323.15,num=n_col,endpoint=True)

meta=[]
heading1="#1"
heading2="#METADATA Efficiency of the receiver Q_in_rcv [W] vs T_amb [K]"
heading3="double efficiency (%s,%s)"%(int(n_row+1),int(n_col+1))
heading4="0"
for i in range(0,n_col):
	heading4 +=" %s"%(tamb_val[i])

meta.append(heading1)
meta.append(heading2)
meta.append(heading3)
meta.append(heading4)

totalcase=n_row*n_col
print("Total case = %s"%(totalcase))
i = 0
for qsolar in qsolar_val[:]: #simulate the receiver model rig with different q_solar value (MWth)
	heading="%s"%(qsolar) #start a fresh heading --> each list represents one value of q_solar to be simulated under different T_amb conditions
	eta_rec_list=[] #start a fresh list of eta_receiver
	for tamb in tamb_val[:]: #simulate the receiver model rig with different T_amb (K)
		os.system("st_simulate --stop 200s EffCurve_Rcv1D.mo Q_in=%s T_amb=%s H_rcv=%s T_in_design=%s T_out_design=%s"%(qsolar,tamb,H_drop,T_in_design,T_out_design))
		print("#######################################################################")
		resmat="EffCurve_Rcv1D_res_0.mat"
		data=DyMat.DyMatFile(resmat)
		eta_rec=data.data("particleReceiver1D.eta_rec")[-1]
		eta_rec_list.append(eta_rec)
		print("Done simulating for Q_in = %s Wth and T_amb = %s $^oC$"%(qsolar,tamb-273.15))
		i += 1
		print("%s case left" %(totalcase-i))
	length=len(eta_rec_list)
	for i in range(0,length):
		heading +=" %s"%(eta_rec_list[i]) #concatenate the list with eta receiver value to suit the motab format
	meta.append(heading) #append the list to meta
	print(meta)

np.savetxt(targetdir+'efficiency.motab',meta,fmt='%d',delimiter=",")
		
		
		
