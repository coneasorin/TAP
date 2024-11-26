import requests
from bs4 import BeautifulSoup
from hashlib import new
import smtplib
from apscheduler.schedulers.blocking import BlockingScheduler 


with open(r'C:\Users\Student\Desktop\MDC11\parola_google_text.txt','r') as fisier:
    parola_google = fisier.read().strip()
#print(parola_google)
#Mai jos adresa care primeste email-ul
to_addr_list = ['madalincmarian26@gmail.com']
cc_addr_list = ['']
sender = 'madalincmarian26@gmail.com'
subject = 'A scazut pretul la produsul dorit'
counter = 0
def sendemail(sender, message, subject, to_addr_list, cc_addr_list=[]):
    try:
        smtpserver = 'smt.gmail.com:587'
        header= 'From: %s\n' % sender
        header+= 'To: %s\n' % ','.join(to_addr_list)
        header+= 'Cc: %s\n' % ','.join(cc_addr_list)
        header+= 'Subject: %s\n' % subject
        message = header + message
        server = smtplib.SMPT(smtpserver)
        server.starttls()
        server.login(sender, parola_google)
        problems=server.sendmail(sender, to_addr_list,message)
        server.quit()
        return True
    except Exception as e:
        print("A aparut o eroare in trimiterea email-ului")
        return False
def scrape_simplu ():
    url = "https://www.emag.ro/telefon-mobil-apple-iphone-16-pro-max-256gb-5g-black-titanium-mywv3zd-a/pd/D6367LYBM/?ref=fam#Black-Titanium"
    page = requests.get(url)
    soup = BeautifulSoup(page.text, 'html.parser')
    #print (soup.prettify())
    print(soup.find_all('p'))
    #p.product-new-price
def data_scraping():
    req = requests.get("https://www.emag.ro/telefon-mobil-apple-iphone-16-pro-max-256gb-5g-black-titanium-mywv3zd-a/pd/D6367LYBM/?ref=fam#Black-Titanium")
    soup = BeautifulSoup(req.text , 'html.parser')
    nume = soup.find('h1' , attrs={'class':'page-title'}).text
    print(nume)
    recenzie = soup.find('a', attrs={'class':'rating-text'}).text
    print(recenzie)
    pret = soup.find('p' , attrs={'class':'product-new-price'}).text
    pret = pret[0:5]
    pret = pret.replace(".","")
    pret = int(pret)
    pret_de_referinta=7200
    if(pret<pret_de_referinta and counter = 0):
        print("Pretul este mai mic decat pretul de referinta")
        mesaj = f"Pretul actual: {pret} RON\n"
        mesaj+= f"A scazut pretul la {nume}\n"
        mesaj+= f"Produsul are un rating de {recenzie}"
        sendemail(sender,mesaj,subject,to_addr_list,cc_addr_list=[])
        counter+=1
    else:
        print("Pretul este mai mare sau egal cu cel de referinta")
    print(pret)
   
#scrape_simplu()

scheduler = BlockingScheduler()
scheduler.add_job(pret,'interval',seconds=10)
scheduler.start()
data_scraping()

