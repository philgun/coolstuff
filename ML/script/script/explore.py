import pandas as pd
import matplotlib.pyplot as plt
import numpy as np
import seaborn as sns
from sklearn.preprocessing import StandardScaler, MinMaxScaler

fntrain = "/home/philgun/Documents/PhD/Publication/ANNforDynamicModelling/data/exportedVariables_1s.csv"

df = pd.read_csv(
    fntrain
)

names = df.columns
print(names)


#ax.scatter(
#    df.u_flow,df.der_h_f_1
#)
#ax.set_xlabel("$u_\mathrm{flow} m/s$")
#ax.set_ylabel("$dh_1/dt$")





n = df.to_numpy()

n_scaled = MinMaxScaler().fit_transform(n)
n_scaled2 = StandardScaler().fit_transform(n)

df_scaled = pd.DataFrame(n_scaled,columns=df.columns)
fig,ax = plt.subplots(1,3)
sns.distplot(
    df_scaled.der_h_f_1,ax=ax[0],hist=True
)
sns.distplot(
    df_scaled2.der_h_f_1,ax=ax[1],hist=True
)

sns.distplot(
    df.der_h_f_1,ax=ax[2],hist=True
)

plt.show()