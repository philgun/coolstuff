import numpy as np
import pandas as pd
from matplotlib import pyplot as plt
import seaborn as sns

fndata = '/home/philgun/Documents/codecodecode/codecodecode/sCO2-surrogate-model/sCO2-test-data/res/s_CO2_PB_training_data.csv'
df =pd.read_csv(fndata)

df = df[df.columns[0:11]]

print(df.head())

status = []

for i in range(len(df)):
    if df.eta_gross.iat[i] <= 0 or df.eta_Q.iat[i] <= 0 or df.eta_gross.iat[i] >=1 or df.eta_Q.iat[i] >=1.1:
        status.append('invalid')

    else:
        status.append('valid')

df['status'] = status

df_broken = df[df.status=='invalid']

med=15
lm = sns.lmplot(data=df,x='p_high',y='eta_gross',fit_reg=False,hue='status')
ax = lm.axes
ax[0,0].set_xlabel('$p_{high}$ [Pa]',fontsize=med)
ax[0,0].set_ylabel('$\eta_{gross,PB}$',fontsize=med)


lm = sns.lmplot(data=df,x='T_in_ref_blk',y='eta_gross',fit_reg=False,hue='status')
ax = lm.axes
ax[0,0].set_xlabel('$T_{HTF,in,des}$ [K]',fontsize=med)
ax[0,0].set_ylabel('$\eta_{gross,PB}$',fontsize=med)

lm = sns.lmplot(data=df,x='T_in_ref_blk',y='dTemp_HTF_PHX',fit_reg=False,hue='status')
ax = lm.axes
ax[0,0].set_xlabel('$T_{HTF,in,des}$ [K]',fontsize=med)
ax[0,0].set_ylabel('$\Delta_{HTF,temp,des}$',fontsize=med)

lm = sns.lmplot(data=df,x='T_in_ref_blk',y='Pinch_PHX',fit_reg=False,hue='status')
ax = lm.axes
ax[0,0].set_xlabel('$T_{HTF,in,des}$ [K]',fontsize=med)
ax[0,0].set_ylabel('pinch PHX [$^o$C]',fontsize=med)

lm = sns.lmplot(data=df,x='T_in_ref_blk',y='p_high',fit_reg=False,hue='status')
ax = lm.axes
ax[0,0].set_xlabel('$T_{HTF,in,des}$ [K]',fontsize=med)
ax[0,0].set_ylabel('$p_{high}$ [Pa]',fontsize=med)


plt.show()