import numpy as np
import matplotlib.pyplot as plt
from pert import PERT

med=12.5
fig,ax = plt.subplots(1,2)
fig.tight_layout()
'''
data = np.random.uniform(-2.5,2.5,1000)
count, bins, ignored = ax[0].hist(data, 20, facecolor='purple') 
ax[0].set_xlabel('X\n(a)',fontsize=med)
ax[0].set_ylabel('Count',fontsize=med)
ax[0].set_title("Uniform Distribution Histogram",fontsize=med)
#ax[0].axis([0, 1, 0, 100]) # x_start, x_end, y_start, y_end
ax[0].tick_params(axis="both",labelsize=med)
ax[0].grid(True)

data = np.random.normal(0,1,1000)
count, bins, ignored = ax[1].hist(data, 20, facecolor='purple') 
ax[1].set_xlabel('X\n(b)',fontsize=med)
ax[1].set_ylabel('Count',fontsize=med,labelpad=0)
ax[1].set_title("Normal Distribution Histogram with $\sigma$ = 0, $s$=1",fontsize=med)
ax[1].tick_params(axis="both",labelsize=med)
ax[1].grid(True)

plt.show()
'''

def latin_hypercube(n):
	lower_limits = np.arange(0,n)/n
	upper_limits = np.arange(1,n+1)/n
	points = np.random.uniform(low=lower_limits,high=upper_limits,size = [2,n]).T
	np.random.shuffle(points[:,1])

	return points


n = 10
p = latin_hypercube(n)

import random

rx = np.random.uniform(0,1,n)
ry = np.random.uniform(0,1,n)

fig,ax = plt.subplots(1,2)

ax[0].set_xlim(0,1)
ax[0].set_ylim(0,1)
ax[0].scatter(p[:,0],p[:,1],c="r")
ax[0].set_title("Sampling using LHS",fontsize=med)
ax[0].tick_params(axis="both",labelsize=med)

for i in np.arange(0,1,1/n):
	ax[0].axvline(i)
	ax[0].axhline(i)
	ax[1].axvline(i)
	ax[1].axhline(i)

ax[1].set_xlim(0,1)
ax[1].set_ylim(0,1)
ax[1].scatter(rx,ry,c="r")
ax[1].set_title("Random sampling",fontsize=med)
ax[1].tick_params(axis="both",labelsize=med)

plt.show()
