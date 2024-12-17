def cautare_bucket(lista, valoare):
    if not lista:
        return -1
    minim = min(lista)
    maxim = max(lista)
    numar_bucketuri = len(lista)
    dimensiune_bucket = (maxim - minim) / numar_bucketuri
    bucketuri = [[] for _ in range(numar_bucketuri)]
    for numar in lista:
        index_bucket = int((numar - minim) / dimensiune_bucket)
        if index_bucket == numar_bucketuri:  
            index_bucket -= 1
        bucketuri[index_bucket].append(numar)
    for i in range(numar_bucketuri):
        bucket = bucketuri[i]
        bucket.sort()  
        if valoare in bucket:
            return i, bucket.index(valoare)  
    return -1
lista = [23, 12, 4, 50, 35, 16, 78, 8, 91]
valoare = 35

rezultat = cautare_bucket(lista, valoare)
if rezultat != -1:
    print(f"Valoarea {valoare} a fost găsită în bucketul {rezultat[0]}, index {rezultat[1]}.")
else:
    print(f"Valoarea {valoare} nu a fost găsită în listă.")
