def citire_numere_din_fisier(nume_fisier):
    
    try:
        with open(nume_fisier, 'r') as fisier:
            continut = fisier.read()  
            numere = [int(num) for num in continut.replace(',', ' ').split()]
        return numere
    except FileNotFoundError:
        print(f"Eroare: Fișierul {nume_fisier} nu a fost găsit.")
        return []
    except ValueError:
        print("Eroare: Conținutul fișierului nu este valid (nu sunt toate numere).")
        return []

def cautare_secventiala(lista, valoare):

    for i in range(len(lista)):
        if lista[i] == valoare:
            return i  
    return -1  


nume_fisier = "numere.txt"
valoare_cautata = 30
lista_numere = citire_numere_din_fisier(nume_fisier)

if lista_numere:  
    rezultat = cautare_secventiala(lista_numere, valoare_cautata)
    if rezultat != -1:
        print(f"Valoarea {valoare_cautata} a fost găsită la indexul {rezultat}.")
    else:
        print(f"Valoarea {valoare_cautata} nu a fost găsită în fișier.")