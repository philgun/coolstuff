import os
import numpy as np
from DyMat import DyMatFile as D

inputs = np.genfromtxt('phxlimitation.csv',skip_header=1,delimiter=',')
varnames = ['dTemp_HTF_PHX','p_high','PR']
f = open('delta.csv','w')
f.close()
delta = []

for i in range(inputs.shape[0]):
	guess_delta = 50
	not_converging = True

	while not_converging:
		print("###################################### SIMULATION FOR THE %s th DATA ###################################################"%(i+1))
		cmd = 'st_simulate --step 0.002 --stop 1 --solver dassl --nls homotopy --tolerance 1e-06 --np 0 sCO2PBCalculator.mo '
		for j in range(inputs.shape[1]):
			cmd += '%s=%s '%(varnames[j],inputs[i,j])
		cmd+='delta=%s'%(guess_delta)
		print(cmd)

		#Run SolarTherm
		os.system(cmd)

		#Read result matfile
		data = D('sCO2PBCalculator_res_0.mat')


		#Check if value is updated
		assert(data.data('dTemp_HTF_PHX')[0] == inputs[i,0])
		np.testing.assert_almost_equal(data.data('delta')[0],guess_delta)
		assert(data.data('p_high')[0] == inputs[i,1])
		assert(data.data('PR')[0] == inputs[i,2])

		eta_gross_array = data.data('eta_gross')
		if len(eta_gross_array) > 0:
			T_CO2_in = data.data('powerBlock.exchanger.T_CO2_des[1]')[0]
			T_HTF_out = data.data('powerBlock.exchanger.T_HTF_des[1]')[0]
			delta_Temp = T_HTF_out - T_CO2_in
			if delta_Temp > 10:
				not_converging = False
				print("Model converge, Temperature OK! %s\nGuess delta is: %s"%(delta_Temp,guess_delta))
			else:
				print("Model converge, but temperature is crossing: %s\nGuess delta is: %s"%(delta_Temp,guess_delta))	
				guess_delta += (10 - delta_Temp + 2)
		else:
			guess_delta += 20
			print("Model does not even converge")


	delta.append(guess_delta)
	
	f = open('delta.csv','a')
	f.write('%s\n'%(guess_delta))
	f.close()
