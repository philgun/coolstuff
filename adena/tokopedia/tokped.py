from selenium import webdriver
from bs4 import BeautifulSoup
import time
import requests
from pprint import pprint
import lib

#Link to Tokped
kwords = 'kopi'

#Loop should start here i.e. for numpage in str(NUMPAGE):
numpage = '6'
baseURL = 'https://www.tokopedia.com/search?st=product&q='
URL = baseURL+kwords+'&page='+numpage

#Dictionary for product category per merchant
sort_product_category = {'Paling Sesuai' : '23', 'Terbaru':'2','Harga Tertinggi':'10', 'Harga Terendah':'9'
,'Ulasan Terbanyak':'11','Pembelian Terbanyak':'8','Dilihat Terbanyak':'5'}

#Launch chrome
driver = webdriver.Chrome()
driver.get(URL)
res = driver.execute_script('return document.documentElement.outerHTML')

soup = BeautifulSoup(res, 'lxml')
productwrapper = lib.getProductWrapper(soup)

globalProduct = []
globalPrice = []

#Data from Merchant we like to have
MerchantName = []
Followers = []
ProdukTerjual = []
Bintang = []
Ulasan = []

FirstProduct_Name = []
FirstProduct_Qty = []
FirstProduct_Price = []
FirstProduct_Size = []

SecondProduct_Name = []
SecondProduct_Qty = []
SecondProduct_Price = []
SecondProduct_Size = []

ThirdProduct_Name = []
ThirdProduct_Qty = []
ThirdProduct_Price = []
ThirdProduct_Size = []

FourthProduct_Name = []
FourthProduct_Qty = []
FourthProduct_Price = []
FourthProduct_Size = []

FifthProduct_Name = []
FifthProduct_Qty = []
FifthProduct_Price = []
Fifth_Product_Size = []

for product in productwrapper:
    #Get product infoclass
    infoclass_ = lib.getInfoClass(product)

    #Find product link
    link = infoclass_.find('a',class_='pcv3__info-content css-gwkf0u',href=True)
    link = link['href']

    #Find product info
    infoclass_ = infoclass_.find('a',class_='pcv3__info-content css-gwkf0u')
    name = infoclass_.find('div',class_='css-18c4yhp').text

    #Rest of the info
    if infoclass_.find('div',class_='css-rfiksa') is not None:
        price = infoclass_.find('div',class_='css-rfiksa').text

    elif infoclass_.find('div',class_='css-1a4ihta') is not None:
        if infoclass_.find('div',class_='css-1a4ihta').text != name:
            price = infoclass_.find('div',class_='css-1a4ihta').text
        else:
            price = infoclass_.find('div',class_='css-1a4ihta').text

    elif infoclass_.find('div',class_='css-b2fark') is not None:
        price = name
    else:
        price = infoclass_.find('div',class_='css-rhd610').text

    print(name,price)   
    
    #Get to merchant's page
    browser = webdriver.Chrome()
    browser.get(link)
    res_merchant = browser.execute_script('return document.documentElement.outerHTML')
    browser.quit()

    resSoup = BeautifulSoup(res_merchant, 'lxml')
    shopName = lib.getMerchantName(resSoup)
    linkShop = lib.getMerchantLink(resSoup)

    #Open new browser with product that has been sorted
    sort_options = sort_product_category['Pembelian Terbanyak']
    link = linkShop+'?'+'sort='+sort_options

    #Invoke Chrome
    browser = webdriver.Chrome()
    browser.get(link)
    res_merchant = browser.execute_script('return document.documentElement.outerHTML')
    browser.quit()

    #Create BS object
    resSoup = BeautifulSoup(res_merchant,'lxml')

    #Get the data we want from each merchant!
    if shopName not in MerchantName:
        MerchantName.append(shopName)
        followers = lib.getFollowers(resSoup)
        Followers.append(followers)
        
        #Continue with product terjual
    



    




    

    


