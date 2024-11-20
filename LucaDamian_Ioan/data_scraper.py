import requests
from bs4 import BeautifulSoup
from hashlib import new
import smtplib

from apscheduler.schedulers.blocking import BlockingScheduler



with open(r'google_password.txt', 'r') as fisier:
    parola_google = fisier.read()
to_addr_list = ['johnyboy3883@gmail.com']
cc_addr_list= ['']
sender='johnyboy3883@gmail.com'
subject='A SCAZUT PRETUL LA PRODUSUL TAU'  
counter = 0
def sendemail(sender,message, subject,to_addr_list, cc_addr_list=[]):
    try:
        smtpserver='smtp.gmail.com:587'
        header  = 'From: %s\n' % sender
        header += 'To: %s\n' % ','.join(to_addr_list)
        header += 'Cc: %s\n' % ','.join(cc_addr_list)
        header += 'Subject: %s\n\n' % subject
        message = header + message
        server = smtplib.SMTP(smtpserver)
        server.starttls()
#Parola este de pe myaccount.google.com/apppasswords
        server.login(sender,parola_google)
        problems = server.sendmail(sender, to_addr_list, message)
        server.quit()
        return True
    except:
        print("Error: unable to send email")
        return False


def verificare_pret():
    global counter
    req = requests.get("https://www.emag.ro/telefon-mobil-apple-iphone-16-pro-max-256gb-5g-desert-titanium-mywx3zd-a/pd/DW367LYBM/?ref=fam#Desert-Titanium")
    soup = BeautifulSoup(req.text, "html.parser")
    pret = soup.find('p', attrs={'class':'product-new-price'}).text
    pret = pret[0:5]
    pret = pret.replace(".","")
    pret = int(pret)
    pret_de_referinta = 7200
    nume_produs = data_nume().strip()
    recenzie_produse = data_recenzie()
    if(pret<pret_de_referinta and counter==0):
        print("Pretul este mai mic decat pretul de referinta")
        message= "A scazut pretul la: " + nume_produs + "\n" + "Ratingul produsului este de: " + recenzie_produse +" STARS" + "\n Noul pret: "+ str(pret)
        sendemail(sender,message,subject,to_addr_list, cc_addr_list=[])
        counter+=1
    else:
        print("Pretul este mai mare decat pretul de referinta")
        print (pret)
 
def data_nume():
    req = requests.get("https://www.emag.ro/telefon-mobil-apple-iphone-16-pro-max-256gb-5g-desert-titanium-mywx3zd-a/pd/DW367LYBM/?ref=fam#Desert-Titanium")
    soup = BeautifulSoup(req.text, "html.parser")
    titlu = soup.find('h1', attrs={'class':'page-title'}).text
    return titlu
          
def data_recenzie():
    req = requests.get("https://www.emag.ro/telefon-mobil-apple-iphone-16-pro-max-256gb-5g-desert-titanium-mywx3zd-a/pd/DW367LYBM/?ref=fam#Desert-Titanium")
    soup = BeautifulSoup(req.text, "html.parser")
    recenzie = soup.find('p', attrs={'class':'review-rating-data'}).text
    return recenzie


#from apscheduler.schedulers.blocking import BlockingScheduler
scheduler = BlockingScheduler()
scheduler.add_job(verificare_pret, 'interval', seconds=10)
scheduler.start()


#pip3 install Apscheduler