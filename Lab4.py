from bs4 import BeautifulSoup
import requests
import re
import smtplib
from apscheduler.schedulers.blocking import BlockingScheduler

with open(r'C:/Users/Admin1234/Desktop/Facultate/TAP/MAPV2/parola.txt.txt', 'r') as fisier:
    parola_google = fisier.read().strip()
# print(parola_google)
# Mai jos addresa care primeste email-ul
to_addr_list = ['climvladmarian@gmail.com']
cc_addr_list = ['billdarescu@gmail.com']
# Mai jos adresa de email care trimite email-ul
sender = 'billdarescu@gmail.com'
subject = 'A scazut pretul la produsul dorit!'
def send_email(sender, message, subject, to_addr_list, cc_addr_list=[]):
    try:
        smtpserver = 'smtp.gmail.com:587'
        header = 'From: %s\n' % sender
        header+= 'To: %s\n' % ','.join(to_addr_list)
        header+= 'Cc: %s\n' % ','.join(cc_addr_list)
        header+= 'Subject: %s\n\n' % subject
        message = header + message
        server = smtplib.SMTP(smtpserver)
        server.starttls()   
        server.login(sender,parola_google)
        problems=server.sendmail(sender,to_addr_list,message)
        server.quit()
        return True
    except Exception as e:
        print("Error on SMTP Server code!")
        return False

def verificare_pret():
    counter = int(0)
    req =requests.get("https://www.emag.ro/telefon-mobil-apple-iphone-16-pro-max-256gb-5g-desert-titanium-mywx3zd-a/pd/DW367LYBM/?ref=fam#Desert-Titanium")
    soup = BeautifulSoup(req.text, 'html.parser')
    pret = soup.find('p', attrs={'class':'product-new-price'}).text
    pret = pret[0:5]
    pret = pret.replace(".","")
    pret = int(pret)
    pret_de_referinta=7200
    #########
    titlu_produsului = data_nume()
    ratingul_produsului = rating_produs()
    #########
    print(titlu_produsului)
    print(ratingul_produsului)
    (print(pret))
    if (pret<pret_de_referinta and counter == 0):
        print("Pretul este mai mic decat pretul de referinta")
        message= f"Pretul actual: {pret} RON\n"
        message+= f"A scazut pretul la {titlu_produsului}\n"
        message+= f"Produsul are un rating de {ratingul_produsului}\n"
        send_email(sender, message, subject, to_addr_list, cc_addr_list=[])
        counter+= int(1)
    else:
        print("Pretul este mai mare sau egal cu pretul de referinta")

def data_nume():
    req = requests.get("https://www.emag.ro/telefon-mobil-apple-iphone-16-pro-max-256gb-5g-desert-titanium-mywx3zd-a/pd/DW367LYBM/?ref=fam#Desert-Titanium")
    soup = BeautifulSoup(req.text, 'html.parser')
    nume_produs = soup.find('h1', attrs={'class':'page-title'}).text
    return nume_produs

def rating_produs():
    req = requests.get("https://www.emag.ro/telefon-mobil-apple-iphone-16-pro-max-256gb-5g-desert-titanium-mywx3zd-a/pd/DW367LYBM/?ref=fam#Desert-Titanium")
    soup = BeautifulSoup(req.text, 'html.parser')
    rating = soup.find('p', attrs={'class':'review-rating-data'}).text
    return rating

#from apscheduler.schedulers.blocking import BLockingScheduler
scheduler = BlockingScheduler()
scheduler.add_job(verificare_pret, 'interval', seconds=10)
scheduler.start()

# Apelarea functie:
verificare_pret()
