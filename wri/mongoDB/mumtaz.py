import pandas as pd

df = pd.read_csv("/home/philgun/Documents/coolstuff/coolstuff/wri/mongoDB/CleanData/DataBaseClean_231120.csv")

num = len(df.ID_User.unique())
print(num)
