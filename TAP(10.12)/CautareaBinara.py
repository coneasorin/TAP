def cautare_binara(arr, cautat):
    st = 0
    dr = len(arr) - 1

    while st <= dr:
        mid = (st + dr) // 2

        if arr[mid] == cautat:
            return mid
        elif arr[mid] < cautat:
            st = mid + 1
        else:
            dr = mid - 1
    
    return -1

with open(r'C:\Users\JoJo\Programare\VScode\PythonPrograms\TAP(10.12)\sir.txt', 'r') as fisier:
    randuri_fisier = fisier.readlines()
    sir = list(map(int, randuri_fisier[0].strip().split()))

sir = sorted(sir)
print(f"Sirul sortat este {sir}")

cautat = int(input("Introdu numarul cautat: "))
result = cautare_binara(sir, cautat)
if result != -1:
    print(f"Elementul {cautat} a fost gasit la indexul {result+1}!")
else:
    print(f"Elementul {cautat} nu a fost gasit!")