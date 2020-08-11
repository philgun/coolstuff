import os 
import numpy as np 
from matplotlib import pyplot as plt 
import seaborn as sns
import pandas as pd 
import random
import lib

cwd = os.getcwd()

#File name for summary
sumfile = "%s/summary.csv"%(cwd)
f = open(sumfile,'w')
f.write('Titik,MAEX,MAEY\n')
f.close()

for i in range(156):
    dirname = "titik_test_%s"%(i)
    os.chdir("%s/result/%s"%(cwd,dirname))
    listofdir = os.listdir("%s/result/%s"%(cwd,dirname))

    deltaXMaster = []
    deltaYMaster = []
    
    for b in listofdir:
        os.chdir("%s/result/%s"%(cwd,dirname))
        print(i,b)
        os.chdir(b)

        g = open("MAE.csv","w")
        g.write("MAEX,MAEY\n")
        g.close()

        XTRUE=[]
        YTRUE=[]
        XPRED=[]
        YPRED=[]

        deltaX=[]
        deltaY=[]

        f = open('res.csv','r')
        next(f)
        
        for line in f:
            xtrue,ytrue,xpred,ypred,a,b,x1,y1,r1,x2,y2,r2,x3,y3,r3 = line.split(",")
            xtrue,xpred,ytrue,ypred = float(xtrue),float(xpred),float(ytrue),float(ypred)
            
            deltax = float(a)
            deltay = float(b)
            
            deltaX.append(deltax)
            deltaY.append(deltay)

            deltaXMaster.append(deltax)
            deltaYMaster.append(deltay)

            XPRED.append(xpred)
            YPRED.append(ypred)

        if len(deltaX) is not 0 and len(deltaY) is not 0:
            MAEX = sum(deltaX)/len(deltaX)
            MAEY = sum(deltaY)/len(deltaY)

            g = open("MAE.csv","a")
            g.write("%s,%s\n"%(MAEX,MAEY))
            g.close()

        
    
    MAEXavg = sum(deltaXMaster)/len(deltaXMaster)
    MAEYavg = sum(deltaYMaster)/len(deltaYMaster)


    f = open(sumfile,'a')
    f.write('%s,%s,%s\n'%(i,MAEXavg,MAEYavg))
    f.close()

