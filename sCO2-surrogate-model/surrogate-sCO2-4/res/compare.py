import pandas as pd
import numpy as np
import matplotlib.pyplot as plt
import seaborn as sns

sns.set_style('darkgrid')

df_new = pd.read_csv('res_new_model.csv')
df_old = pd.read_csv('res_old_model.csv')

#residual plot
columns = []
base = 'residual'
varname = [
    ' pinchPHX',
    ' eta_gross',
    ' eta_cycle',
    ' UA_HTR',
    ' UA_LTR',
    ' UA_HX',
    ' W_turb_des',
    ' W_comp_des',
    ' W_recomp_des',
    ' UA_cooler',
    ' Q_HX_des',
    ' delta_temp_pcl_HX',
    ' C_PB']

for name in varname:
    header = base + name
    columns.append(header)

newdf = pd.DataFrame()

for i in range(9,22):
    newdata = df_new[df_new.columns[i]] - df_old[df_old.columns[i]]
    newdf = pd.concat([newdf,newdata],axis=1)


names = newdf.columns

fig,axes = plt.subplots(5,3)
fig.tight_layout(pad=0.5)

for i,ax in enumerate(axes.flat):
    if i < 13:
        ax.hist(newdf[names[i]],bins=100)
        ax.set_title('Residual %s'%(names[i]))
        ax.set_ylabel('Frequency')
        ax.set_xlabel('Residual Value')
    

plt.show()