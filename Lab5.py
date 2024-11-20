import requests
import smtplib
import math
from email.mime.text import MIMEText

with open(r'/Users/Admin1234/Desktop/Facultate/TAP/MAPV2/cheie_api.txt') as fisier:
    API_KEY = fisier.read().strip()
with open(r'C:/Users/Admin1234/Desktop/Facultate/TAP/MAPV2/parola.txt.txt', 'r') as fisier:
    parola_google = fisier.read().strip()
    
# https://api.openweathermap.org/data/2.5/weather?q={city name}&appid={API key}
URL_API = "https://api.openweathermap.org/data/2.5/weather"
city_name = input("\nIntroduce numele orasului\n")
units = "metric"
request_url = f"{URL_API}?q={city_name}&appid={API_KEY}&units={units}"

email = "billdarescu@gmail.com" #Adresa de email de pe care trimiteti
email_destinatar = "climvladmarian@gmail.com" #Adresa de email pe care se va primi mesajul


def normal_round(n):
    if n - math.floor(n) < 0.5:
        return math.floor(n)
    else:
        return math.ceil(n)

def starea_vremii ():
    raspuns = requests.get(request_url)
    if raspuns.status_code == 200:
        data = raspuns.json()
        temperatura = normal_round(data["main"]["temp"])
        umiditate = data["main"]["humidity"]
        status_vreme = data["weather"][0]["description"]
        grup_vreme = data["weather"][0]["main"]
        return temperatura,umiditate,status_vreme,grup_vreme
    else:
        print("Eroare pentru Request-ul tau!!!!")
temp,umid,stat_s,stat_p = starea_vremii()

def trimitere_email(temp,umid,stat_p,stat_s):
    msg = MIMEText(f"Vreme: {stat_p} / {stat_s}\nTemperatura: {temp}℃\nUmiditate: {umid}%")
    msg['Subject']=f"Starea vremii de astazi in {city_name}"
    msg['From']= f"Starea vremii de astazi in {city_name}"
    msg['To'] = email_destinatar
    #Trimiterea efectiva a emailului
    with smtplib.SMTP_SSL('smtp.gmail.com',465) as smtp_server:
      try:
         smtp_server.login(email,parola_google)
         smtp_server.sendmail(email,email_destinatar,msg.as_string())
         print("Mesaj trimis cu succes!")
      except Exception as e:
          print("Error on SMTP Server!")
          return False

print(f"Temperatura pentru orasul {city_name} este de: {temp}℃\nUmiditate: {umid}%\nDescrierea vremii: {stat_p} | {stat_s}")
trimitere_email(temp,umid,stat_p,stat_s)