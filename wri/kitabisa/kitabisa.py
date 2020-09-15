from pprint import pprint
import requests
from bs4 import BeautifulSoup
from selenium import webdriver
import datetime
import time
import numpy as np
import pandas as pd

def scrollDown(pause, driver,numDonasi):
    """
    Function to scroll down till end of page.
    """
    lastHeight = driver.execute_script("return document.body.scrollHeight")
    length = -100

    while length <= numDonasi+1:
        length = 0
        driver.execute_script("window.scrollTo(0, document.body.scrollHeight);")

        #Get the HTML
        res = driver.execute_script('return document.documentElement.outerHTML')
        soup = BeautifulSoup(res, 'lxml')

        #Dive into the main id
        res = soup.find(id='campaign-page')
        res = res.find_all('div',class_='style__Wrapper-wl3991-6 gvMtwx')
        lastres = res[-1]

        #Get the class that contains donor
        container = lastres.find('div',class_='style__DonorContainer-sc-1exee2-3 kWZAUL')
        listdonor = container.find_all('div',class_='style__DonorItem-sc-1exee2-4 fGNbpm')
        length = len(listdonor)
        print(length,numDonasi)
        #Give chrome time to load!
        time.sleep(pause)



URL = 'https://kitabisa.com/campaign/patunganpohon/'

now = time.time()

#Fire chrome
driver = webdriver.Chrome()
driver.get(URL)

#Get the number of donations
res = driver.execute_script('return document.documentElement.outerHTML')
soup = BeautifulSoup(res, 'lxml')

#Dive into the main id
res = soup.find(id='campaign-page')

#Get the number of donation
res = res.find_all('div',class_='style__Wrapper-wl3991-6 gvMtwx')
numdonasi = res[1]
numdonasi = numdonasi.find('div',class_='style__Donor-wl3991-9 dLWdKa')
numdonasi = numdonasi.find_all('span')
numdonasi = numdonasi[0].text
numdonasi = numdonasi.split(' ')
numdonasi = int(numdonasi[0])
print(numdonasi)

#Scroll down till you die!
scrollDown(2,driver,numdonasi)

#Get the HTML
res = driver.execute_script('return document.documentElement.outerHTML')

#Close chrome
#driver.quit()

#Convert HTML into BS object
soup = BeautifulSoup(res, 'lxml')

#Dive into the main id
res = soup.find(id='campaign-page')

#Get the class that we want (Luckily the particular class is located at the end)
res = res.find_all('div',class_='style__Wrapper-wl3991-6 gvMtwx')
lastres = res[-1]

#Get the class that contains donor
container = lastres.find('div',class_='style__DonorContainer-sc-1exee2-3 kWZAUL')

#Master lists
Name = []
DonationRaw = []
DonationClean = []
TimeStamp = []
Day = []
Month = []
Year = []

#Dict time
dcthrs = {'sehari':24,'sebulan':720,'sejam':1,'setahun':8760,'jam': 1, 'semenit':1/60, 'sedetik':1/3600,'hari': 24, 'menit':1/60, 'bulan':720, 'tahun': 8760}

#Current time (convert from Canberra Time to Jakarta Time)
now = datetime.datetime.now() - datetime.timedelta(hours=3)

#Get the donor attribute
listdonor = container.find_all('div',class_='style__DonorItem-sc-1exee2-4 fGNbpm')
for donor in listdonor:
    #Get donor infoclass
    infoclass = donor.find('div',class_="style__DonorInfo-sc-1exee2-6 eBNxWG")
    
    #Get donor name
    name = infoclass.find('span',class_ ='style__DonorName-sc-1exee2-7 dvvGir').text
    Name.append(name)

    #Get the money dude!
    donasi = infoclass.find('span',class_='style__DonationAmount-sc-1exee2-8 Lcjbj').text
    if "." in donasi:
        l = donasi.split('.')
        ljoin = ''.join(l)
    don = float(ljoin)
    DonationClean.append(don*0.95)
    DonationRaw.append(don)

    #Get the timestamp!
    timestamp = infoclass.find('span',class_='style__DonationTime-sc-1exee2-9 eGPNbw').text
    TimeStamp.append(timestamp)
    '''
    timestampsplit = timestamp.split(' ')
    if len(timestampsplit) <4:
        num = dcthrs[timestampsplit[0]]
    elif len(timestampsplit) >= 4:
        f = float(timestampsplit[0])
        multiplier = dcthrs[timestampsplit[1]]
        num = f * multiplier
    
    time_of_donation = now - datetime.timedelta(hours=num)
    TimeStamp.append(time_of_donation)
    Day.append(time_of_donation.day)
    Month.append(time_of_donation.month)
    Year.append(time_of_donation.year)
    '''
    
#Save file to csv
df = pd.DataFrame(zip(Name,DonationRaw,DonationClean,TimeStamp),
columns=['Name','DonationRaw','DonationClean','TimeStamp'])
df.to_csv("test_dummy_alldata.csv",index=False)

df = pd.DataFrame(zip(Name,DonationRaw,DonationClean,TimeStamp),
columns=['Name','DonationRaw','DonationClean','TimeStamp'])
df = df[0:numdonasi]
df.to_csv("test_dummy_gadalebihnya.csv",index=False)

df = pd.DataFrame(zip(Name,DonationRaw,DonationClean,TimeStamp),
columns=['Name','DonationRaw','DonationClean','TimeStamp'])
df = df[0:numdonasi+1]
df.to_csv("test_dummy_lebihsatu.csv",index=False)

df = pd.DataFrame(zip(Name,DonationRaw,DonationClean,TimeStamp),
columns=['Name','DonationRaw','DonationClean','TimeStamp'])
df = df[0:numdonasi+2]
df.to_csv("test_dummy_lebihdua.csv",index=False)


