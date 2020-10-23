import matplotlib.pyplot as plt
import seaborn as sns
import pandas as pd
import numpy as np

df = pd.read_csv('./predvstrue.csv')

columns = ['pred','true']
df.columns = columns

df['deltasq'] = (df['pred'] - df['true'])**2
RMSE = (sum(df['deltasq'])/len(df))**0.5
print('RMSE = ',RMSE)

fig,ax = plt.subplots()
sns.distplot(df.pred-df.true,kde=False,ax=ax)
ax.set_xlabel('Delta')
ax.set_ylabel('Count')
ax.set_title('Surrogate model accuracy. RMSE=%s'%(round(RMSE,2)))
plt.show()
