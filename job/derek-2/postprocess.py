import os 
import numpy as np 
from matplotlib import pyplot as plt 
import seaborn as sns
import pandas as pd 
import random
import lib

cwd = os.getcwd()

#File name for summary
sumfile = "summary.csv"

f = open(sumfile,'w')
f.write('Titik,MAEX,MAEY\n')
f.close()
#xtrue,ytrue,xpred,ypred,x1,y1,r1,x2,y2,r2,x3,y3,r3
XTRUE=[]
YTRUE=[]
XPRED=[]
YPRED=[]

test_point = lib.generateTest()

points = np.arange(0,156,1)

for point in points:
    XTRUE.append(test_point[point][0])
    YTRUE.append(test_point[point][1])

    f = open("./result/res_titik_%s.csv"%(point),"r")
    next(f)

    deltaX=[]
    deltaY=[]

    print("Start processing the data for test point ",point)
    iterator = 1
    for line in f:
        xtrue,ytrue,xpred,ypred,x1,y1,r1,x2,y2,r2,x3,y3,r3 = line.split(",")
        xtrue,xpred,ytrue,ypred = float(xtrue),float(xpred),float(ytrue),float(ypred)
        deltax = abs(xtrue-xpred)
        deltay = abs(ytrue-ypred)
        deltaX.append(deltax)
        deltaY.append(deltay)

        XPRED.append(xpred)
        YPRED.append(ypred)
        iterator += 1
        if (iterator % 1e6 == 0):
            print(iterator)
    f.close()
    MAEX = sum(deltaX)/len(deltaX)
    MAEY = sum(deltaX)/len(deltaY)

    print("Writing the result")
    f = open(sumfile,'a')
    f.write("%s,%s,%s\n"%(point,MAEX,MAEY))
    f.close()
