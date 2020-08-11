import DyMat
import numpy as np
import os

size_val = np.arange(200,50,-30)
t_storage = 14
wspd_val = [6,10,15,20,24]
cwd = os.getcwd()
os.system('mkdir %s/res'%cwd)
targetdir="%s/res"%(cwd)

for size in size_val[:]:
	for wspd in wspd_val[:]:
		inputs=[]
		inputs.append(round(size,1))
		inputs.append(round(wspd,1))
		inputs.append(round(t_storage,1))
		print(inputs)
		np.savetxt('in.csv',inputs,fmt='%s',delimiter=',')
		dirname = "%s/wspdmax%s_A_helio%s"%(targetdir,round(wspd,1),round(size,1))
		print(dirname)
		os.system('mkdir %s'%(dirname))
		os.system('cp PhysicalParticleCO21D_1stApproach.mo %s'%(dirname))
		os.system('cp in.csv %s'%(dirname))
		os.system('cp run.py %s'%(dirname))
		os.chdir(dirname)
		os.system('python run.py')
		os.chdir(cwd)
