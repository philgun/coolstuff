import numpy as np 
import pandas as pd
from matplotlib import pyplot as plt
import seaborn as sns
import datetime

big=15
med=12.5
small=10

#PostProcess
now = datetime.date(year=2020,month=9,day=12)
fn = './CleanData/DataBaseClean_%s%s%s.csv'%(now.strftime('%d'),now.strftime('%m'),now.strftime('%y'))
df = pd.read_csv(fn)
print(df.columns)
df.Trip_TimeStamp = pd.to_datetime(df.Trip_TimeStamp)
date = df.Trip_TimeStamp.iat[0]

#Cut-off date
cut_off_date = pd.Timestamp(datetime.date(year=2020,month=8,day=17))
df = df[df.Trip_TimeStamp > cut_off_date]
print(df.Trip_TimeStamp.head())
df = df[(df.Trip_Distance_km>=0)&(df.Trip_Distance_km<=1000)]

#Clear from names that we dont want
forbidden_name = ['test','Test 2','Test 4','Test','Nan']

for name in forbidden_name:
    df = df[(df.Name!=name) & (df.Name!=None)]

df.reset_index(drop=True)

status = []
for i in range(len(df)):
    if df.Transaction_TimeStamp.iat[i] != 'Belum ditebus':
        status.append('Tertebus')
    else:
        status.append('Belum Tertebus')
df['StatusTebus'] = status
print(df.columns)

#try!
sns.set_style('darkgrid',{'axes.grid': False})
sns.lmplot(data=df,x='Trip_Distance_km',y='Trip_CO2_kg',hue='StatusTebus',fit_reg=False)
plt.show()

#User Behaviour

unique_name = df.Name.unique()
average_delta = []
for name in unique_name:
    df_delta = df[df.Name == name]
    df_delta = df_delta.sort_values(by='Trip_TimeStamp')
    df_delta.reset_index(drop=True)
    if len(df_delta)>1:
        deltatime = (df_delta.Trip_TimeStamp.iat[-1] - df_delta.Trip_TimeStamp.iat[0])
        day = deltatime.value * 1.15741e-14
        if day > 1:
            average_delta.append(len(df_delta)/day)
            print(day,len(df_delta)/day)

fig,ax = plt.subplots(1)
sns.distplot(average_delta,ax=ax)
ax.set_title("Total Returning User %s\n Total User %s"%(len(average_delta),len(unique_name)),fontsize=big)
ax.set_xlabel("Frekuensi Penggunaan per Hari",fontsize=big)
ax.set_ylabel("#Data",fontsize=big)
ax.set_xlim(0,2)
plt.show()

lendf = len(df)
total_km = df.Trip_Distance_km.sum()

#Perjalanan per moda
unique_mode = df.Trip_Mode.unique()

print(unique_mode)
count_mode = []
km_moda = []
for mode in unique_mode:
    c = len(df[df.Trip_Mode==mode])
    count_mode.append(c/lendf*100)

    k = df[df.Trip_Mode==mode].Trip_Distance_km.sum()
    km_moda.append(k)

fig,ax = plt.subplots()

pie = ax.pie(
    count_mode,
    startangle=90,
    explode=(0,0,0,0.3,0),
    autopct='%1.1f%%',
    pctdistance=1.1,
    textprops={'fontsize':med}
    )
ax.axis('equal')
ax.legend(pie[0],unique_mode,fontsize=med)
ax.set_title(
    "Emisi Apps: %s Perjalanan Tercatat\nPersebaran Moda Transportasi as per %s-%s-%s"%(
        lendf,now.strftime('%d'),now.strftime('%m'),now.strftime('%y')),
    fontsize=med,
    pad=20)
plt.show()



fig,ax = plt.subplots()
for i in range(len(km_moda)):
    ax.bar(unique_mode[i],km_moda[i])
ax.xaxis.set_ticks(unique_mode)
ax.tick_params(axis='both',labelsize=big)
ax.set_xlabel("Moda Transportasi",fontsize=big)
ax.set_ylabel("Jarak Tempuh [km]",fontsize=big)
ax.set_title("Akumulasi Jarak Tempuh per Moda [km]",fontsize=big)
plt.show()


fig,ax = plt.subplots()

sns.boxplot(data=df,x='Trip_Mode',y='Trip_Distance_km',ax=ax,showfliers=False)
ax.set_ylabel("Jarak [km]",fontsize=big)
ax.set_xlabel('Moda Transportasi',fontsize=big)
ax.set_title("Persebaran Jarak Tempuh per Moda Transportasi\nTanpa Data Outlier",fontsize=big)
ax.tick_params(axis='both',labelsize=big)
plt.show()


#CO2 per moda
CO2 = []
for mode in unique_mode:
    df_co2 = df[df.Trip_Mode==mode]
    CO2.append(df_co2['Trip_CO2_kg'].sum())

CO2[2] = CO2[4]+CO2[3]

names = ['Motor','Mobil','Kereta dan Bus']

fig,ax = plt.subplots(1)
for i in range(len(names)):
    ax.bar(names[i],CO2[i])
ax.xaxis.set_ticks(names)
ax.tick_params(axis='both',labelsize=big)
ax.set_xlabel("Moda Transportasi",fontsize=big)
ax.set_ylabel("Emisi CO$_2$ [kg]",fontsize=big)
ax.set_title("Akumulasi Emisi CO$_2$ per Moda",fontsize=big)
plt.show()

#Info mitra
jumlah_transaksi = len(df[df.Transaction_Amount > 0])
total_transaksi = df['Transaction_Amount'].sum()
m = df.BersamaMitra_PartnerPenanam.unique()
mitra = [M for M in m if str(M)!='nan']
cash_to_mitra = []

for name in mitra:
    duit = df[df.BersamaMitra_PartnerPenanam==name].Transaction_Amount.sum()
    cash_to_mitra.append(duit)
    print(name,duit)

#Create donut plot
for i in range(len(cash_to_mitra)):
    cash_to_mitra[i] = cash_to_mitra[i]/total_transaksi * 100

cash_to_mitra.append(100 - sum(cash_to_mitra))
startingRadius = 0.7 + (0.3* (len(cash_to_mitra)-1))
for i in range(len(cash_to_mitra)):
    if i == len(cash_to_mitra)-1:
        name = 'Sisanya'
    else:
        name = mitra[i]
    percentage = round(cash_to_mitra[i],1)
    textLabel = name + ' ' + str(percentage) + '%'
    print(startingRadius)
    remainingPie = 100 - percentage
    donut_sizes = [remainingPie, percentage]

    plt.text(0.01, startingRadius-0.2, textLabel, horizontalalignment='center', verticalalignment='center')
    plt.pie(donut_sizes, radius=startingRadius, startangle=90, colors=['#d5f6da', '#5cdb6f'],
            wedgeprops={"edgecolor": "white", 'linewidth': 1})

    startingRadius-=0.3

# equal ensures pie chart is drawn as a circle (equal aspect ratio)
plt.axis('equal')
s="Total Transaksi\nPer %s-%s-%s:\n%s M.IDR"%(
    now.strftime('%d'),now.strftime('%m'),now.strftime('%y'),round(total_transaksi/1000000,2))
plt.text(-3.2,0,s,fontsize=big)
# create circle and place onto pie chart
circle = plt.Circle(xy=(0, 0), radius=0.35, facecolor='white')
plt.gca().add_artist(circle)
plt.show()


CO2_mitra = []
PohonMitra = []
for name in mitra:
    co2 = df[df.BersamaMitra_PartnerPenanam==name].BersamaMitra_EmisiTerserap_in_kg.sum()
    CO2_mitra.append(co2)

    pohon = df[df.BersamaMitra_PartnerPenanam==name].BersamaMitra_JumlahPohon.sum()
    PohonMitra.append(pohon)

M = []
for m in mitra:
    if m == 'Forum Konservasi Leuser':
        m='FKL'
    if m == 'Mitra Aksi':
        m='MA'
    if m == 'Carbon Ethics':
        m='CE'
    M.append(m) 
y_pos = np.arange(len(M))

fig,ax = plt.subplots(1,2)
fig.tight_layout(pad=1.5)
ax[0].barh(M,CO2_mitra,color=['black','black','black','black'])

ax[0].set_ylabel("Mitra Penanam",fontsize=big)
ax[0].set_xlabel("CO$_2$ Terserap [kg]",fontsize=big)
ax[0].set_title("CO$_2$ Terserap per Mitra",fontsize=big)
ax[0].tick_params(axis='both',labelsize=big)

print(PohonMitra)
ax[1].barh(M,PohonMitra,color=['green','green','green','green'])

ax[1].set_ylabel("Mitra Penanam",fontsize=big)
ax[1].set_xlabel("Jumlah Pohon",fontsize=big)
ax[1].set_title("Pohon per Mitra",fontsize=big)
ax[1].tick_params(axis='both',labelsize=big)

plt.show()


unique_interval = df.Transaction_Interval_inDays.unique()
count_interval = []

for interv in unique_interval:
    count_interval.append(len(df[df.Transaction_Interval_inDays==interv]))

name_interval = []
for days in unique_interval:
    name = '%s hari'%days
    name_interval.append(name)

fig,ax = plt.subplots()
big=15
med=12.5
small=10
pie = ax.pie(
    count_interval,
    startangle=90,
    autopct='%1.1f%%',
    textprops={'fontsize':med}
    )
ax.axis('equal')
ax.legend(pie[0],name_interval,fontsize=med)
ax.set_title(
    "Interval Perjalanan Tercatat\nTotal Perjalanan: %s"%(len(df)),
    fontsize=med,
    pad=20)
plt.show()

fig,axes = plt.subplots(1,2)

modas = ['Mobil','Motor']
for i,ax in enumerate(axes.flat):
    df_i = df[df.Trip_Mode==modas[i]]

    counts = []
    unique_pass = df_i.Trip_Passenger.unique()
    unique_pass = np.sort(unique_pass)
    for num in unique_pass:
        counts.append(len(df_i[df_i.Trip_Passenger==num]))
    
    pie = ax.pie(
        counts,
        startangle=90,
        autopct='%1.1f%%',
        textprops={'fontsize':med}
    )
    ax.axis('equal')

    ax.legend(pie[0],unique_pass,fontsize=med)

    ax.set_title(
        "Jumlah Penumpang per Perjalanan\nModa : %s, Jumlah Perjalanan : %s"%(modas[i],len(df_i)),
        fontsize=med,
        pad=20)


plt.show()
