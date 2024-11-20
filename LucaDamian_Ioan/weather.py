import requests
with open(r'api_key.txt') as file:
    API_KEY = file.read()

#https://api.openweathermap.org/data/2.5/weather?q={city name}&appid={API key}
URL_API = "https://api.openweathermap.org/data/2.5/weather"
city = input("Enter city name: ")
units = "metric"
requests_url = f"{URL_API}?q={city}&appid={API_KEY}&units={units}"

def check_weather():
    answer = requests.get(requests_url)
    if answer.status_code == 200:
        data = answer.json()
        temperature = data["main"]["temp"]
        temp_min = data["main"]["temp_min"]
        wind_speed = data["wind"]["speed"]
        pressure = data['main']["pressure"]
        humidity = data['main']['humidity']
        return temperature, temp_min, wind_speed, pressure, humidity
    else:
        print(f"Error: {answer.status_code}")

temperature, temp_min, wind_speed, pressure, humidity = check_weather()
print(f"temperature: {temperature}c\nMinimum Temperature: {temp_min}c\nWind Speed: {wind_speed}km/h\nPressure: {pressure}hPa\nHumidity: {humidity}%")