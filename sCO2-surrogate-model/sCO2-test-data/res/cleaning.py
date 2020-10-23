import pandas as pd
import numpy as np

dfraw = pd.read_csv('./res_expensive_test_data.csv')

df = dfraw[dfraw.columns[0:11]]

status = []

for i in range(df.shape[0]):
    if df.eta_gross.iat[i] <= 0 or df.eta_Q.iat[i] <= 0 or df.eta_gross.iat[i] >=1 or df.eta_Q.iat[i] >=1.1:
        status.append('invalid')

    else:
        status.append('valid')

df['status'] = status

from matplotlib import pyplot as plt
import seaborn as sns

sns.lmplot(data=df,x='T_in_ref_blk',y='eta_gross',fit_reg=False)
plt.show()