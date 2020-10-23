import numpy as np

simdir = './simulation/'
mofile = 'sCO2PBCalculator'
fnmo = '%s.mo'%(mofile)
fnres = '%s.mo'%(mofile)
P_net = 67690794.6
g = open(fnres,'w')
g.close()

f = open(fnmo,'r')
i=0
for line in f:
    if i == 23:
        line = '  parameter SI.Power P_net = %s;\n'%(str(P_net))
    g = open(fnres,'a')
    g.write(line)
    g.close()
    i+=1
