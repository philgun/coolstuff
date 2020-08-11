import numpy as np

data=np.genfromtxt('raw.csv',delimiter=',', dtype=None,encoding='ascii')

batasan = ["2007","2008","2009","2010","2011","2012","2013","2014","2015","2016","2017","2018","2019"]

for tahun in batasan:
	print("Start processing %s"%(tahun))
	#Instantiate target
	target=[]

	#Buat heading
	data1="country,source,state,timezone,lat,lon,elevation,Temperature Units,Azimuth Units,cloudopacity Units,Dew Point Units,DHI Units,DNI Units,EBH Units,GHI Units,Pw Units,Relative humidity Units,Snow Depth Units,Pressure Units,Wind Direction Units,Wind Speed Units,Zenith Units"
	data2=""
	data3="Indonesia,Solcast https://solcast.com,N/A,7,-6.2088,106.8456,10,deg.C,degree,%,deg.C,W/m2,W/m2,W/m2,W/m2,cm,%,cm,mbar,Degrees,m/s,degree"
	data4=""
	data5="Year,Month,Day,Hour,Minute,Temperature,Azimuth,cloudopacity,Dew Point,DHI,DNI,EBH,GHI,Pw,Relative humidity,Snow Depth,Pressure,Wind Direction,Wind Speed,Zenith,,"
	data6=""

	target.append(data1)
	target.append(data2)
	target.append(data3)
	target.append(data4)
	target.append(data5)
	target.append(data6)

	#heading done

	############ Important data ##############
	#data yang lu butuhkan itu dimulai dari row 1 - 115630

	size=data.shape[0]

	for i in range(1,size):
		data_row = data[i]
		year= data[i][1][0:4] #year done
		if year == tahun:
			fn = "%s_out.csv"%(tahun)

			month =	data[i][1][5:7] #month done
			if month[0] == "0":
				month = month[-1]

			day = data[i][1][8:10] #day done
			if day[0] == "0":
				day = day[-1]

			hour_raw = data[i][1][11:13] #hour in string
			if hour_raw[0] == "0":
				hour = hour_raw[-1]
			else:
				hour = hour_raw
			
			minute = "0" #min done

			temp = float(data[i][3])
			azi = float(data[i][4])
			opac = float(data[i][5])
			dew = float(data[i][6])
			dhi = float(data[i][7])
			dni = float(data[i][8])
			ebh = float(data[i][9])
			ghi = float(data[i][10])
			pw = float(data[i][11])
			hum = float(data[i][12])
			snow = float(data[i][13])
			press = float(data[i][14])
			wind_dir = float(data[i][15])
			wind_speed = float(data[i][16])
			zenith = float(data[i][17])
			data_merge="%d,%d,%d,%f,%f,%f,%f,%f,%f,%f,%f,%f,%f,%f,%f,%f,%f,%f,%f,%f,,"%(int(year),int(month),int(day),int(hour),int(minute),temp,azi,opac,dew,dhi,dni,ebh,ghi,pw,hum,snow,press,wind_dir,wind_speed,zenith)
			space=""
			target.append(data_merge)
			target.append(space)
	np.savetxt(fn, target, fmt='%s', delimiter=',',newline='')

