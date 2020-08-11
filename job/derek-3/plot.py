import numpy as np 
from matplotlib import pyplot as plt 
import seaborn as sns
import pandas as pd 
import random
import lib
import os

#Directory where all the result file from postprocess.py are put
fontsize = 10
test_points = lib.generateTest()
cwd = os.getcwd()

os.system("rm -rf plot")
os.makedirs("plot")

#Plotting
for i in range(len(test_points)):
    dirname = "titik_test_%s"%(i)
    os.chdir("%s/result/%s"%(cwd,dirname))
    listofdir = os.listdir("%s/result/%s"%(cwd,dirname))
    
    XTRUE = []
    YTRUE = []
    XPRED = []
    YPRED = []    
    for b in listofdir:
        os.chdir("%s/result/%s"%(cwd,dirname))
        print(i,b)
        os.chdir(b)

        f = open('res.csv','r')
        next(f)
        
        for line in f:
            xtrue,ytrue,xpred,ypred,a,b,x1,y1,r1,x2,y2,r2,x3,y3,r3 = line.split(",")
            xtrue,xpred,ytrue,ypred = float(xtrue),float(xpred),float(ytrue),float(ypred)
        

            XPRED.append(xpred)
            YPRED.append(ypred)
            XTRUE.append(xtrue)
            YTRUE.append(ytrue)
        
        f.close()
    
    os.chdir("%s/plot"%(cwd))
   
    plt.scatter(XPRED,YPRED,c='blue',label="Prediction")
    plt.scatter(XTRUE,YTRUE,c='red',label="True Value")
    plt.legend(fontsize=fontsize)
    plt.title("Plot Titik Test %s (%s,%s)"%(i,xtrue,ytrue))
    pltfn = "Plot_Titik_%s"%(i)
    plt.savefig(pltfn,bbox_inches='tight')
    plt.close()
