import pandas as pd
import numpy as np
import glob
import matplotlib.pyplot as plt
import seaborn as sns
from matplotlib.ticker import (MultipleLocator, AutoMinorLocator)


fns = ["TIKI_BandarLampung.csv","TIKI_Bandung.csv","TIKI_Batam.csv","TIKI_Jakarta.csv","TIKI_Makassar.csv","TIKI_Medan.csv","TIKI_Padang.csv","TIKI_Palembang.csv","TIKI_Pekanbaru.csv","TIKI_Semarang.csv","TIKI_Surabaya.csv"]

LuasDaerah = [197.2,167.7,1595,661.5,199.3,265.1,695,400.2,632.3,373.8,350.5]

latLon_Bandara = [
[-5.25916667,105.17888889], 	#Radin Inten II, Bandar Lampung
[-6.90055556,107.57638889], 	#Husein Sastranegara International Airport, Bandung
[1.12083333,104.11861111], 		#Hang Nadim International Airport, Batam
[-6.12555556,106.65583333], 	#Soekarno-Hatta International Airport, DKI Jakarta
[-5.06166667,119.55416667], 	#Sultan Hassanuddid International Airport, Makassar
[3.64222222,98.88527778], 		#Kualanamu International Airport, Medan
[-0.78666667, 100.28055556], 	#Minagkabau International Airport, Padang
[-2.90027778,104.70000000], 	#Sultan Mahmud Badaruddin II International Airport, Palembang
[-0.46083333,101.4444], 		#Sultan Syarif Kasim II International Airport, Pekanbaru
[-6.97138889,110.37416667], 	#Ahmad Yani International Airport, Semarang
[-7.37972222,112.78694444] 		#Juanda International Airport, Semarang
] 

provinsi = ["Lampung","JawaBarat","KepulauanRiau","DKIJakarta","SulawesiSelatan","SumateraUtara","SumateraBarat","SumateraSelatan","Riau","JawaTengah","JawaTimur"]

try:
	assert(len(LuasDaerah) == len(fns))
except:
	raise ValueError("Exception thrown, length LuasDaerah is not the same as length fns")

try:
	assert(len(provinsi) == len(fns))
except:
	raise ValueError("Exception thrown, length provinsi is not the same as length fns")


f = open("JarakRumahkeTIKI.csv","w")
f.write("Kota,Jarak ke TIKI (km)\n")
f.close()

itr = 0
for fn in fns:
	df = pd.read_csv(fn)
	lenTIKI = len(df)
	Area = LuasDaerah[itr]
	#Luas daerah per jumlah tiki ~> area yang harus dilayani per tiki. Asumsi tiki berada di tengah grid, maka jarak terjauh adalah 1/2 dari sqrt(daerah yang dilayani)
	distance = (Area/lenTIKI)**(0.5) * 0.5

	namaKota = fn.replace("TIKI_","")
	namaKota = namaKota.replace(".csv","")
	print(namaKota,distance)
	with open("JarakRumahkeTIKI.csv","a") as f:
		f.write("%s,%s\n"%(namaKota,distance))
	
	f =  open("./dataJarakTikiKeBandaraPerProvinsi/%s.csv"%(provinsi[itr]),"w")
	f.write("Jarak\n")
	f.close()

	lat_Airport, lon_Airport = latLon_Bandara[itr]
	for j in range(len(df)):
		lat_TIKI = df.lat.iloc[j]
		lon_TIKI = df.lon.iloc[j]
		Δlat = lat_TIKI - lat_Airport
		Δlon = lon_TIKI - lon_Airport
		Δdegree = (Δlat*Δlat + Δlon*Δlon)**0.5 #Eucledian distance
		distance = Δdegree * 111.32 #https://en.wikipedia.org/wiki/Decimal_degrees
		#print(distance)
		f =  open("./dataJarakTikiKeBandaraPerProvinsi/%s.csv"%(provinsi[itr]),"a")
		f.write("%s\n"%(distance))
		f.close()
	
	fn_df_cdf = "./dataJarakTikiKeBandaraPerProvinsi/%s.csv"%(provinsi[itr])
	df_cdf = pd.read_csv(fn_df_cdf)
	
	fig,ax = plt.subplots(1,figsize=(8, 8))
	kwargs = {'cumulative': True}
	sns.distplot(
		df_cdf.Jarak, hist_kws=kwargs, kde_kws=kwargs
	)
	ax.set_xlabel("Distance from TIKI to provinicial airport (km)")
	ax.set_ylabel("Likelihood of distance to happen")
	ax.set_title("Distance from TIKI to provincial international airport - %s"%(provinsi[itr]))	

	ax.xaxis.grid(True, which='both')
	ax.yaxis.grid(True, which='both')
	ax.yaxis.set_ticks(np.arange(0,1.1,0.1))
	ax.xaxis.set_minor_locator(MultipleLocator(2.5))
	ax.yaxis.set_minor_locator(MultipleLocator(0.05))

	plt.savefig(
		"./fig/DistanceTIKItoAirport_%s.png"%(provinsi[itr])
	)
	
	
	itr +=1





	
	
	


