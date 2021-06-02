import numpy as np 
import pandas as pd
from matplotlib import pyplot as plt
import seaborn as sns

sns.set_style('whitegrid')

df = pd.read_csv('MRT.csv')

a = df['Seberapa sering Anda menggunakan MRT Jakarta Sebelum Pandemi COVID19'].value_counts(dropna=True)

label = a.index.tolist()
val = []
for i in range(len(label)):
	val.append(a[i])

med = 15.
small = 12.5
fig,ax = plt.subplots(1)

ax.pie(
	val,labels=label,autopct="%1.1f%%"
)
ax.axis('equal')
ax.set_title("Frekuensi Penggunaan MRT Responden (%s Data)\nTotal Data: %s, Tidak Menjawab: %s"%(sum(val),len(df),len(df)-sum(val)),fontsize=med)
plt.show()

#Dampak PSBB terhadap Frekuensi
dfFrekuensi = df[["Frekuensi menggunakan MRT Jakarta Per Minggu sebelum COVID-19 (sebelum Februari 2020) - Mohon isi 0 jika ada bukan pengguna rutin perminggu:","Frekuensi menggunakan MRT Jakarta Per Minggu saat pandemi COVID -19 - PSBB (Maret-Juni 2020) - Mohon isi 0 jika ada bukan pengguna rutin perminggu:","Frekuensi menggunakan MRT Jakarta Per Minggu saat pandemi COVID -19 - PSBB transisi (Juni sampai saat ini)- Mohon isi 0 jika ada bukan pengguna rutin perminggu:"]]

dfFrekuensi = dfFrekuensi.dropna()

dfFrekuensi.columns = ["sebelumPSBB","PSBB","PSBB_transisi"]

#************************ Change in Frequency
dfFrekuensi['deltaFrekuensi_1'] = dfFrekuensi.sebelumPSBB - dfFrekuensi.PSBB
dfFrekuensi['deltaFrekuensi_2'] = dfFrekuensi.PSBB - dfFrekuensi.PSBB_transisi
dfFrekuensi['deltaFrekuensi_3'] = dfFrekuensi.sebelumPSBB - dfFrekuensi.PSBB_transisi


#************************ Flag
dfFrekuensi['flag1'] = dfFrekuensi.deltaFrekuensi_1 > 0
dfFrekuensi['flag2'] = dfFrekuensi.deltaFrekuensi_2 > 0
dfFrekuensi['flag3'] = dfFrekuensi.deltaFrekuensi_3 > 0

dfs = [
	dfFrekuensi.sebelumPSBB,
	dfFrekuensi.PSBB,
	dfFrekuensi.PSBB_transisi,
	dfFrekuensi.deltaFrekuensi_1,
	dfFrekuensi.deltaFrekuensi_2,
	dfFrekuensi.deltaFrekuensi_3,
	dfFrekuensi.flag1,
	dfFrekuensi.flag2,
	dfFrekuensi.flag3
]

xlabels = [
	"Frekuensi Penggunaan MRT",	
	"Frekuensi Penggunaan MRT",	
	"Frekuensi Penggunaan MRT",	
	"Perubahan Frekuensi Penggunaan MRT",
	"Perubahan Frekuensi Penggunaan MRT",
	"Perubahan Frekuensi Penggunaan MRT",
]

titles = [
	"Frekuensi Penggunaan MRT Sebelum PSBB",
	"Frekuensi Penggunaan MRT Saat PSBB",
	"Frekuensi Penggunaan MRT Saat PSBB Transisi",
	"Perubahan Frekuensi Penggunaan (non PSBB - PSBB)",
	"Perubahan Frekuensi Penggunaan (PSBB - PSBB transisi)",
	"Perubahan Frekuensi Penggunaan Total (non PSBB - PSBB transisi)"
]

fig,ax = plt.subplots()
sns.boxplot(
	data = pd.melt(dfFrekuensi[['sebelumPSBB','PSBB','PSBB_transisi']]),
	x = "variable", y = "value", showfliers = False
)
ax.set_xlabel("Periode",fontsize=med)
ax.set_ylabel("Frekuensi Penggunaan MRT",fontsize=med)
plt.show()







