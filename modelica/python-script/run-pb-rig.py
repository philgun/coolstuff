import numpy as np
import DyMat
import os

P_net = 100e6


m_htf_set = np.linspace(600,1200,num=10)
t_htf_set = np.linspace(700+273.15,800+273.15,num=10)
t_amb_set = np.linspace(5+273.15,45+273.15,num=10)
result = []
heading = "Q_HX[W],T_HTF_in[K],T_amb[K],W_net[W],load,m_HTF_des[kg/s],m_HTF[kg/s]"
result.append(heading)
i=1
for m_htf in m_htf_set[:]:
	for t_htf in t_htf_set[:]:
		for t_amb in t_amb_set[:]:
			print("Sim number = %s"%(i))
			print("input=%s %s %s"%(m_htf,t_htf,t_amb))
			os.system("st_simulate sCO2PBRig.mo T_amb_input=%s T_HTF_in=%s m_HTF_in=%s"%(t_amb,t_htf,m_htf))
			resmat = "sCO2PBRig_res_0.mat"			
			data = DyMat.DyMatFile(resmat)
			Q_HX = data.data("powerBlock.exchanger.Q_HX")[-1]
			T_HTF_in = data.data("powerBlock.exchanger.T_HTF_in")[-1]
			T_amb = data.data("T_amb_input")[-1]
			W_net = data.data("powerBlock.W_net")[-1]
			load = data.data("powerBlock.load")[-1]
			m_HTF_des = data.data("powerBlock.m_HTF_des")[-1]
			m_HTF = data.data("powerBlock.fluid_a.m_flow")[-1]
			res = "%s,%s,%s,%s,%s,%s,%s"%(Q_HX,T_HTF_in,T_amb,W_net,load,m_HTF_des,m_HTF)
			result.append(res)
			i+=1

fn = "regression-pb-data.csv"
np.savetxt(fn,result,fmt="%s",delimiter=",")
			
			
