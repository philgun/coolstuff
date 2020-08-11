"""
Created on Wed Jul 29 09:38:58 2020

@author: cheng
"""
# SAM csv format: https://sam.nrel.gov/images/web_page_files/sam-help-2020-2-29-r1.pdf
# SAM doc: https://www.nrel.gov/docs/fy18osti/67399.pdf

import os
import pandas as pd
import csv

def shift(record,timezone):
    ''' only tested for positive time zones '''
    start = 24 - (timezone + 1)
    return record[start:24] + record

elevation_dic = {26.212576:9.5, 33.590184:20.8, 34.342542:25.9, 34.385289:19.8, 34.693725:21.5,	35.181451:23.8,	35.6804:22.5,	36.695822:19.6,	38.268195:56.6,	43.061771:37.1}
name_dic = {26.212576:'Okinawa', 33.590184:'Kyushu', 34.342542:'Shikoku', 34.385289:'Chugoku', 34.693725:'Kansai',	35.181451:'Chubu', 35.6804:'Tokyo', 36.695822:'Hokuriku',	38.268195:'Tohoku',	43.061771:'Hokkaido'}

def solcast_to_sam(indir,outdir,file,timezone,modelyear):
    data = pd.read_csv(os.path.join(indir,file))
    lat = file.split("_")[0]
    lon = file.split("_")[1]
    elevation = elevation_dic[float(lat)]
    air_t = shift(data["AirTemp"].values.tolist(),timezone)
    dew_t = shift(data["DewpointTemp"].values.tolist(),timezone)
    dhi = shift(data["Dhi"].values.tolist(),timezone)
    dni = shift(data["Dni"].values.tolist(),timezone)
    snow = shift(data["SnowDepth"].values.tolist(),timezone)
    pressure = shift(data["SurfacePressure"].values.tolist(),timezone)
    wind_d = shift(data["WindDirection10m"].values.tolist(),timezone)
    wind_s = shift(data["WindSpeed10m"].values.tolist(),timezone)
    datetime = data["PeriodStart"].values.tolist()
    year = [2007] + [int(i.split("-")[0]) for i in datetime]
    month = [1] + [int(i.split("-")[1]) for i in datetime]
    day = [1] + [int(i.split("-")[2].split("T")[0]) for i in datetime]
    hour = [0] + [int(i.split("-")[2].split("T")[1].split(":")[0]) for i in datetime]
    outfile = os.path.join(outdir,name_dic[float(lat)] + "_" + str(modelyear) + "_SAM.csv")
    with open(outfile, "w", newline = '') as csvfile:
        writer = csv.writer(csvfile)
        writer.writerow(["Latitude","Longitude","Time Zone","Elevation"])
        writer.writerow([lat,lon,timezone,elevation])
        writer.writerow(["Year","Month","Day","Hour","DNI","DHI","Temperature","Dew Point","Wind Speed","Wind Direction","Pressure","Snow Depth"])
        for i in range(len(hour)):
            if year[i] == modelyear:
                writer.writerow([year[i],month[i],day[i],hour[i],dni[i],dhi[i],air_t[i],dew_t[i],wind_s[i],wind_d[i],pressure[i],snow[i]])
    
indir = r"D:\Dropbox (PV at ANU)\PhD\Japan\Solar\Solcast\raw"
outdir = r"D:\Dropbox (PV at ANU)\PhD\Japan\Solar\Solcast"
files = [i for i in os.listdir(indir) if i[-4:] == ".csv"]
for file in files:
    for year in [2017,2018,2019]:
        solcast_to_sam(indir,outdir,file,9,year)
        print(file,year,": Complete")