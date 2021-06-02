from DyMat import DyMatFile as D
import pandas as pd
import numpy as np
from matplotlib import pyplot as plt
import seaborn as sns

N = 100

matfile = "/home/philgun/Documents/PhD/Publication/ANNforDynamicModelling/data/2months _annual_simulation.mat"

data = D(matfile)

colnames = ["rho_f_avg","dz","U_bot","D_tank","U_wall","eta"]

for i in range(1,N+1):
    colnames.append("Tf_%s"%i)

for i in range(1,N+1):
    colnames.append("hf_%s"%i)

for i in range(1,N+1):
    colnames.append("der_hf_%s"%i)

for i in range(1,N+1):
    colnames.append("k_eff_%s"%i)

for i in range(1,N+1):
    colnames.append("hv_%s"%i)

#for i in range(1,N+1):
#    colnames.append("T_s_%s"%i)


T_fs = []
T_ss = []
h_fs = []
der_h_fs = []
k_effs = []
h_vs = []

for i in range(1,N+1):
    key = "Tank.Tank_A.T_f[%s]"%(i)
    vals = data.data(key)
    T_fs.append(vals)

    key2 = "der(Tank.Tank_A.h_f[%s])"%(i)
    vals2 = data.data(key2)
    der_h_fs.append(vals2)

    key3 = "Tank.Tank_A.h_f[%s]"%(i)
    vals3 = data.data(key3)
    h_fs.append(vals3)

    key4 = "Tank.Tank_A.k_eff[%s]"%(i)
    vals4 = data.data(key4)
    k_effs.append(vals4)

    key5 = "Tank.Tank_A.h_v[%s]"%(i)
    vals5 = data.data(key5)
    h_vs.append(vals5)

    #key6 = "Tank.Tank_A.T_s[%s]"%(i)
    #vals6 = data.data(key6)
    #T_ss.append(vals6)
    

T_fs = np.transpose(np.array(T_fs))
h_fs = np.transpose(np.array(h_fs))
der_h_fs = np.transpose(np.array(der_h_fs))
k_effs = np.transpose(np.array(k_effs))
h_vs = np.transpose(np.array(h_vs))
#T_ss = np.transpose(np.array(T_ss))

par = ["Tank.Tank_A.rho_f_avg","Tank.Tank_A.dz","Tank.Tank_A.U_bot","Tank.Tank_A.D_tank","Tank.Tank_A.U_wall","Tank.Tank_A.eta"]
rows = T_fs.shape[0]
parval = []

for p in par:
    v = data.data(p)[-1]
    v = v * np.ones(rows)
    parval.append(v)

parval = np.transpose(np.array(parval))

T_amb = np.array(data.data("Tank.T_amb")).reshape(-1,1)
colnames.append("T_amb")

u_flow = np.array(data.data("Tank.Tank_A.u_flow")).reshape(-1,1)
colnames.append("u_flow")

N = np.concatenate(
    (parval,T_fs,h_fs,der_h_fs,k_effs,h_vs,T_amb,u_flow), axis=1
)

df = pd.DataFrame(
    N,columns=colnames
)

print(df)

print(df.hf_2)

print(
    len(
        df[
            (df.u_flow> -1e-3)
            &
            (df.u_flow<1e-3)
        ]
    )
)

'''
fig,ax = plt.subplots(1)
ax.scatter(
    df.u_flow,df.der_hf_50, s = 0.5
)
ax.set_xlabel("U flow")
ax.set_ylabel("der hf 50")
'''

#Subsetting the data
df_1 = pd.DataFrame(
    zip(
        df["rho_f_avg"],
        df["dz"],
        df["U_bot"],
        df["D_tank"],
        df["U_wall"],
        df["eta"],
        df["u_flow"],
        df["T_amb"],
        df["Tf_1"], 
        df["Tf_2"],
        df["k_eff_1"],
        df["k_eff_2"],
        df["hf_1"],
        df["hf_2"],
        df["der_hf_1"]
    ),
    columns=[
        "rho_f_avg","dz","U_bot","D_tank","U_wall","eta","u_flow","T_amb","Tf_1","Tf_2","k_eff_1","k_eff_2","hf_1","hf_2","der_hf_1"
    ]
)

df_1.to_csv("discrete_1.csv",index=False)
print(df_1.describe())

'''
fig,ax = plt.subplots(1)

ax.scatter(
    (df.Tf_1-df.Tf_2),df.der_hf_1, s = 0.5
)

ax.plot(
    (df.Tf_1-df.Tf_2),
    np.zeros(len(df.Tf_1-df.Tf_2)),
    c="red",
    ls="--"
)

ax.set_xlabel("ΔT (T1 - T2)")
ax.set_ylabel("der hf 1")
ax.set_ylim(-100,40)


fig,ax = plt.subplots(1)
sns.distplot(
    (df.Tf_1-df.Tf_2),ax=ax,hist=True, kde=False,bins=100
)

fig,ax = plt.subplots(1)
sns.distplot(
    (df.der_hf_1),ax=ax,hist=True, kde=False,bins=500
)

#fig,ax = plt.subplots(1)
#ax.scatter(
#    (df.Tf_1-df.Ts_1),df.der_hf_1, s = 0.5
#)
#ax.set_xlabel("ΔT (Tf1 - Ts1)")
#ax.set_ylabel("der hf 1")
#ax.set_ylim(-100,40)
'''