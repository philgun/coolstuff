import pandas as pd
import numpy as np
from matplotlib import pyplot as plt
import seaborn as sns

df =pd.read_csv('predvstrue.csv',header=None)

df.columns = ['pred','true']

print(df.describe())

dfsort = df[df.true==0]
dfsort = dfsort[dfsort.pred>0]

sns.distplot(dfsort.pred,kde=False,bins=500)
plt.show()

'''
fig,ax = plt.subplots(1)

ax.scatter(np.arange(0,len(df)),df[df.columns[1]]-df[df.columns[0]],s=2,label='true - prediction')
ax.legend()

plt.show()
'''
