def cautare_secventiala(lista, valoare):
    for index, element in enumerate(lista):
        if element == valoare:
            return index
    return -1

with open(r'C:\Users\Student\Desktop\sir.txt','r') as fisier:
    randuri_fisier = fisier.readlines()
    sir = list(map(int, randuri_fisier[0].strip().split()))
    
    cautat = int(input("Introdu numărul căutat: "))
    rezultat = cautare_secventiala(sir, cautat)

if rezultat != -1:
    print(f"Elementul {cautat} a fost găsit pe poziția {rezultat+1}.")
else:
    print(f"Elementul {cautat} nu a fost găsit.")