import numpy as np
import matplotlib.pyplot as plt

data = np.loadtxt("./res/out.csv",dtype=float,delimiter=",")
data = np.array(data)

varnames =["$T_{in}$","$Q_{in}$","$T_{amb}$","$H_{drop}$"]
colorwheel= ["Black","Green","Blue","Red"]
row,cols = data.shape

std = []
mean = []

for j in range(cols):
    array = data[:,j]
    s = np.std(array)
    std.append(s)
    m = np.mean(array)
    mean.append(m)

big=15
med=12.5
small=10

fig,ax = plt.subplots(1)

for i in range(len(varnames)):
    ax.scatter(mean[i],std[i],c=colorwheel[i],label=varnames[i],s=75)

ax.set_xlabel("Sample means",fontsize=med)
ax.set_ylabel("Sample standard deviation",fontsize=med)
ax.tick_params(axis="both",labelbottom=True, labelleft=True,labelsize=med)
ax.legend(fontsize=big,bbox_to_anchor=(0.01,0),loc=3)
ax.set_title("Elementary effect distributions",fontsize=big)

plt.show()