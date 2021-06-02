import pandas as pd
from matplotlib import pyplot as plt
import glob
import numpy as np

fig,ax = plt.subplots(1)
fns = glob.glob("./rawdata*")

for f in fns:
	df = pd.read_csv(f)
	for j in range(df.shape[0]):
		Tf = []
		Ts = []
		u_flow = df.u_flow.iloc[j]
		for i in range(1,101):
			Tf.append(df["Tf_%s"%i].iloc[j])
			Ts.append(df["Ts_%s"%i].iloc[j])
		ax.plot([x-273.15 for x in Tf],label="Fluid")
		ax.plot([x-273.15 for x in Ts],label="Solid")
		ax.set_ylabel("Temp °C")
		ax.set_xlabel("Position")
		ax.yaxis.set_ticks(np.arange(500,750,10))
		ax.legend()
		if u_flow > 0:
			title = "Discharging at u_flow = %s m/s"%(round(u_flow,3))
		else:
			title = "Charging at u_flow = %s m/s"%(round(u_flow,3))

		ax.set_title(title)
		plt.pause(0.001)
		ax.cla()

plt.show()
