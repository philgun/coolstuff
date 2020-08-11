import os
import numpy as np
import random


for i in range(500):
	par_fr = round(random.uniform(0.005,0.125),3)
	f_fixed_load = round(random.uniform(0.0041,0.062),4)
	eta_motor = round(random.uniform(0.8,0.9),2)
	
	params = []
	params.append(par_fr)
	params.append(f_fixed_load)
	params.append(eta_motor)
	fn='params_%s.txt'%(i+1)
	np.savetxt(fn, params, fmt='%s', delimiter=',')
	print('Sim number = %s'%(i+1))
	os.system('st_simulate --maxStep 300s --step 3600s PhysicalParticleCO21D_1stApproach.mo par_fr=%s f_fixed_load=%s eta_motor=%s'%(par_fr,f_fixed_load,eta_motor))


