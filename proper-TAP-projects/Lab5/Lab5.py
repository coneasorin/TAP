def cautare_binara(arr, cautat):
    low = 0
    high = len(arr) - 1
    while low <= high:
        mid = (low + high) // 2
        if arr[mid] == cautat:
            return mid
        elif arr[mid] < cautat:
            low = mid + 1
        else:
          high = mid - 1
    return -1

with open('/Users/Admin1234/Desktop/Facultate/TAP/CVM/TAP/proper-TAP-projects/Lab5/Cautari/sir_cautari.txt') as fisier:
    randuri_fisier = fisier.readlines()
    sir = list(map(int, randuri_fisier[0].strip().split()))


    # sir = sorted(sir)
    # print(f"Sirul sortat este {sir}")

def validare_input():
    while True:
     nr_input = input("Introduce-ti numarul cautat: ")
     try:
         valoare = int(nr_input)
         return valoare
     except ValueError:
         print("Eroare de printare! Incearca din nou.")

cautat = validare_input()
result = cautare_binara(sir, cautat)
if result != -1:
    print(f"Elementul {cautat} a fost gasit la indexul {result+1}.")
else:
    print(f"Elementul {cautat} nu a fost gasit.")