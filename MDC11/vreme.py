import requests
import smtplib
from email.mime.text import MIMEText
with open (r'C:\Users\Student\Desktop\MDC11\cheie_api.txt') as fisier:
    API_KEY = fisier.read().strip()
    
with open(r'C:\Users\Student\Desktop\MDC11\parola_google_text.txt') as fisier_google:
    parola_google = fisier_google.read().strip()
 #https://api.openweathermap.org/data/2.5/weather?q={city name}&appid={API key}
URL_API="https://api.openweathermap.org/data/2.5/weather"
oras = input("Introdu numele orasului ")
units = "metric"
email = "madalincmarian26@gmail.com"
email_destinatar = "madalincmarian26@gmail.com"

request_url = f"{URL_API}?q={oras}&appid={API_KEY}&units= B{units}"
def starea_vremii ():
   raspuns = requests.get(request_url)
   if raspuns.status_code==200:
        data = raspuns.json()
        temperatura = data["main"]["temp"]
        umiditate = data["main"]["humidity"]
        status_vreme = data["weather"][0]["description"]
        return temperatura,umiditate,status_vreme
   else:
        print("Eroare")
temp,umid,sts_vreme = starea_vremii()

def trimitere_email(temp,umid,sts_vreme):
    msg=MIMEText(f"Vreme:{sts_vreme}\nTemperatura: {temp}\nUmiditate:{umid}")
    msg['Subject']= "Starea vremii de astazi"
    msg['From'] = "Starea vremii de astazi"
    msg['To'] = email_destinatar
    
    with smtplib.SMTP_SSL('smtp.gmail.com',465) as smtp_server:
        smtp_server.login(email,parola_google)
        smtp_server.sendmail(email,email_destinatar,msg.as_string())
        print("Mesajul a fost trimis")
    
trimitere_email(temp,umid,sts_vreme)
print(f"Temeratura pentru Orasul {oras}: {temp}\nUmiditate: {umid}%\nDescriere vreme: {sts_vreme}")