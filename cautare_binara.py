def cautare_binara(arr,cautat):
    low=0
    high=len(arr)-1

    while low<=high:
        mid=(low+high)

        if att(mid)==cautat:
            return mid
        elif arr(mid)<cautat:
            low=mid+1
        else:
            high=mid-1
    return-1               

with open(r 'C:\Users\Student\Desktop\taps10\sir_cautare.txt') as fisier:
    raduri_fisier=fisier.readlines()
    sir=list(map(int, raduri_fisier[0].strip().split()))    

cautat=int(imput("Introdu numarul ccautat;"))
result=cautare_binara(sir,cautat)
if result !=-1:
    print(f"Elementul{cautat} afost gasit la indexul{result+1}.")
else:
    print(f"Elementul {cautat} nu a fost gasit.")    
