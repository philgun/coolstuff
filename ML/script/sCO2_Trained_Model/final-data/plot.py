import pandas as pd
import numpy as np
from matplotlib import pyplot as plt

df =pd.read_csv('predvstrue.csv',header=None)
fig,ax = plt.subplots(1,2)

ax[0].scatter(np.arange(0,len(df)),df[df.columns[2]]-df[df.columns[0]],s=2,label='eta_gross')
ax[0].legend()
ax[0].set_ylim(-0.02,0.02)
ax[1].scatter(np.arange(0,len(df)),df[df.columns[3]]-df[df.columns[1]],s=2,label='eta_Q')
ax[1].legend()
ax[1].set_ylim(-0.02,0.02)
plt.show()
