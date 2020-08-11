import pandas as pd 
import numpy as np
from datetime import datetime
import lib

#TRACKING APPS for 2019

fn_raw = "/home/philgun/Desktop/Adena/data-adena/sales-by-customer/sales_by_customer_01-01-2019_07-07-2020.csv"

lib.cleaningData(fn_raw)

#Import data
df_raw = pd.read_csv(fn_raw)

# START PROCESSING AND CLEANING THE RAW DATA

#Change date to date time objext
for i in range(len(df_raw)):
    datetime_str = df_raw.at[i,'Date']
    datetime_str = datetime_str[0:10]
    datetime_object = datetime.strptime(datetime_str, '%d/%m/%Y')
    df_raw.at[i,'Date'] = datetime_object

lb_year = datetime(2020,1,1)
ub_year = datetime(2021,1,1)
today = datetime.today()

#Get the sales data for 2019
df_track_raw = df_raw[(df_raw['Date'] >= lb_year) & (df_raw['Date'] < ub_year)]

#Drop Tuku dan Beragam
df_track_raw = df_track_raw[(df_track_raw['Customer'] != "Tuku") & (df_track_raw['Customer'] != "Beragam Coffee Business Solution")]
print(df_track_raw.head(5))

#Get the unique customer name
customerListTrackingApps = df_track_raw['Customer'].unique()

# Create the matrix result ~ 12 means 12 months
if today >= ub_year:
    cols = 12
else:
    cols = today.month

print(cols)

resmatrix = np.zeros((len(customerListTrackingApps),cols))
list_name_watchlist = []
index = 0
for name in customerListTrackingApps:
    # Get the data for only 1 customer name
    df = df_track_raw[df_track_raw['Customer'] == name]
    
    #Loop and add to resmatrix
    for i in range(len(df)):
        date = df['Date'].iat[i]
        index_month = int(date.month)-1
        total_trans = round(df['TotalTransaction'].iat[i] / 1e6,2)
        resmatrix[index,index_month] = resmatrix[index,index_month] + total_trans

    index += 1
    list_name_watchlist.append(name)

#Creating a dataframe for the name
df_track = pd.DataFrame(list_name_watchlist)

#Concat numpy array to data frame
df_track = pd.DataFrame(pd.np.column_stack([df_track, resmatrix]))

#Insert the header name
months =["Jan_MIDR","Feb_MIDR","Mar_MIDR","Apr_MIDR","May_MIDR","Jun_MIDR","Jul_MIDR","Aug_MIDR","Sept_MIDR","Oct_MIDR","Nov_MIDR","Dec_MIDR"]
header = ["Customer"]

for i in range(cols):
    header.append(months[i])
df_track.columns = header

print(df_track.head(5))

# Importing data summary
df_summary = pd.read_csv("data-clean.csv")

# Adding extra bit of data into the watchlist
X_track = []
totalTransaction = []
freqTotal = []
clientDuration = []
lastOrderTrack = []
lagDaysTrack = []
#CREATE BOOLEAN REACHOUT! WORK HERE! #FIXME!

#Reaching out or not

for name in list_name_watchlist:
    boolean = 0
    #Append X
    X_track.append(df_summary.loc[df_summary['Customer']== name ,'X'].values[0])
    #Append total transaction
    totalTransaction.append(df_summary.loc[df_summary['Customer']== name ,'TotalTransaction_MIDR'].values[0])
    #Append FreqTotal
    freqTotal.append(df_summary.loc[df_summary['Customer']== name ,'FreqTotal'].values[0])
    #Append Client duration
    clientDuration.append(df_summary.loc[df_summary['Customer']== name ,'ClientDuration_days'].values[0])
    #Append lastOrderTrack
    lastOrderTrack.append(df_summary.loc[df_summary['Customer']== name ,'LastOrderDate'].values[0])
    #Append Lag Days
    lagDaysTrack.append(df_summary.loc[df_summary['Customer']== name ,'Lag_Days'].values[0])
    #Append Reach out 
    

new_data_track = zip(totalTransaction,freqTotal,clientDuration,X_track,lastOrderTrack,lagDaysTrack)

df_additional = pd.DataFrame(new_data_track,columns=['TotalTransactionSoFar_MIDR','FreqTotalSoFar','ClientDuration_days','X','LastOrderDate','LagDays'])

df_track = pd.concat([df_track,df_additional],axis=1)

'''
df_track = df_track[(df_track.ClientDuration_days <180) & (df_track.TotalTransactionSoFar_MIDR > 5)]

df_track = df_track.sort_values(by='X',ascending=True)
'''

fn = "watch-list-%s-%s.csv"%(today.month,today.year)
df_track.to_csv(fn,index=False)

# kasih alert! coloring berdasarkan kriteria 
# Tiering ??
# Nyortir beli ngeteng ~ siapa aja'

# DATA FRAME PER PRODUCT
# DataFrame Per product ~ otomatis plot per minggu ~ generate CSV untuk melihat siapa aja yang membeli di bulan apa, total per
# customer untuk setiap product ~ SKU terlalu sedikit
# tiering daerah ~ 

# FOOTPRINT CAFE ~ web scrapping cafe via google?
# Output ke CSV, search via Zomato ~ footprint ~ 


    
