import numpy as np
import pandas as pd 
import json
from pprint import pprint
import matplotlib.pyplot as plt 
import seaborn as sns

with open("./data-populasi-jakarta/populasi_kecamatan_jaksel.json") as f:
    data = json.load(f)

listkelurahan = []
listkecamatan = []
for i in range(len(data)):
	d = data[i]
	k = d['kelurahan']
	c = d['kecamatan']
	k = k.lower()
	c = c.lower()
	listkelurahan.append(k)
	listkecamatan.append(c)

df =  pd.read_csv("./data-coffee-shop/GMAPSJAKSEL.csv")

# Filter out kopi kenangan
f = []

for i in range(len(df)):
	name = df.Name.iat[i]
	namesplit = name.split(" ")
	if "Kenangan" in namesplit or "kenangan" in namesplit:
		f.append("TRUE")
	else:
		f.append("FALSE")

df["isKenangan"] = f
df = df[df.isKenangan == "FALSE"]	

#Separate kelurahan from Address
kelurahanCS=[]
for a in df['Address']:
	asplit = a.split(',')
	kel = asplit[-2].lower()
	kelurahanCS.append(kel)

#cleaning data from abbreviation
abbdict = {'kb.': 'kebun','bend.': 'bendungan', 'tim.':'timur', 'west':'barat',
			'rw.' : 'rawa', 'bar.':'barat','sel.':'selatan','kby':'kebayoran',
			'pd.':'pondok','lb.':'lebak','tj.':'tanjung','br':'baru'}
listkeys = list(abbdict.keys())
kelCSclean=[]
for i in range(len(kelurahanCS)):
	k = kelurahanCS[i]
	ksplit = k.split(' ')
	newname = []
	for a in ksplit[1:]:
		if a in listkeys:
			a = abbdict[a]
		newname.append(a)
	kelclean = " ".join(newname)
	kelCSclean.append(kelclean)

assert(len(kelCSclean) == len(df))

df['Kelurahan'] = kelCSclean


#pisahkan CS sesuai kecamatan
kecamatan = []
for i in range(len(df)):
	k = df.Kelurahan.iat[i]
	index = 999999
	for j in range(len(listkelurahan)):
		if k == listkelurahan[j]:
			index = j
	if index < 1000:
		kecamatan.append(listkecamatan[index])
	else:
		kecamatan.append("Null")

#Bersihkan data dari non-Jaksel Coffee Shop
assert(len(kecamatan) == len(df))
df['Kecamatan'] = kecamatan
df = df[df['Kecamatan'] != 'Null']

#Mencari jumlah CS per kecamatan dan kelurahan
a = []
b = []
uniquekelurahan = df['Kelurahan'].unique()
uniquekecamatan = df['Kecamatan'].unique()
for k in uniquekelurahan:
	dfdummy = df[df['Kelurahan'] == k]
	a.append(len(dfdummy))

for k in uniquekecamatan:
	dfdummy = df[df['Kecamatan'] == k]
	b.append(len(dfdummy))

dfkelurahan = pd.DataFrame(zip(uniquekelurahan,a),columns=['Kelurahan','JumlahCS'])
dfkecamatan = pd.DataFrame(zip(uniquekecamatan,b),columns=['Kecamatan','JumlahCS'])

#Memasukkan populasi per kelurahan
popwanita = []
poppria = []
poptotal = []
for i in range(len(dfkelurahan)):
	k =  dfkelurahan['Kelurahan'].iat[i]
	for j in range(len(data)):
		d = data[j]
		kel = d['kelurahan'].lower()
		if k == kel:
			popwanita.append(float(d['jumlah_perempuan']))
			poppria.append(float(d['jumlah_lakilaki']))
			poptotal.append(float(d['jumlah_lakilaki']) + float(d['jumlah_perempuan']))

dfkelurahan['PopWanita'] = popwanita
dfkelurahan['PopPria'] = poppria
dfkelurahan['PopTotal'] = poptotal

#Memasukkan populasi kecamatan
x = 'XYZ'
kc = []
popwanita = []
poppria = []
poptotal = []

for j in range(len(data)):
	d = data[j]
	k = d['kecamatan'].lower()
	if k != x:
		kc.append(k)
		popwanita.append(float(d['jumlah_perempuan']))
		poppria.append(float(d['jumlah_lakilaki']))
		poptotal.append(float(d['jumlah_perempuan'])+float(d['jumlah_lakilaki']))
		x = k
	else:
		popwanita[-1] = popwanita[-1] + float(d['jumlah_perempuan'])
		poppria[-1] = poppria[-1] + float(d['jumlah_lakilaki'])
		poptotal[-1] = poptotal[-1] + float(d['jumlah_perempuan'])+float(d['jumlah_lakilaki'])

assert(len(kc)==len(popwanita))
assert(len(kc)==len(poppria))
assert(len(kc)==len(poptotal))

popW,popL,popT=[],[],[]

for i in range(len(dfkecamatan)):
	k = dfkecamatan['Kecamatan'].iat[i]
	for j in range(len(kc)):
		kt = kc[j]
		if k==kt:
			popW.append(popwanita[j])
			popL.append(poppria[j])
			popT.append(poptotal[j])

dfkecamatan['PopWanita'] = popW
dfkecamatan['PopPria'] = popL
dfkecamatan['PopTotal'] = popT

#Memasukkan data CS per kelurahan dan CS per kecamatan
popcskelurahan=[]
popcskecamatan=[]

for i in range(len(dfkelurahan)):
	cs = dfkelurahan['JumlahCS'].iat[i]
	popcs = dfkelurahan.PopTotal.iat[i] / cs
	popcskelurahan.append(popcs)
dfkelurahan['KepadatanPendudukPerCS'] = popcskelurahan

for i in range(len(dfkecamatan)):
	cs = dfkecamatan['JumlahCS'].iat[i]
	popcs = dfkecamatan.PopTotal.iat[i] / cs
	popcskecamatan.append(popcs)
dfkecamatan['KepadatanPendudukPerCS'] = popcskecamatan

dfkecamatan.to_csv("a.csv",index=False)

x = []
y = []
for i in range(len(df)):
	k = df.Kelurahan.iat[i]
	for j in range(len(dfkelurahan)):
		kl = dfkelurahan['Kelurahan'].iat[j]
		if k == kl:
			x.append(dfkelurahan['KepadatanPendudukPerCS'].iat[j])

	km = df.Kecamatan.iat[i]
	for k in range(len(dfkecamatan)):
		kcmt = dfkecamatan['Kecamatan'].iat[k]
		if km == kcmt:
			y.append(dfkecamatan['KepadatanPendudukPerCS'].iat[k])

assert(len(x)==len(df))
assert(len(y)==len(df))
df['PopulasiKelurahanPerCS'] = x
df['PopulasiKecamatanPerCS'] = y

#Menambahkan kolom popularitas x kepuasan
newname = 'PopularitasXKepuasan'
val = df.Rating * df.NumberOfUser
df.insert(loc=3,column=newname,value=val)
df = df.sort_values(by='PopularitasXKepuasan',ascending=False)
df = df.reset_index(drop=True)

#Menambahkan kolom tiering
tiering = []
for i in range(len(df)):
	if i >= 0 and i < 5:
		a = "Super High"
	elif i >= 5 and i < 10:
		a = "High"
	elif i >=10 and i < 20:
		a = "Medium High"
	elif i >=20 and i < 30:
		a = "Medium"
	else:
		a = "Low"
	tiering.append(a)
df.insert(loc=4,column="Tiering",value=tiering)

#Save CSV
df.to_csv("CS_JAKSEL_COMPLETE.csv",index=False)

#Analisis

#Coba plot
fontsize = 20
sns.set_style('darkgrid')
sns.set(font_scale = 1.1)
a = sns.lmplot(
				data=df[df['PopularitasXKepuasan']>750],x='PopulasiKecamatanPerCS',y='PopularitasXKepuasan'
				,hue='Tiering',fit_reg=False, scatter_kws={"s":df['']} 
				,palette={	
							"Low":"k",
						 	"Medium":"g",
						 	"Medium High":"yellow",
						 	"High":"b",
						 	"Super High":"red"
						 }
			  )

plt.xlabel("Kepadatan Penduduk Kecamatan per Coffeeshop [Orang/Coffee Shop]",fontsize=fontsize)
plt.ylabel("Metric Kepuasan Pelanggan dan Kepopuleran [-]",fontsize=fontsize)
plt.xticks(fontsize = 15)
plt.yticks(fontsize = 15)
plt.title("Persebaran Coffeeshop Jakarta Selatan",fontsize=fontsize)
plt.show()














