import pandas as pd
import numpy as np
import os
import matplotlib.pyplot as plt
import matplotlib as mpl

foldername = ["T_amb_design","t_charge","t_discharge","T_recv_sampling","T_PB_sampling"]

cwd = os.getcwd()
cm = plt.cm.get_cmap('RdYlBu_r',50)

t_discharge = [2428,1766,1387,1142,971]
t_charge = [2428,1766,1387,1142,971]
T_recv = np.linspace(700+273.15,750+273.15,5)
T_PB = np.linspace(500+273.15,550+273.15,5)
T_amb = np.linspace(-10+273.15,30+273.15,5)
titlename = ["Varying $T_{amb}$","Varying $\dot{m}_{ch}$","Varying $\dot{m}_{dis}$","Varying $T_{ch}$","Varying $T_{dis}$"]

#Loop folder
for index,folname in enumerate(foldername):
	#Loop csvs
	fig,axes = plt.subplots(1,2)
	for a in axes.flat:
		a.set_xlabel("SOC")
		a.set_ylabel("Epsilon")
	
	axes[0].set_title("%s. Mode: discharging"%titlename[index])
	axes[1].set_title("%s. Mode: charging"%titlename[index])

	for i in [0,1,2,3,4]:
		fname = "./%s/res_%s.csv"%(folname,i)
		df_all = pd.read_csv(fname)
		df_eq = df_all[df_all.time>=5*24*3600]
			
		
		#Discharging - equilibrium
		df_ = df_eq[df_eq.mdot>0]
		
		if folname == "T_amb_design":
			header = T_amb
			label = "$T_{amb}$ %s°C"%(header[i]-273.15)
		elif folname == "t_charge":
			header = t_charge
			label = "$\dot{m}_{ch}$ %s kg/s"%(header[i])
		elif folname == "t_discharge":
			header = t_discharge
			label = "$\dot{m}_{dis}$ %s kg/s"%(header[i])
		elif folname == "T_recv_sampling":
			header = T_recv
			label = "$T_{ch}$ %s°C"%(header[i]-273.15)
		elif folname == "T_PB_sampling":
			header = T_PB
			label = "$T_{dis}$ %s°C"%(header[i]-273.15)

		
		axes[0].scatter(df_.lv, df_.epsilon,s = 5, marker="^", label=label)
		
		axes[0].legend()

		#Charging - equilibrium
		df_ = df_eq[df_eq.mdot<0]
		
		if folname == "T_amb_design":
			header = T_amb
			label = "$T_{amb}$ %s°C"%(header[i]-273.15)
		elif folname == "t_charge":
			header = t_charge
			label = "$\dot{m}_{ch}$ %s kg/s"%(header[i])
		elif folname == "t_discharge":
			header = t_discharge
			label = "$\dot{m}_{dis}$ %s kg/s"%(header[i])
		elif folname == "T_recv_sampling":
			header = T_recv
			label = "$T_{ch}$ %s°C"%(header[i]-273.15)
		elif folname == "T_PB_sampling":
			header = T_PB
			label = "$T_{dis}$ %s°C"%(header[i]-273.15)

		
		axes[1].scatter(df_.lv, df_.epsilon,s = 5, marker="^", label=label)
		
		axes[1].legend()

	plt.show()
		
		

