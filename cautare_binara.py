def cautare_binara(arr, cautat):
    low=0
    high=len(arr)-1

    while low<=high:
        mid=(low+high)//2
        if arr[mid]==cautat:
            return mid
        elif arr[mid]<cautat:
            low=mid=1
        else:
            high=mid-1
    return-1

with open(r'C:\Users\asus\Downloads\cautare_binara\fisier.txt') as fisier:
    randuri_fisier=fisier.readlines()
    sir=list(map(int, randuri_fisier[0].strip().split()))

    cautat=int(input ("introdu nr cautat: "))
    result=cautare_binara(sir, cautat)
    if result !=-1:
        print(f"Elemantul {cautat} a fost gasit la indexul3 {result+1}.")
    else:
        print(f"Elemantul {cautat} nu a fost gasit {result+1}.")
