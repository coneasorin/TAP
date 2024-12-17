import requests


with open(r'C:\Users\Student\Desktop\chey.txt') as fisier:
    API_KEY=fisier.read().strip()

#https://api.openweathermap.org/data/2.5/weather ?lat={lat}&lon={lon}&appid={API key}
#https://api.openweathermap.org/data/2.5/weather?q={city name}&appid={API key}

URL_API="https://api.openweathermap.org/data/2.5/weather"
oras= input("Introdu numele orasului: ")
unitate_de_masura="metric"
request_url=f"{URL_API}?q={oras}&appid={API_KEY}&units={unitate_de_masura}"

def verificare_vreme():
    raspuns = requests.get(request_url)
    if raspuns.status_code == 200:
        data=raspuns.json()
        temperatura=data['main']['temp']
        temperatura_minima=data['main']['temp_min']
        temperatura_maxima=data['main']['temp_max']
        viteza_vant=data['wind']['speed']
        return temperatura,temperatura_minima,viteza_vant,temperatura_maxima
    else:
        print("Requestul catre site a esuat")

temperatura,temperatura_minima,viteza_vant,temperatura_maxima = verificare_vreme()
print(f"Temperatura: {temperatura}\n Temperatura minima: {temperatura_minima}\n Viteza vant: {viteza_vant}\n Temperatura maxima: {temperatura_maxima}")



with open(r'C:\Users\Student\Desktop\chey.txt') as f:
    API_KEY = f.read().strip()

URL = "http://calapi.inadiutorium.cz/api/v0/en/calendars/default/today"
headers = {'Authorization': f'Bearer {API_KEY}'}

response = requests.get(URL, headers=headers)
if response.status_code == 200:
    data = response.json()
    print(f"Data: {data['date']}")
    print("Evenimente:", ", ".join(data.get('events', ['Niciun eveniment'])))
    print("Sărbători:", ", ".join(data.get('holidays', ['Nicio sărbătoare'])))
else:
    print("Eroare la request.")



with open(r'C:\Users\Student\Desktop\chey.txt') as fisier:
    orase= input("Introdu orașul: ")
URL = f"http://api.openweathermap.org/data/2.5/forecast?q={oras}&appid={API_KEY}&units=metric"
response = requests.get(URL)
data = response.json()
if response.status_code == 200:
    for forecast in data['list'][:5]: 
     print(f"{forecast['dt_txt']}: {forecast['main']['temp']}°C")
else:
 print("Orașul nu a fost găsit sau a apărut o eroare.")