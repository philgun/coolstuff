from selenium import webdriver
from bs4 import BeautifulSoup
import time
import requests

class Shell:
    def __init__(self,shellsoup):
        self.shellsoup = shellsoup
        self.mainclass = self.shellsoup.find(id='zeus-root')

    def getProductWrapper(self):
        self.productwrapper = self.mainclass.find(
            'div',class_='css-3lpl5n'
            ).find(
                'div',class_ = 'css-jau1bt'
            ).find(
                'div',class_ ='css-rjanld'
            ).find(
                'div',class_ = 'css-jza1fo'
            )
        return self.productwrapper

class OuterProduct:
    def __init__(self,element_in_product_wrapper):
        self.element = element_in_product_wrapper
    
    def getProductLink(self):
        self.infoclass_ = self.element.find(
            'div',class_='css-oynulx').find(
                'div',class_='css-o1ozdj').find(
                    'div',class_='css-wlcnlb').find(
                        'div',class_='unf-card css-rs4sgo-unf-card eue3g1e0').find(
                            'div',class_='pcv3__container css-1bd8ct').find(
                                'div',class_='css-7fmtuv')
        self.productLink = self.infoclass_.find('a',class_='pcv3__info-content css-gwkf0u',href=True)['href']
        return self.productLink
    
    def getShopName(self,soup):
        mainclass = soup.find(id='zeus-root')
        mainclass = mainclass.find('div',class_='css-3lpl5n')
        mainclass = mainclass.find('div',class_='css-1jdotmr')
        mainclass = mainclass.find('div',class_='css-1jk3zjc')
        mainclass = mainclass.find('div',class_='css-tebd5e')
        mainclass = mainclass.find('div',class_='css-1adbhz8 e1ufc1ph1')
        mainclass = mainclass.find('div',class_='css-u00746 e1ufc1ph0')
        self.ProductWrapper = mainclass.find('div',class_='css-drikti e1ufc1ph1')
        self.shopName = mainclass.find('a',class_='css-xmjuvc').text
        return self.shopName

    def getShopLink(self):
        linkshell = self.ProductWrapper.find('a',class_='css-xmjuvc',href=True)
        self.linkShop = linkshell['href']
        return self.linkShop

class Merchant:
    def __init__(self,merchantsoup):
        self.merchantsoup = merchantsoup
        self.mainclass = self.merchantsoup.find(id='zeus-root')

    def getFollowers(self):
        mainclass = self.mainclass.find('div',class_='css-3lpl5n')
        mainclass = mainclass.find(class_='css-1geyxdk')
        mainclass = mainclass.find(class_='css-1gwt8mt')
        mainclass = mainclass.find(class_='css-zh3s3g egtln8t0')
        mainclass = mainclass.find(class_='css-drikti e1ufc1ph1')
        mainclass = mainclass.find(class_='css-3jbqnj e1ufc1ph0')
        mainclass = mainclass.find(class_='css-drikti e1ufc1ph1')
        mainclass = mainclass.find(class_='css-1p0pkw3 e1ufc1ph0')
        mainclass = mainclass.find('ul',class_='css-1k56vr7')
        i = 0
        for a in mainclass:
            i+=1
            if i==3:
                followers = a.find('h6',class_='css-jsut4p-unf-heading e1qvo2ff6').text

        if i == 3:
            if 'K' in followers:
                multiplier = 1000
                s = followers.split('K')

            elif 'M' in followers:
                multiplier = 1000000
                s = followers.split('M')
            else:
                multiplier = 1
                s = followers.split(' ')
                
            num = s[0]
            f = float(num) * multiplier
        else:
            f = 0
        return f

    def get_product_links(self):
        mainclass = self.mainclass.find('div',class_='css-3lpl5n')
        mainclass = mainclass.find(class_='css-1geyxdk')
        mainclass = mainclass.find(class_='css-a6gim0')
        mainclass = mainclass.find(class_='css-19deanw')
        self.productwrapper = mainclass.find(class_='css-yxh0dp')
        self.links = []
        i = 0
        for a in self.productwrapper:
            productLink = a.find('a',class_='css-89jnbj',href=True)['href']
            self.links.append(productLink)
            i+=1
            if i == 3:
                break
        return self.links

class BestProduct():
    def __init__(self,soup):
    self.soup = soup







