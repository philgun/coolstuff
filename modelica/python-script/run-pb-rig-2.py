import numpy as np
import DyMat
import os

count = 1
#Design parameter
T_HTF_in_des = 800 + 273.15
P_net = 100e6

os.system('st_simulate sCO2PBRig.mo P_net=%s T_hot_set=%s'%(P_net,T_HTF_in_des))
resmat = "sCO2PBRig_res_0.mat"
data = DyMat.DyMatFile(resmat)

#Design parameter

m_HTF_des = data.data('powerBlock.m_HTF_des')[-1]
P_cool_des = data.data('powerBlock.cooler.P_cool_des')[-1]
Q_HX_des = data.data('powerBlock.Q_HX_des')[-1]
W_net_des = data.data('powerBlock.P_nom')[-1]
print("Design point : m_HTF_des=%s [kg/s], P_cool_des=%s [We], Q_HX_des=%s [Wth], W_net_des=%s [We]"%(m_HTF_des,P_cool_des,Q_HX_des,W_net_des))

result = []
heading = "HTF_temp[K],HTF_load,T_ambient[K],ratio_W_net[kWe/kWe],ratio_Q_HX[kWth/kWth],ratio_P_cool[kWe/kWe]"
result.append(heading)

#Run set 1

T_HTF_set = np.linspace(770+273.15,820+273.15,num=5)
T_ambient = 35 + 273.15
load_set = [0.6,1,1.05]

for load in load_set[:]:
	for T_HTF_in in T_HTF_set[:]:
		print('Sim number = %s'%count)
		print(T_ambient-273.15)
		count += 1
		m_HTF_in= load * m_HTF_des
		os.system("st_simulate sCO2PBRig.mo T_amb_input=%s T_HTF_in=%s m_HTF_in=%s"%(T_ambient,T_HTF_in,m_HTF_in))
		resmat = "sCO2PBRig_res_0.mat"			
		data = DyMat.DyMatFile(resmat)
		ratio_m = data.data("powerBlock.load")[-1]
		ratio_W = data.data("powerBlock.W_net")[-1] / P_net
		ratio_Q = data.data("powerBlock.exchanger.Q_HX")[-1] / Q_HX_des
		ratio_Cool= data.data("powerBlock.cooler.P_cooling")[-1]/P_cool_des
		res = "%s,%s,%s,%s,%s,%s"%(T_HTF_in,ratio_m,T_ambient,ratio_W,ratio_Q,ratio_Cool)
		result.append(res)
		

#Run set 2

T_ambient_set = np.arange(273.15,273.15+40,1)
T_HTF_set = np.linspace(770+273.15,820+273.15,num=3)
m_HTF_in = m_HTF_des

for T_HTF_in in T_HTF_set[:]:
	for T_ambient in T_ambient_set[:]:
		print('Sim number = %s'%count)
		print(T_ambient-273.15)
		count += 1
		os.system("st_simulate sCO2PBRig.mo T_amb_input=%s T_HTF_in=%s m_HTF_in=%s"%(T_ambient,T_HTF_in,m_HTF_in))
		resmat = "sCO2PBRig_res_0.mat"			
		data = DyMat.DyMatFile(resmat)
		ratio_m = data.data("powerBlock.load")[-1]
		ratio_W = data.data("powerBlock.W_net")[-1] / P_net
		ratio_Q = data.data("powerBlock.exchanger.Q_HX")[-1] / Q_HX_des
		ratio_Cool= data.data("powerBlock.cooler.P_cooling")[-1]/P_cool_des
		res = "%s,%s,%s,%s,%s,%s"%(T_HTF_in,ratio_m,T_ambient,ratio_W,ratio_Q,ratio_Cool)
		result.append(res)

#Run set 3

T_HTF_in = T_HTF_in_des
load_set = np.arange(0.525,1.075,0.025)
T_ambient_set = [273.15,273.15+35,273.15+39]

for T_ambient in T_ambient_set[:]:
	for load in load_set[:]:
		print('Sim number = %s'%count)
		print(T_ambient-273.15)
		count += 1
		m_HTF_in= load * m_HTF_des
		os.system("st_simulate sCO2PBRig.mo T_amb_input=%s T_HTF_in=%s m_HTF_in=%s"%(T_ambient,T_HTF_in,m_HTF_in))
		resmat = "sCO2PBRig_res_0.mat"			
		data = DyMat.DyMatFile(resmat)
		ratio_m = data.data("powerBlock.load")[-1]
		ratio_W = data.data("powerBlock.W_net")[-1] / P_net
		ratio_Q = data.data("powerBlock.exchanger.Q_HX")[-1] / Q_HX_des
		ratio_Cool= data.data("powerBlock.cooler.P_cooling")[-1]/P_cool_des
		res = "%s,%s,%s,%s,%s,%s"%(T_HTF_in,ratio_m,T_ambient,ratio_W,ratio_Q,ratio_Cool)
		result.append(res)
		
fn = "regression-pb-data-for-statsgraphics.csv"
np.savetxt(fn,result,fmt="%s",delimiter=",")
			
			
