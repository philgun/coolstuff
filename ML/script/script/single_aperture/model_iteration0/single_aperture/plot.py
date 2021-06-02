import pandas as pd
from matplotlib import pyplot as plt
from sklearn.metrics import r2_score,mean_squared_error

df = pd.read_csv('prediction_vs_test.csv')
for i in range(len(df)):
	if df.Prediction.iloc[i] >1:
		df.Prediction.iloc[i] = 1

score = r2_score(df.Prediction,df.Test)

fig,axes = plt.subplots(2,4)
fig.tight_layout(pad=2)

names = df.columns
med = 12.5

for i , ax in enumerate(axes.flat):
	if i == 8:
		break
	ax.scatter(df[names[i]],df.Prediction,label="Prediction",s=10)
	ax.scatter(df[names[i]],df.Test,label="Test",s=10)
	ax.set_title("%s"%(names[i]))
	ax.legend(fontsize=med)

fig.suptitle("Model R$^2$ = %s"%(round(score,2)))
plt.show()
