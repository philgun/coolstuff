import pandas as pd

df = pd.read_csv('./data_receiver/robust_receiver_training_data_9_Oct_2020.csv')

dfsorted = df[df.eta_rcv<=0.05]
print(dfsorted)
print(dfsorted.describe())
