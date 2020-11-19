import numpy as np 
import pandas as pd
from pymongo import MongoClient
import lib
import os
import datetime
import json
import pprint

now = datetime.datetime.now()
dirname = 'data_emisi_%s%s%s'%(now.strftime('%d'),now.strftime('%m'),now.strftime('%y'))

if os.path.exists(dirname): 
    os.system('rm -rf %s'%dirname)
    os.makedirs(dirname)
else:
    os.makedirs(dirname)

cluster = lib.MongoDB()
database = cluster.load_database("emission")

collection_names = cluster.load_collection_names()
print(collection_names)


#Get raw data
writer = pd.ExcelWriter("%s/raw.xlsx"%(dirname),engine='xlsxwriter')
print(dirname)
for name in collection_names:
    print(name)
    collection = cluster.load_collection(name)
    cursor = cluster.load_cursor()
    df = cluster.gen_dataframe()
    df.to_excel(writer,sheet_name=name,index=False)
writer.save()


#Dictionary Emission Moda Transportasi

CO2_dict = {
    "Kereta":0.774,
    "Jalan Kaki":0,
    "Sepeda":0,
    "Bus":2.68,
    "Mobil":2.41,
    "Motor":2.41,
    "Angkot":2.41
}

CO_dict = {
    "Kereta":0.0002,
    "Jalan Kaki":0,
    "Sepeda":0,
    "Bus":0.011,
    "Mobil":0.04,
    "Motor":0.014,
    "Angkot":0.0431
}

NOX_dict = {
    "Kereta":0.0052,
    "Jalan Kaki":0,
    "Sepeda":0,
    "Bus":0.0119,
    "Mobil":0.002,
    "Motor":0.00029,
    "Angkot":0.0021
}

SO2_dict = {
    "Kereta":0.0139,
    "Jalan Kaki":0,
    "Sepeda":0,
    "Bus":0.000093,
    "Mobil":0.000026,
    "Motor":0.000008,
    "Angkot":0.000029
}

PM2_dict = {
    "Kereta":0.000189,
    "Jalan Kaki":0,
    "Sepeda":0,
    "Bus":0.00042,
    "Mobil":0.00005,
    "Motor":0.000032,
    "Angkot":0.00006
}

FuelEcon_dict = {
    "Kereta":0.03252,
    "Jalan Kaki":0,
    "Sepeda":0,
    "Bus":3.5,
    "Mobil":9.8,
    "Motor":28,
    "Angkot":8
}

hargapohon_dict = {
    "5f2907658cb8b77649ccdc05":10000,
    "5f2907a78cb8b77649ccdc06":45000,
    "5f2907cb8cb8b77649ccdc07":50000,
    "5f2907fd8cb8b77649ccdc08":100000
}

seqpohon_dict = {
    "5f2907658cb8b77649ccdc05":56,
    "5f2907a78cb8b77649ccdc06":93.5,
    "5f2907cb8cb8b77649ccdc07":59.8,
    "5f2907fd8cb8b77649ccdc08":93.5
}

jenispohon_dict = {
    "5f2907658cb8b77649ccdc05":'Bakau',
    "5f2907a78cb8b77649ccdc06":'Meranti',
    "5f2907cb8cb8b77649ccdc07":'Surian',
    "5f2907fd8cb8b77649ccdc08":'Meranti'
}


#Start Post Processing
#Get the dftrips dude!
collection = cluster.load_collection('trips')
cursor = cluster.load_cursor()
dftrips = cluster.gen_dataframe()

#Get the dfusers!
collection = cluster.load_collection('users')
cursor = cluster.load_cursor()
dfusers = cluster.gen_dataframe()

#get dftransaction
collection = cluster.load_collection('transactions')
cursor = cluster.load_cursor()
dftransactions = cluster.gen_dataframe()
collection = cluster.load_collection('trees')
cursor = cluster.load_cursor()
dftrees = cluster.gen_dataframe()

#get dfpenyerapans
collection = cluster.load_collection('penyerapans')
cursor = cluster.load_cursor()
dfpenyerapans = cluster.gen_dataframe()

#List of columns
#Trips
UserName = []
Dist = []
User = []
Moda = []
Jarak = []
IDPerjalanan = []
Penumpang = []
TimeStampPerjalanan = []
CO2=[]
CO = []
NOX = []
SO2= []
PM2 = []

#Transaction
ID_transaction = []
JumlahDana = []
TimeStampTransactions = []
StatusTransaction = []
Waktu=[]

#Penyerapan
#Bersama Mitra
TimeStampBersamaMitra = []
PartnerPenanamBersamaMitra = []
JumlahPohonBersamaMitra = []
JumlahEmisiTerserapBersamaMitra =[]
JenisPohonBersamaMitra = []

#Sendiri
TimeStampSendiri = []
LokasiSendiri = []
TinggiSendiri = []
DiameterSendiri = []
PohonSendiri = []
FotoSendiri = []

for i in range(len(dftrips)):
    print(i)
    #Trip section
    routes = dftrips['routes'].iat[i]
    user = dftrips['user'].iat[i]
    name = dfusers['name'][dfusers['_id']==user].values[0]
    id_trip = dftrips['_id'].iat[i]
    moda = dftrips['transportation'].iat[i]
    penumpang = dftrips['penumpang'].iat[i]
    timestamptrips = dftrips['createdAt'].iat[i]

    #Transaction section
    id_transaksi = 'Belum ditebus'
    dana = 0

    for iters in range(len(dftransactions)):
        if dftransactions.trip.iat[iters] == id_trip:
            id_transaksi = dftransactions['_id'].iat[iters]  
            if dftransactions['amount'].iat[iters] is not None:
                dana = float(dftransactions['amount'].iat[iters])
    
    print(i,dana)
    satuanwaktu = int(dftrips['tripType'].iat[i])
    if satuanwaktu == 1:
        satuanwaktu = 1
    elif satuanwaktu == 2:
        satuanwaktu = 7
    elif satuanwaktu == 3:
        satuanwaktu = 30
    elif satuanwaktu ==4:
        satuanwaktu = 365
    
    status = dftransactions['status'][dftransactions['trip']==id_trip]
    if len(status.values) > 0:
        if status.values[0] is not None:
            status = status.values[0]
        else:
            status = 'None'
    else:
        status = 'None'
    
    timestamp_transaksi = dftransactions['createdAt'][dftransactions['trip']==id_trip]
    if len(timestamp_transaksi.values) > 0:
        if timestamp_transaksi.values[0] is not None:
            ts_transaksi = timestamp_transaksi.values[0]
        else:
            ts_transaksi = 'Belum ditebus'
    else:
        ts_transaksi = 'Belum ditebus'

    print(id_trip)
    #Penyerapan
    bermitra = len(dftransactions['tree'][dftransactions['trip'] == id_trip])>0 and dftransactions['tree'][dftransactions['trip'] == id_trip].values[0] is not None
    sendiri = False
    for j in range(len(dfpenyerapans)):
        idtrippenyerapans = str(dfpenyerapans['tripId'].iat[j])
        if str(id_trip) == idtrippenyerapans:
            sendiri = True


    if bermitra and not sendiri:
        #Bersama Mitra
        idpohon = dftransactions['tree'][dftransactions['trip']==id_trip].values[0]
        stridpohon = str(idpohon)
        ts_bersama_mitra = dftransactions['createdAt'][dftransactions['trip']==id_trip].values[0]
        partnerpenanam = dftrees['partner'][dftrees['_id'] == idpohon].values[0]
        hargapohon = hargapohon_dict[stridpohon]
        seqpohon = seqpohon_dict[stridpohon]
        jenispohon = jenispohon_dict[stridpohon]

        ts_sendiri = None
        lokasi_sendiri = None
        tinggi_sendiri = None
        keliling_sendiri = None
        foto_sendiri = None
        pohon_sendiri = None

    elif sendiri and not bermitra:
        #Sendiri
        for iters in range(len(dfpenyerapans)):
            if dfpenyerapans.tripId.iat[iters] == id_trip:
                ts_sendiri = dfpenyerapans['createdAt'].iat[iters]
                lokasi_sendiri = dfpenyerapans['jenisLokasiId'].iat[iters]
                tinggi_sendiri = dfpenyerapans['tinggiBibit'].iat[iters]
                keliling_sendiri = dfpenyerapans['kelilingBatang'].iat[iters]
                foto_sendiri = dfpenyerapans['photos'].iat[iters]
                pohon_sendiri = dfpenyerapans['pohon'].iat[iters]
                break

        idpohon = None
        ts_bersama_mitra = None
        partnerpenanam = None
        hargapohon = None
        seqpohon = None
        jenispohon = None

    elif sendiri and bermitra:
        idpohon = dftransactions['tree'][dftransactions['trip']==id_trip].values[0]
        stridpohon = str(idpohon)
        ts_bersama_mitra = dftransactions['createdAt'][dftransactions['trip']==id_trip].values[0]
        partnerpenanam = dftrees['partner'][dftrees['_id']==idpohon].values[0]
        hargapohon = hargapohon_dict[stridpohon]
        seqpohon = seqpohon_dict[stridpohon]
        jenispohon = jenispohon_dict[stridpohon]
        
        ts_sendiri = dfpenyerapans['createdAt'][dfpenyerapans['tripId']==id_trip].values[0]
        lokasi_sendiri = dfpenyerapans['jenisLokasiId'][dfpenyerapans['tripId']==id_trip].values[0]
        tinggi_sendiri = dfpenyerapans['tinggiBibit'][dfpenyerapans['tripId']==id_trip].values[0]
        keliling_sendiri = dfpenyerapans['kelilingBatang'][dfpenyerapans['tripId']==id_trip].values[0]
        foto_sendiri = dfpenyerapans['photos'][dfpenyerapans['tripId']==id_trip].values[0]
        pohon_sendiri = dfpenyerapans['pohon'][dfpenyerapans['tripId']==id_trip].values[0]
    
    else:
        ts_sendiri = None
        lokasi_sendiri = None
        tinggi_sendiri = None
        keliling_sendiri = None
        foto_sendiri = None

        idpohon = None
        ts_bersama_mitra = None
        partnerpenanam = None
        hargapohon = None
        seqpohon = None
        jenispohon = None
        pohon_sendiri = None
   
    #Check data type
    isdict = type(routes) is dict
    islistofdict = type(routes) is list
    not_none = 0
    for kk in range(len(moda)):
        if moda[kk] != None:
            not_none += 1
    
    itermoda = 0
    if isdict:
        obj = routes['routes']
        for a in obj:
            keys = a.keys()
            if 'legs' in keys:
                wrapper = a['legs']
                for item in wrapper:
                    Dist.append(float(item['distance'])/1000)
                    User.append(user)
                    UserName.append(name)
                    IDPerjalanan.append(id_trip)
                    Moda.append(moda[itermoda])
                    #Emission calc
                    fuelecon = FuelEcon_dict[moda[itermoda]]
                    d = float(item['distance'])/1000
                    fuel = fuelecon * d
                    CO2.append(CO2_dict[moda[itermoda]] * fuel)
                    CO.append(CO_dict[moda[itermoda]] * fuel)
                    NOX.append(NOX_dict[moda[itermoda]]*fuel)
                    SO2.append(SO2_dict[moda[itermoda]]*fuel)
                    PM2.append(PM2_dict[moda[itermoda]]*fuel)

                    Penumpang.append(int(penumpang[itermoda]))
                    TimeStampPerjalanan.append(timestamptrips)
                    ID_transaction.append(id_transaksi)
                    JumlahDana.append(dana/not_none)
                    StatusTransaction.append(status)
                    Waktu.append(satuanwaktu)
                    TimeStampTransactions.append(ts_transaksi)

                    TimeStampBersamaMitra.append(ts_bersama_mitra)
                    PartnerPenanamBersamaMitra.append(partnerpenanam)
                    if hargapohon is not None:
                        JumlahPohonBersamaMitra.append(dana/not_none/hargapohon)
                        JumlahEmisiTerserapBersamaMitra.append(dana/not_none/hargapohon*seqpohon)
                    else:
                        JumlahPohonBersamaMitra.append(None)
                        JumlahEmisiTerserapBersamaMitra.append(None)

                    JenisPohonBersamaMitra.append(jenispohon)					
						
                    #Sendiri
                    TimeStampSendiri.append(ts_sendiri)
                    LokasiSendiri.append(lokasi_sendiri)
                    TinggiSendiri.append(tinggi_sendiri)
                    DiameterSendiri.append(keliling_sendiri)
                    FotoSendiri.append(foto_sendiri)
                    PohonSendiri.append(pohon_sendiri)

                    itermoda+=1
            else:
                Dist.append(float(a['distance'])/1000)
                User.append(user)
                UserName.append(name)
                IDPerjalanan.append(id_trip)
                Moda.append(moda[itermoda])
                #Emission calc
                fuelecon = FuelEcon_dict[moda[itermoda]]
                d = float(item['distance'])/1000
                fuel = fuelecon * d
                CO2.append(CO2_dict[moda[itermoda]] * fuel)
                CO.append(CO_dict[moda[itermoda]] * fuel)
                NOX.append(NOX_dict[moda[itermoda]]*fuel)
                SO2.append(SO2_dict[moda[itermoda]]*fuel)
                PM2.append(PM2_dict[moda[itermoda]]*fuel)
                Penumpang.append(int(penumpang[itermoda]))
                TimeStampPerjalanan.append(timestamptrips)
                ID_transaction.append(id_transaksi)
                JumlahDana.append(dana/not_none)
                StatusTransaction.append(status)
                Waktu.append(satuanwaktu)
                TimeStampTransactions.append(ts_transaksi)
                itermoda+=1

                TimeStampBersamaMitra.append(ts_bersama_mitra)
                PartnerPenanamBersamaMitra.append(partnerpenanam)
                if hargapohon is not None:
                    JumlahPohonBersamaMitra.append(dana/not_none/hargapohon)
                    JumlahEmisiTerserapBersamaMitra.append(dana/not_none/hargapohon*seqpohon)
                else:
                    JumlahPohonBersamaMitra.append(None)
                    JumlahEmisiTerserapBersamaMitra.append(None)
				
                JenisPohonBersamaMitra.append(jenispohon)				

                #Sendiri
                TimeStampSendiri.append(ts_sendiri)
                LokasiSendiri.append(lokasi_sendiri)
                TinggiSendiri.append(tinggi_sendiri)
                DiameterSendiri.append(keliling_sendiri)
                FotoSendiri.append(foto_sendiri)
                PohonSendiri.append(pohon_sendiri)


    elif islistofdict:
        for b in routes:
            if itermoda==len(moda):
                itermoda = itermoda-1
            if b == None:
                Dist.append(int(-1000))
                User.append(user)
                UserName.append(name)
                IDPerjalanan.append(id_trip)
                Moda.append(moda[itermoda])
                #Emission calc
                fuelecon = FuelEcon_dict[moda[itermoda]]
                d = float(item['distance'])/1000
                fuel = fuelecon * d
                CO2.append(CO2_dict[moda[itermoda]] * fuel)
                CO.append(CO_dict[moda[itermoda]] * fuel)
                NOX.append(NOX_dict[moda[itermoda]]*fuel)
                SO2.append(SO2_dict[moda[itermoda]]*fuel)
                PM2.append(PM2_dict[moda[itermoda]]*fuel)

                Penumpang.append(int(penumpang[itermoda]))
                TimeStampPerjalanan.append(timestamptrips)
                ID_transaction.append(id_transaksi)
                JumlahDana.append(dana/not_none)
                StatusTransaction.append(status)
                Waktu.append(satuanwaktu)
                TimeStampTransactions.append(ts_transaksi)

                TimeStampBersamaMitra.append(ts_bersama_mitra)
                PartnerPenanamBersamaMitra.append(partnerpenanam)
                if hargapohon is not None:
                    JumlahPohonBersamaMitra.append(dana/not_none/hargapohon)
                    JumlahEmisiTerserapBersamaMitra.append(dana/not_none/hargapohon*seqpohon)
                else:
                    JumlahPohonBersamaMitra.append(None)
                    JumlahEmisiTerserapBersamaMitra.append(None)

                JenisPohonBersamaMitra.append(jenispohon)				

                #Sendiri
                TimeStampSendiri.append(ts_sendiri)
                LokasiSendiri.append(lokasi_sendiri)
                TinggiSendiri.append(tinggi_sendiri)
                DiameterSendiri.append(keliling_sendiri)
                FotoSendiri.append(foto_sendiri)
                PohonSendiri.append(pohon_sendiri)

                itermoda+=1
            else:
                Dist.append(b['distance'])
                User.append(user)
                UserName.append(name)
                IDPerjalanan.append(id_trip)
                Moda.append(moda[itermoda])
                #Emission calc
                fuelecon = FuelEcon_dict[moda[itermoda]]
                d = float(item['distance'])/1000
                fuel = fuelecon * d
                CO2.append(CO2_dict[moda[itermoda]] * fuel)
                CO.append(CO_dict[moda[itermoda]] * fuel)
                NOX.append(NOX_dict[moda[itermoda]]*fuel)
                SO2.append(SO2_dict[moda[itermoda]]*fuel)
                PM2.append(PM2_dict[moda[itermoda]]*fuel)

                Penumpang.append(int(penumpang[itermoda]))
                TimeStampPerjalanan.append(timestamptrips)
                ID_transaction.append(id_transaksi)
                JumlahDana.append(dana/not_none)
                StatusTransaction.append(status)
                Waktu.append(satuanwaktu)
                TimeStampTransactions.append(ts_transaksi)

                TimeStampBersamaMitra.append(ts_bersama_mitra)
                PartnerPenanamBersamaMitra.append(partnerpenanam)
                if hargapohon is not None:
                    JumlahPohonBersamaMitra.append(dana/not_none/hargapohon)
                    JumlahEmisiTerserapBersamaMitra.append(dana/not_none/hargapohon*seqpohon)
                else:
                    JumlahPohonBersamaMitra.append(None)
                    JumlahEmisiTerserapBersamaMitra.append(None)
				
                JenisPohonBersamaMitra.append(jenispohon)				

                #Sendiri
                TimeStampSendiri.append(ts_sendiri)
                LokasiSendiri.append(lokasi_sendiri)
                TinggiSendiri.append(tinggi_sendiri)
                DiameterSendiri.append(keliling_sendiri)
                FotoSendiri.append(foto_sendiri)
                PohonSendiri.append(pohon_sendiri)
                itermoda+=1

res = pd.DataFrame(zip(
    User,
    UserName,
    IDPerjalanan,
    TimeStampPerjalanan,
    Dist,
    Moda,
    Penumpang,
    CO2,
    CO,
    NOX,
    SO2,
    PM2,
    ID_transaction,
    TimeStampTransactions,
    Waktu,
    JumlahDana,
    StatusTransaction,
    TimeStampBersamaMitra,
    PartnerPenanamBersamaMitra,
    JumlahPohonBersamaMitra,
    JumlahEmisiTerserapBersamaMitra,
    JenisPohonBersamaMitra,
    TimeStampSendiri,
    LokasiSendiri,
    PohonSendiri,
    TinggiSendiri,
    DiameterSendiri,
    FotoSendiri
    ),
columns=[
    'ID_User',
    'Name',
    'Trip_ID',
    'Trip_TimeStamp',
    'Trip_Distance_km',
    'Trip_Mode',
    'Trip_Passenger',
    'Trip_CO2_kg',
    'Trip_CO_kg',
    'Trip_NOX_kg',
    'Trip_SO2_kg',
    'Trip_PM2_kg',
    'Transaction_ID',
    "Transaction_TimeStamp",
    'Transaction_Interval_inDays',
    'Transaction_Amount',
    'Transaction_Status',
    'BersamaMitra_TimeStamp',
    'BersamaMitra_PartnerPenanam',
    'BersamaMitra_JumlahPohon',
    'BersamaMitra_EmisiTerserap_in_kg',
    'BersamaMitra_JenisPohon',
    'TanamSendiri_TimeStamp',
    'TanamSendiri_Lokasi',
    'TanamSendiri_JenisPohon',
    'TanamSendiri_TinggiPohon',
    'TanamSendiri_Keliling_cm',
    'TanamSendiri_Foto'
    ])
print(res.head())
directory = './CleanData'
if not(os.path.exists(directory)):
	os.makedirs(directory)
writer = pd.ExcelWriter("./CleanData/DataBaseClean_%s%s%s.xlsx"%(now.strftime('%d'),now.strftime('%m'),now.strftime('%y')),engine='xlsxwriter')
res.to_excel(writer,sheet_name='Sheet1',index=False)
writer.save()
res.to_csv("./CleanData/DataBaseClean_%s%s%s.csv"%(now.strftime('%d'),now.strftime('%m'),now.strftime('%y')),index=False)



    
