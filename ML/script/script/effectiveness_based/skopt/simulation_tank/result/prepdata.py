import glob
import pandas as pd
import numpy as np

fns = glob.glob("*.csv")
threshold = 5 * 24 * 3600
df_master = []

for fn in fns:
	df = pd.read_csv(fn)
	df = df[df.time>=threshold]
	df_master.append(df.to_numpy())

df_final = df_master[0]

for i in range(1,len(df_master)):
	df_final = np.concatenate(
		(df_final,df_master[i]),axis=0
	)

df = pd.DataFrame(
	df_final,columns=["time","mdot","lv","h_in","T_p_rep","T_amb","h_in_drop","epsilon"]
).drop(columns="h_in_drop")


df.to_csv("data.csv",index=False)
