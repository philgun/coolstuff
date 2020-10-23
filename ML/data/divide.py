import pandas as pd

df = pd.read_csv('/home/philgun/Documents/codecodecode/codecodecode/ML/data/datarobustrcv.csv')

print(df)
df = df.sample(frac=1).reset_index(drop=True)

dftraining = df[0:1000]
dftest = df[1000:]

dftraining.to_csv('trainingdatarobustrcv.csv',index=False)
dftest.to_csv('testdatarobust.csv',index=False)
