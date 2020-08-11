import numpy as np 
from matplotlib import pyplot as plt 
import seaborn as sns
import pandas as pd 
import random
import lib
import os

#Directory where all the result file from postprocess.py are put
readdir = "/home/philgun/Desktop/python-project/job/derek-2/result"
fontsize = 15
test_points = lib.generateTest()
cwd = os.getcwd()

os.system("rm -rf plot")
os.makedirs("plot")
os.chdir("./plot")

#xtrue,ytrue,xpred,ypred,x1,y1,r1,x2,y2,r2,x3,y3,r3#
#Plotting
for point in range(156):
    csv = "%s/res_titik_%s.csv"%(readdir,point)
    print(csv)
    f = open(csv,'r')
    next(f)
    XPRED = []
    YPRED = []
    print("Processing point ",point)
    for line in f:
        xtrue,ytrue,xpred,ypred,x1,y1,r1,x2,y2,r2,x3,y3,r3 = line.split(",")
        XPRED.append(float(xpred))
        YPRED.append(float(ypred))
    
    lenxpred = len(XPRED)
    plt.figure()
    print("Start plotting point ",point)
    xtrue,ytrue = test_points[point]
    i = 0
    XPLOT = []
    YPLOT = []
    while i < 1e4:
        k = random.randint(0,lenxpred-1)
        XPLOT.append(XPRED[k])
        YPLOT.append(YPRED[k])
        i+=1
   
    plt.scatter(XPLOT,YPLOT,c='blue',label="Prediction")
    plt.scatter(xtrue,ytrue,c='red',label="True Value")
    plt.legend(fontsize=10)
    plt.title("Plot Titik Test %s (%s,%s)"%(point,xtrue,ytrue))
    pltfn = "Plot_Titik_%s"%(point)
    plt.savefig(pltfn,bbox_inches='tight')
    plt.close()
