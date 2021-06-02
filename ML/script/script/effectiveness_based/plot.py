from DyMat import DyMatFile as D
import matplotlib.pyplot as plt
import pandas as pd
import numpy as np
from sklearn.metrics import r2_score, mean_squared_error, mean_absolute_percentage_error
f_lc = "./data/data_effectiveness.mat"
f_s = "./data/surrogate.mat"

def generate_gif(f):
    data = D(f)
    T_s = []

    for i in range(1,101):
        name = "thermocline_Tank.Tank_A.T_s[%s]"%(i)
        val = data.data(name)
        T_s.append(val)
    
    T_s = np.array(T_s).T
     
    return T_s

T_s = generate_gif(f_lc)

for i in range(T_s.shape[0]):
    fig,ax = plt.subplots()
    T = T_s[i,:]
    X = np.arange(1,101,1)
    ax.plot(
        X,[t-273.15 for t in T]
    )
    ax.set_xlabel("Dimensionless position")
    ax.set_ylabel("Filler temperature [°C]")
    fig.savefig("./gif/figure%s.png"%(i))

    if i==4000:
        break

data_lc = D(f_lc)
data_s = D(f_s)

#Plot Level Dynamics
lc_abs = data_lc.abscissa("tank_level",valuesOnly=True)
lc_LV = data_lc.data("tank_level")

s_abs = data_s.abscissa("tank_level",valuesOnly=True)
s_LV = data_s.data("tank_level")

fig,ax = plt.subplots(1,2)
ax[0].plot(
    lc_abs/3600, lc_LV, label="LC model"
)
ax[0].plot(
    s_abs/3600, s_LV, label="Surrogate"
)

ax[0].set_title("State of charge (SOC) comparison")
ax[0].set_ylabel("SOC")
ax[0].set_xlabel("Time [h]")
ax[0].legend()

ax[1].scatter(
    lc_LV, s_LV , c="black",s=0.4
)
ax[1].set_title("45° Plot. R$^2$: %.7f, MSE: %.7f"%(
    r2_score(lc_LV, s_LV), mean_squared_error(lc_LV, s_LV)
))
ax[1].set_ylabel("SOC Surrogate")
ax[1].set_xlabel("SOC Lump-capacitance")

plt.show()

# Plot effectiveness epsilon
lc_eps = data_lc.data("epsilon_stg")
s_eps = data_s.data("epsilon_stg")

fig,ax = plt.subplots(1,2)
ax[0].plot(
    lc_abs/3600, lc_eps, label="LC model"
)
ax[0].plot(
    s_abs/3600, s_eps, label="Surrogate"
)

ax[0].set_title("Effectiveness comparison")
ax[0].set_ylabel("ε")
ax[0].set_xlabel("Time [h]")
ax[0].legend()

ax[1].scatter(
    lc_eps, s_eps , c="black",s=0.4
)
ax[1].set_title("45° Plot. R$^2$: %.7f, MSE: %.7f"%(
    r2_score(lc_eps, s_eps), mean_squared_error(lc_eps, s_eps)
))
ax[1].set_ylabel("ε Surrogate")
ax[1].set_xlabel("ε Lump-capacitance")

plt.show()

#Plot enthalpy of the fluids out
lc_T_out = data_lc.data("thermocline_Tank.Tank_A.T_out")
lc_mflow = data_lc.data("thermocline_Tank.Tank_A.m_flow")

s_T_out = data_s.data("thermocline_Tank.Tank_A.T_out")
fig,ax = plt.subplots(2,1)
ax[0].plot(
    lc_abs/3600,lc_T_out,label="LC model",c="red"
)
ax[0].plot(
    s_abs/3600,s_T_out,label="Surrogate",c="blue"
)

ax[1].plot(
    lc_abs/3600,lc_mflow,label="${\dot{m}_{flow}}$",c ="black", ls="--"
)
ax[1].set_ylabel("Fluid mass flow [kg/s]")

ax[1].set_xlabel("Time [h]")

ax[0].set_ylabel("Fluid outlet temperature [K]")

ax[0].legend()
ax[0].set_xlim(0,lc_abs.max()/3600)
ax[1].set_xlim(0,lc_abs.max()/3600)
plt.show()

# Plot heat loss
lc_Qloss = data_lc.data("thermocline_Tank.Tank_A.Q_loss_total")
s_Qloss = data_s.data("thermocline_Tank.Tank_A.Q_loss_total")

fig,ax = plt.subplots(1,2)
ax[0].plot(
    lc_abs/3600, lc_Qloss/1000, label="LC model"
)
ax[0].plot(
    s_abs/3600, s_Qloss/1000, label="Surrogate"
)

ax[0].set_title("Heat loss comparison")
ax[0].set_ylabel("Heat loss [kWth]")
ax[0].set_xlabel("Time [h]")
ax[0].legend()

ax[1].scatter(
    lc_Qloss/1000, s_Qloss/1000 , c="black",s=0.4
)
ax[1].set_title("45° Plot. R$^2$: %.7f, MAPE: %.3f%%"%(
    r2_score(lc_Qloss, s_Qloss), mean_absolute_percentage_error(lc_Qloss, s_Qloss)
))
ax[1].set_ylabel("Heat Loss Surrogate [kWth]" )
ax[1].set_xlabel("Heat Loss Lump-capacitance [kWth]")

plt.show()