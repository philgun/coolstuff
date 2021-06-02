import joblib
import pandas as pd
from sklearn.preprocessing import MinMaxScaler

#Load stuffs
df = joblib.load("./df_test.pkl")
mmx = joblib.load("./mmx.pkl")
der_mmx = joblib.load("./mm_der.pkl")

cols = df.columns.to_list()

with open("./var.txt","w") as f:
	for c in cols:
		f.write("%s\n"%(c))

X_max = mmx.data_max_
X_min = mmx.data_min_


der_max = der_mmx.data_max_
der_min = der_mmx.data_min_

with open("./X_max.txt","w") as f:
	for c in X_max:
		f.write("%s\n"%(c))

with open("./X_min.txt","w") as f:
	for c in X_min:
		f.write("%s\n"%(c))

with open("./der_max.txt","w") as f:
	for c in der_max:
		f.write("%s\n"%(c))

with open("./der_min.txt","w") as f:
	for c in der_min:
		f.write("%s\n"%(c))

