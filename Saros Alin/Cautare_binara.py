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

# def cautare_secventiala(arr, cautat):
#     low = 1
#     high = len(arr) - 1
#     poz = 0

#     while (low <= high) and (poz == 0):
        
#         if arr(low) == cautat:
#             poz = low
#             return poz
#         else:
#             low +=1
#     return -1

with open(r"C:\Users\Student\Desktop\BDC Tap\TAP\Benchea Ciprian\sir_cautare.txt", 'r') as fisier:
    randuri_fisier = fisier.readlines()
    sir = list(map(int, randuri_fisier[0].strip().split())) #folosim split() pentru a delimita numerele separate prin spatiu

sir = sorted(sir)
print (f"sirul sortat este {sir}")
cautat = int(input("Introdu numarul cautat : "))
result = cautare_binara(sir, cautat)
if result != -1:
    print (f"Elementul {cautat} a fost gasit la indexul {result + 1}.")
else:
    print(f"Elementul {cautat} nu a fost gasit.")
