from selenium import webdriver
from bs4 import BeautifulSoup
import time
import requests
from pprint import pprint
from lib import Shell,OuterProduct,Merchant,BestProduct


kwords = 'kopi'

#Loop should start here i.e. for numpage in str(NUMPAGE):
numpage = '1'
baseURL = 'https://www.tokopedia.com/search?st=product&q='
URL = baseURL+kwords+'&page='+numpage

#Dictionary for product category per merchant
sort_product_category = {'Paling Sesuai' : '23', 'Terbaru':'2','Harga Tertinggi':'10', 'Harga Terendah':'9'
,'Ulasan Terbanyak':'11','Pembelian Terbanyak':'8','Dilihat Terbanyak':'5'}

#Launch chrome
driver = webdriver.Chrome()
driver.get(URL)
res = driver.execute_script('return document.documentElement.outerHTML')

#Create BS object
soup = BeautifulSoup(res, 'html.parser')
ShellClass = Shell(soup)
productwrapper = ShellClass.getProductWrapper()

for product in productwrapper:
    OuterProductClass = OuterProduct(product)

    #Find product link
    product_link = OuterProductClass.getProductLink()

    #Go to to product's page
    browser = webdriver.Chrome()
    browser.get(product_link)
    res_merchant = browser.execute_script('return document.documentElement.outerHTML')
    browser.quit()

    #Get BS object for product
    productsoup = BeautifulSoup(res_merchant, 'lxml')

    #Get shop name and link
    shopName = OuterProductClass.getShopName(productsoup)
    linkShop = OuterProductClass.getShopLink()

    #Geneate Link with sorting options
    sort_options = sort_product_category['Pembelian Terbanyak']
    link_shop = linkShop+'?'+'sort='+sort_options

    #Invoke Chrome
    browser = webdriver.Chrome()
    browser.get(link_shop)
    res_merchant = browser.execute_script('return document.documentElement.outerHTML')
    browser.quit()

    #Create BS object
    merchantsoup = BeautifulSoup(res_merchant,'lxml')
    MerchantClass = Merchant(merchantsoup)

    #Get the data we want from each merchant!
    if shopName not in MerchantName:
        MerchantName.append(shopName)
        followers = MerchantClass.getFollowers()
        Followers.append(followers)

        #Continue with product terjual
        product_links = MerchantClass.get_product_links()
        for i in range(len(product_links)):
            browser = webdriver.Chrome()
            browser.get([product_links[i]])
            best_product = browser.execute_script('return document.documentElement.outerHTML')
            browser.quit()

            #Make BS4 object
            best_product_soup = BeautifulSoup(best_product_soup,'lxml')
            
            #Initialisation of best product class
            BestClass = BestProduct(best_product_soup)

            #FIXME: Link 3 best product sudah di return di product_links! tinggal loop, buka product linknya untuk
            #dapetin data2 product dari link tsb!
    



    




    

    


