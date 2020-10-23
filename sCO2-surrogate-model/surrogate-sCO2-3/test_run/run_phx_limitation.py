import os
import numpy as np
from DyMat import DyMatFile as D

data = np.genfromtxt('phxlimitation.csv',skip_header=1,delimiter=',')
varnames = ['dTemp_HTF_PHX','p_high','PR']
f = open('delta.csv','w')
f.close()
delta = []

for i in range(data.shape[0]):
	guess_delta = 40
	not_converging = True

	while not_converging:
		cmd = 'st_simulate --step 0.002 --stop 1 --solver dassl --nls homotopy --tolerance 1e-06 sCO2PBCalculator.mo '
		for j in range(data.shape[1]):
			cmd += '%s=%s '%(varnames[j],data[i,j])
		cmd+='delta=%s'%(guess_delta)
		print(cmd)

		#Run SolarTherm
		os.system(cmd)

		#Read result matfile
		data = D('sCO2PBCalculator_res_0.mat')
		eta_gross_array = data.data('eta_gross')
		if len(eta_gross_array) > 0:
			T_CO2_in = data.data('powerBlock.exchanger.T_CO2_des[1]')[0]
			T_HTF_out = data.data('powerBlock.exchanger.T_HTF_des[1]')[0]
			if T_HTF_out - T_CO2_in > 0:
				not_converging = False
			else:
				guess_delta += 5
		else:
			guess_delta += 5


	delta.append(guess_delta)
	
	f = open('delta.csv','a')
	f.write('%s\n'%(guess_delta))
	f.close()
