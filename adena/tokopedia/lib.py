from selenium import webdriver
from selenium.webdriver.support.ui import WebDriverWait
from selenium.webdriver.support import expected_conditions as EC
from bs4 import BeautifulSoup
import time
import requests
import lxml
import numpy as np
import pprint
import json
import time
user_agent = 'Mozilla/5.0 (Windows NT 10.0; Win64; x64) AppleWebKit/537.36 (KHTML, like Gecko) Chrome/83.0.4103.116 Safari/537.36'
'''
https://stackoverflow.com/questions/50642308/webdriverexception-unknown-error-devtoolsactiveport-file-doesnt-exist-while-t
'''

options = webdriver.ChromeOptions()

options.add_argument('headless')
options.add_argument(f'user-agent={user_agent}')
options.add_argument("start-maximized")
options.add_argument('--window-size=1920,1080')
options.add_argument('--disable-infobars')
options.add_argument('--disable-extensions')
options.add_argument('--disable-dev-shm-usage')
options.add_argument('--no-sandbox')
#options.add_argument('--remote-debugging-port=9222')

pp = pprint.PrettyPrinter()

class crawler(object):
    def __init__(self,bs):
        self.bs = bs
        self.mainclass = self.bs.find(id="zeus-root")
    
    def getURLShop(self):
        self.shopContainer = self.mainclass.find(class_="css-3lpl5n").find(class_="css-jau1bt").find(class_="css-1c82svt").find(class_="css-rjanld").find(class_="css-w8s582").find(class_="css-dle711")

        self.shopURL = []
        for a in self.shopContainer:
            url = a.find(class_="css-r9pe88").find('a',class_='css-1tuarat',href=True)['href']
            self.shopURL.append(url)
        return self.shopURL

class merchant(object):
    def __init__(self,soup_merchant):
        self.soup_merchant = soup_merchant
        self.main_class = self.soup_merchant.find(id="zeus-root")
        self.data = {}

    def getStoreInfo(self):
        #Method to scrap essential overview data from one merchant
        self.storeInfoContainer = self.main_class.find_all("div",class_="css-1p0pkw3 e1ufc1ph0")[-1]

        #Scrap the store name and location
        self.storeName = self.storeInfoContainer.find_all("h1", class_="css-1i6886t")[-1].text
        self.location = self.storeInfoContainer.find_all("p", class_="css-dxunmy-unf-heading e1qvo2ff8")[-1].text

        #Scrap the overview sales of a store
        self.storeOverviewSales = self.main_class.find_all("div",class_="css-1pzufdd e1ufc1ph0")[-1]
        self.soldProducts = self.storeOverviewSales.find_all("h2",class_="css-lzwncz-unf-heading e1qvo2ff2")[-1].text
        
        #Since the overview sales of a store is stored using string e.g. 113.5K, I clean it
        multiplier = 1
        alphabet = "A"
        for c in self.soldProducts:
            if c == "K":
                multiplier=1000
                alphabet = "K"
            elif c == "M":
                multiplier=1000000
                alphabet="M"
        
        self.soldProducts = self.soldProducts.strip(alphabet)
        self.soldProducts = float(self.soldProducts) * multiplier

        #Scrap the star (rating) of a store
        self.storeStar = self.storeOverviewSales.find_all("h2",class_="css-rfs3ih-unf-heading e1qvo2ff2")[-1].text
        self.storeStar = float(self.storeStar)

        #Scrap how many reviews the store has got
        self.review = self.storeOverviewSales.find_all("h6",class_="css-1s96mum-unf-heading e1qvo2ff6")[-1].text
        self.review = self.review.strip("() Ulasan")
        self.review = float(self.review)

        #Scrap since when the store has open fo business
        self.etcContainer = self.main_class.find_all("div",class_="css-1gp0czb epavnfa0")
        
        for e in self.etcContainer:
            string = e.text
            lenstring = len(string)
            i = 0
            for i in range(lenstring-10):
                chars = string[i:i+10]
                if ''.join(chars) == "Buka Sejak":
                    break
            
        self.since = string[i+10:]    
    
    def getProductLinks(self):
        self.productClasses = self.soup_merchant.find_all("div", class_="css-1sn1xa2")
        self.productLinks = []
        for a in self.productClasses:
            a = a.find_all("div",class_="css-1ehqh5q")
            element_of_a = a[-1]
            productURL = element_of_a.find('a')['href']
            self.productLinks.append(productURL)
        return self.productLinks

    def scrapProductData(self,merchantDict):
        #Start looping through the products
        if len(self.productLinks) > 0:
            for pl in self.productLinks:
                #Launch chrome
                Chrome = webdriver.Chrome(options=options)
                print(pl)
                
                Chrome.get(pl)

                #Pause Chrome to let it load
                time.sleep(10)

                #scrolldown(Chrome)
                
                #Take the HTML data
                res_product = Chrome.execute_script('return document.documentElement.outerHTML')
            
                #create BS object
                bs_product = BeautifulSoup(res_product, 'html5lib')

                #Start scrapping product data
                self.productMainClass = bs_product.find(id="zeus-root")
                self.productInfoContainer = self.productMainClass.find_all(
                    "div",attrs={"id":"pdp_comp-product_content"})[-1]

                #Product Name
                productName = self.productInfoContainer.find_all("h1",class_="css-v7vvdw")[-1].text

                #Qty sold
                test = self.productInfoContainer.find(text="Terjual")

                if test is not None:
                    #If the product has been sold
                    soldQty = self.productInfoContainer.find_all("div",attrs={"data-testid" : "lblPDPDetailProductSoldCounter"})[-1].text
                    soldQty = soldQty.replace("Terjual ","")

                    if "rb" in soldQty:
                        soldQty = soldQty.replace("rb","")
                        soldQty = soldQty.replace(",",".")
                        soldQty = float(soldQty) * 1000
                    else:
                        soldQty = soldQty.replace(".","")
                        soldQty = float(soldQty)
                else:
                    #If the product has not sold yet
                    soldQty = 0

                #Product's rating
                productStar = self.productInfoContainer.find_all("span",class_="main",attrs={"data-testid":"lblPDPDetailProductRatingNumber"})

                if len(productStar) > 0:
                    #If product has been rated
                    productStar = float(productStar[-1].text)
                else:
                    #If product has not been rated
                    productStar = 0.0

                #Price
                price = self.productInfoContainer.find_all("div", class_="price",attrs={"data-testid":"lblPDPDetailProductPrice"})[-1].text
                
                #Strip Rp.
                price = price[2:]

                #Strip .
                price = price.replace(".","")
                
                #Change dtype from string to float
                price = float(price)

                #Scrap number of reviews the product has got
                rev = self.productInfoContainer.find_all("span",attrs={"data-testid":"lblPDPDetailProductRatingCounter"})

                if len(rev) > 0:
                    #If the product has been reviewed
                    rev = rev[-1].text
                    rev = rev.replace(" ulasan","")
                    rev = rev.replace("(","")
                    rev = rev.replace(")","")

                    if "rb" in rev:
                        rev = rev.replace("rb","")
                        rev = rev.replace(",","")
                        rev = int(int(rev) * 1000)
                    else:
                        rev = rev.replace(".","")
                        rev = int(rev)
                else:
                    #If the product has not been reviewed
                    rev = int(0)

                #Scrap the weight of the product
                self.productWeightContainer = self.productMainClass.find_all(attrs={"data-testid":"lblPDPInfoProduk"})[-1].find_all("li")
                
                weight = -1234.0
                for a in self.productWeightContainer:
                    aa = a.find_all("span")
                    for b in aa:
                        t = b.text
                        if "Gram" in t:
                            #If the HTML.text contains "Gram", means it is the right text we want to scrap
                            t = t.replace(" Gram","")
                            t = t.replace("Berat: ","")
                            t = t.replace(".","")
                            
                            #Change the dtype from string to float
                            weight = float(t)

                #Category
                category = "NA"
                gg = []
                for c in self.productWeightContainer:
                    cc = c.find_all("a")
                    for dd in cc:
                        if dd !=None:
                            strings = dd.text
                            gg.append(strings)
                
                #gg[0] = product category (universal categorisation in Tokopedia)
                #gg[1] = product shelf (not interested in this one since it is store-specific)
                cat = gg[0]
                
                #If the category of the product is cofee beans, then substract the weight of the container. In Tokopedia most of the merchants use 100 gram container
                if cat == "Biji Kopi":
                    weight = weight - 100.0

                print(weight,cat)                
        
                #Create a dictionary inside store name products to store data related to 1 product
                merchantDict[self.storeName]["Products"][productName] = {
                    "Product total sold":soldQty,
                    "Product stars": productStar,
                    "Product price": price,
                    "Product reviews": rev,
                    "Product URL":pl,
                    "Product net weight" : weight,
                    "Product category": cat
                }

                #Test print
                pp.pprint(merchantDict)

                #Close webdriver
                Chrome.close()

                #Dump the data
                with open("tokpedData.json","w") as f:
                    json.dump(merchantDict, f)
        

#Function to scroll down the web
def scrolldown(driver):
    lastHeight = driver.execute_script("return document.body.scrollHeight")

    while True:
        length = 0
        driver.execute_script("window.scrollTo(0, document.body.scrollHeight);")

        #Give chrome time to load!
        time.sleep(1)
        
        new_height = driver.execute_script("return document.body.scrollHeight")
        if new_height == lastHeight:
            break
        lastHeight = new_height
            

if __name__=='__main__':
    kwords = "kopi"
    baseURL = 'https://www.tokopedia.com/'

    PAGES = np.arange(1,3,1)

    #Dictionary to store everything
    masterdata = {}

    for page in PAGES:        
        URL = baseURL+"search?page=%s&q=%s&st=shop"%(int(page),kwords)
       
        #Launch chrome
        Chrome = webdriver.Chrome(options=options)
        Chrome.get(URL)
        scrolldown(Chrome)
        time.sleep(5)
        res = Chrome.execute_script('return document.documentElement.outerHTML')
        Chrome.close()
                
        bs = BeautifulSoup(res, 'html5lib')
        spider = crawler(bs)
        shopURL = spider.getURLShop()
        
        #Start looping from the retrieved shop URL
        for i in range(0,len(shopURL)):
            #Write what page and store is being scrapped for checkpoint
            with open("scrappingPage.txt","w") as g:
                g.write("%s,%s"%(str(page),str(i)))

            Chrome = webdriver.Chrome()
            Chrome.get(shopURL[i])
            scrolldown(Chrome)
            res_merchant = Chrome.execute_script('return document.documentElement.outerHTML')
            Chrome.close()
            
            #create BS object
            bs_merchant = BeautifulSoup(res_merchant, 'html5lib')

            shop = merchant(bs_merchant)
            shop.getStoreInfo()

            #Create a dictionary inside a dictionary for each store
            masterdata[shop.storeName] = {}

            #Populate the dictionary
            masterdata[shop.storeName] = {
                "Location":shop.location,
                "Since": shop.since,
                "Number of sales": shop.soldProducts,
                "Stars":shop.storeStar,
                "Reviews":shop.review
            }

            #Into the merchant dict, insert another dict for storing products data
            masterdata[shop.storeName]["Products"] = {}
            
            #Get product links
            shop.getProductLinks()

            #Scrap product data
            shop.scrapProductData(masterdata)   

            



            
            
