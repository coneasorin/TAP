import requests
from bs4 import BeautifulSoup
def scrape_simplu() :
    url = "https://www.emag.ro/telefon-mobil-apple-iphone-16-pro-max-256gb-5g-desert-titanium-mywx3zd-a/pd/DW367LYBM/"
    page = requests.get(url)
    soup = BeautifulSoup(page.text, 'html.parser')
    #print(soup.prettify())
    print(soup.find_all('p'))
    #p.product - new - price

    def data_scraping() :
    req = requests.get("https://www.emag.ro/telefon-mobil-apple-iphone-16-pro-max-256gb-5g-desert-titanium-mywx3zd-a/pd/DW367LYBM/")
    soup = BeautifulSoup(req.text, 'html.parser')
    nume = soup.find('h1', attrs = { 'class':'page-title' }).text
    pret = soup.find('p', attrs = { 'class':'product-new-price' }).text
    print(nume)
    pret = pret[0:5]
    pret = pret.replace(".", "")
    pret = int(pret)
    pret_de_referinta = 7200
    if (pret < pret_de_referinta) :
        print("Pretul este mai mic decat pretul de referinta")
        #AICI VOM INSERA CODUL PENTRU TRIMITEREA EMAIL - ULUI
        print(7200)
    else:
print("Pretul este mai mare sau egal cu pretul de referinta")
print(pret)

# scrape_simplu()

data_scraping()

