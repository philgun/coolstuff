import pandas as pd
import numpy as np
from matplotlib import pyplot as plt

df =pd.read_csv('predvstrue.csv',header=None)
fig,ax = plt.subplots(1)

ax.scatter(np.arange(0,len(df)),df[df.columns[1]]-df[df.columns[0]],s=2,label='eta_Q')
ax.legend()
ax.set_ylim(-0.02,0.02)

plt.show()
