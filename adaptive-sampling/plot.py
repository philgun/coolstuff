import numpy as np
import pandas as pd
from matplotlib import pyplot as plt
import os

fn = "./Data/data_iteration_1.csv"
i = 1

while os.path.exists(fn):
	fig,ax = plt.subplots(1)
	df = pd.read_csv(fn,header=None)
	print(i,fn)
	x = df[df.columns[0]]
	y = df[df.columns[1]]
	ax.scatter(x,y,s=0.5)
	ax.set_ylabel("Y")
	ax.set_xlabel("X")
	plt.title("Iteration %s"%(i))
	plt.savefig("./Data/Iteration %s"%(i))	
	i+=1
	plt.close()
	fn = "./Data/data_iteration_%s.csv"%(i)

fig,ax = plt.subplots(1)
fn = "./Data/data_training.csv"
df = pd.read_csv(fn,header=None)
x = df[df.columns[0]]
y = df[df.columns[1]]
x = x[0:80]
y = y[0:80]
ax.scatter(x,y,s=0.5)
ax.set_ylabel("Y")
ax.set_xlabel("X")
plt.title("Iteration 0")
plt.savefig("./Data/Iteration 0")	
plt.close()
from mpl_toolkits.mplot3d import Axes3D
fn = '/home/philgun/Documents/codecodecode/codecodecode/adaptive-sampling/TrainingData/data_training.csv'
import pandas as pd
df = pd.read_csv(fn,header=None)
fig = plt.figure()
ax = Axes3D(fig)


ax.scatter(df[df.columns[0]],df[df.columns[1]],df[df.columns[2]])
plt.show()





