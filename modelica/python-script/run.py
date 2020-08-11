import numpy as np
import os

inputs = np.loadtxt('in.csv',delimiter=',')
size=inputs[0]
wspd = inputs[1]
t_storage = inputs[2]

print(size)
print(wspd)
print(t_storage)

os.system('st_simulate --maxStep 300s --step 3600s --np=0 PhysicalParticleCO21D_1stApproach.mo A_helio=%s Wspd_max=%s t_storage=%s'%(size,wspd,t_storage))
