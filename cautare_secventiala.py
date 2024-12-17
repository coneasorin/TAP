def cautare_secventiala(arr, cautat):
    for i in range(len(arr)):
        if arr[i] == cautat:
            return i
    return -1 


with open(r'C:\Users\asus\Downloads\cautare_binara\fisier.txt') as fisier:
    randuri_fisier=fisier.readlines()
    sir=list(map(int, randuri_fisier[0].strip().split()))

    cautat=int(input ("introdu nr cautat: "))
    result=cautare_secventiala(sir, cautat)
    if result !=-1:
        print(f"Elemantul {cautat} a fost gasit la indexul {result+1}.")
    else:
        print(f"Elemantul {cautat} nu a fost gasit {result+1}.")