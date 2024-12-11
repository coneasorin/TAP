def cautare_secventiala(arr, cautat):
    i = 0
    while arr[i] != cautat:
        i = i + 1
        return i
    
with open(r'C:\Users\Student\Desktop\TAP -STEFAN\Lab5_TAP\sir_cautare.txt') as fisier:
        randuri_fisier = fisier.readlines()
        sir = list(map(int, randuri_fisier[0].strip().split()))
        
cautat = int(input("Introdu numarul cautat: "))
result = cautare_secventiala(sir,cautat)
if result != -1:
    print(f"Elementul {cautat} a fost gasit la indexul {result + 2}.")
else:
    print(f"Elementul {cautat} nu a fost gasit.")
        
        