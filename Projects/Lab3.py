import requests 
import re
import smtplib

# myaccount.google.com/apppasswords

from bs4 import BeautifulSoup
def scrape_simplu ():
    url = "https://www.emag.ro/telefon-mobil-apple-iphone-16-pro-max-256gb-5g-desert-titanium-mywx3zd-a/pd/DW367LYBM/?ref=fam#Desert-Titanium"
    page = requests.get(url)
    soup = BeautifulSoup(page.text, 'html.parser')
    # print(soup.prettify())
    ragtool = soup.find_all('p')


def data_scraping():
    req=requests.get("https://www.emag.ro/telefon-mobil-apple-iphone-16-pro-max-256gb-5g-desert-titanium-mywx3zd-a/pd/DW367LYBM/?ref=fam#Desert-Titanium")
    soup= BeautifulSoup(req.text, 'html.parser')
    pret = soup.find('p', attrs={'class':'product-new-price'}).text
    pret = pret[0:5]
    pret = pret.replace(".","")
    pret = int(pret)
    pret_de_referinta=7200
    (print(pret))
    if (pret<pret_de_referinta):
        print("Pretul este mai mic decat pretul de referinta")
        #Aici vom insera codul pentru trimiterea email-ului
    else:
        print("Pretul este mai mare sau egal cu pretul de referinta")

#scrape_simplu()

data_scraping()