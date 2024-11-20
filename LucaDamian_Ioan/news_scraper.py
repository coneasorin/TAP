#from itertools import product
import requests
from bs4 import BeautifulSoup
import smtplib
from apscheduler.schedulers.blocking import BlockingScheduler

#scheduler = BlockingScheduler()
#scheduler.add_job(check_price, 'interval', seconds = 10)
#scheduler.start()


with open(r'google_password.txt') as file:
    google_password = file.read()
#print(google_password)

to_addr_list = ['johnyboy3883@gmail.com']
cc_addr_list = ['']
sender = 'johnyboy3883@gmail.com'
subject = 'The price of the product fell'

def sendemail(sender, message, subject, to_addr_list, cc_addr_list=[]):
    try:
        smtpserver = 'smtp.gmail.com:587'
        header = 'From: %s\n' % sender
        header += 'To: %s\n' % ','.join(to_addr_list)
        header += 'Cc: %s\n' % ','.join(cc_addr_list)
        header += 'Subject: %s\n\n' % subject

        message = header + message
        server = smtplib.SMTP(smtpserver)
        server.starttls()
        server.login(sender, google_password)
        print("DA")
        server.quit()
        return True

    except Exception as e:
        print("An error occured while trying to send the email")
        return False


def scraper_simple():
    url = "https://stirileprotv.ro/stiri/international/rezultate-alegeri-sua-se-numara-voturile-peste-ocean-trump-si-a-adjudecat-un-stat-cheie.html"
    page = requests.get(url)
    soup = BeautifulSoup(page.text, 'html.parser')
    #print(soup.prettify())
    print(soup.find_all('p'))
    print("The class os: product-new-price")

def data_scraper_advanced():
    req = requests.get("https://stirileprotv.ro/stiri/international/rezultate-alegeri-sua-se-numara-voturile-peste-ocean-trump-si-a-adjudecat-un-stat-cheie.html")
    soup = BeautifulSoup(req.text, 'html.parser')
    price = soup.find('p', attrs={'class': 'product-new-price'}).text
    price = price[0:5]
    price = price.replace( '.', '')
    price = int(price)

    refrence_price = 7300
    product_name = get_title().strip()
    rating = get_rating().strip()

    if price < refrence_price:
        print("The price of the product is smaller than the refrence price")
        msj = f"Actual price: {price} RON\n"
        msj += f"Reference price: {refrence_price} RON\n"
        msj += f"Product name: {product_name}\n"
        msj += f"Price: {rating} stars\n"
        sendemail(sender, msj, subject, to_addr_list, cc_addr_list=[])
    else:
        print("The price of the product is smaller than the refrence price")
        print(price)

def get_title():
    req = requests.get("https://stirileprotv.ro/stiri/international/rezultate-alegeri-sua-se-numara-voturile-peste-ocean-trump-si-a-adjudecat-un-stat-cheie.html")
    soup = BeautifulSoup(req.text, 'html.parser')
    name = soup.find('h1', attrs={'class': 'article-h1'}).text
    name = name.lstrip()
    print(name)
    return name

def get_desc():
    req = requests.get("https://stirileprotv.ro/stiri/international/rezultate-alegeri-sua-se-numara-voturile-peste-ocean-trump-si-a-adjudecat-un-stat-cheie.html")
    soup = BeautifulSoup(req.text, 'html.parser')
    desc = soup.find('p').text
    print(desc)

def get_rating():
    req = requests.get("https://stirileprotv.ro/stiri/international/rezultate-alegeri-sua-se-numara-voturile-peste-ocean-trump-si-a-adjudecat-un-stat-cheie.html")
    soup = BeautifulSoup(req.text, 'html.parser')
    rating = soup.find('a', attrs={'class': 'rating-text gtm_rp101318'}).text
    rating = rating.lstrip()
    rating = rating[0:4]
    print(f"The product has a rating of: {rating} stars")
    return rating

get_title()
get_desc()