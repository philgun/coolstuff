import pandas as pd

df = pd.read_csv("kotabesar.csv")
for i in range(len(df)):
    prov = df.Provinsi.iloc[i]
    text = prov.split()
    prov_name = "".join(text)
    print(prov_name)