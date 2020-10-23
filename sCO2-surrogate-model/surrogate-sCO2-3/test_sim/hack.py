import numpy as np
import os

simdir = '/home/philgun/Documents/codecodecode/codecodecode/surrogate-sCO2-3/'
mofile = 'sCO2PBCalculator'
fnmo = '%s%s.mo'%(simdir,mofile)
fnres = '%s_hacked.mo'%(mofile)

P_net=67690794.6 
T_in_ref_blk=1098.81 
p_high=24315878.42 
PR=2.9 
T_cold_set=828.61 
delta=77.53 
load=0.71 
T_HTF_in=1006.91
T_amb_input=311.84

g = open(fnres,'w')
g.close()

f = open(fnmo,'r')
i=0
for line in f:
    print(i,line)
    if i == 23:
    	line = '  parameter SI.Power P_net = %s;\n'%(str(P_net))
    g = open(fnres,'a')
    g.write(line)
    g.close()
    i+=1

print('./%s'%(fnres))
print('./%s.mo'%(mofile))
os.rename('./%s'%(fnres),'./%s.mo'%(mofile))

#st_simulate --np=0 --stop 1 --step 0.002 --integOrder 5 --tolerance 1e-06 --solver dassl --nls homotopy 
# sCO2PBCalculator.mo P_net=67690794.6 
# T_in_ref_blk=1098.81 
# p_high=24315878.42 
# PR=2.9 
# T_cold_set=828.61 
# delta=77.53 
# load=0.71 
# T_HTF_in=1006.91
#  T_amb_input=311.84
