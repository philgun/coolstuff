import pandas as pd
import numpy as np
from matplotlib import pyplot as plt

df = pd.read_csv("rawdataX.csv")

fig,ax = plt.subplots(1)
x = np.arange(1,101,dtype=np.int32)

for i in range(len(df)):
	print(i)
	T_f = []
	T_f_predict = []

	for j in range(1,101):
		T_f.append(df["Tf_%s"%(j)].iloc[i])
		T_f_predict.append(df["Tf_pred_%s"%(j)].iloc[i])
	
	ax.plot(x,T_f,label="True")
	ax.plot(x,T_f_predict,label="Regression")
	ax.legend()
	ax.set_title("simulation time : %s seconds"%(i*1/(len(df))))
	plt.pause(0.01)
	ax.cla()

plt.show()
	
