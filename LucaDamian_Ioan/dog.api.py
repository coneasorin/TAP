import requests

def specific_breed():
    breed = input("Enter what breed of dog you want to see a pic of: ").lower().replace(" ", "-")
    URL_API = f"https://dog.ceo/api/breed/{breed}/images/random"
    answer = requests.get(URL_API)
    if answer.status_code == 200:
        data = answer.json()
        picture = data["message"]
        print("Here is a picture of the dog breed you requested:")
        print(picture)
    else:
        print(f"Error: {answer.status_code}. The breed might not be available.")

def get_random():
    URL_API = "https://dog.ceo/api/breeds/image/random"
    answer = requests.get(URL_API)
    if answer.status_code == 200:
        data = answer.json()
        picture = data["message"]
        print("Here is a picture of the dog breed you requested:")
        print(picture)
    else:
        print(f"Error: {answer.status_code}. The breed might not be available.")

#print(get_random())
#print(specific_breed())

