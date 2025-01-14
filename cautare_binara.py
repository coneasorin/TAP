def cautare_binara(arr, x):
    lo = 0
    hi = len(arr)-1
    while lo <= hi:
        mid = int( (lo+hi)/2 )

        if arr[mid] <= x:
            lo = mid+1
        else:
            hi = mid-1

    if hi != -1 and arr[hi] == cautat:
        return hi
    return -1

arr = []
with open('sir.txt') as f:
    lines = f.readlines()
    arr = list(map(int, lines[0].strip().split()))

cautat = int(input("Introdu numarul cautat: "))
res = cautare_binara(arr, cautat)
if res != -1:
    print(f"Elementul {cautat} a fost gasit pe pozitia {res}")
else:
    print(f"Elementul {cautat} nu se aflta in sir")