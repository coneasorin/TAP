def quick_sort(lista):
    if len(lista) <= 1:
        return lista
    pivot = lista[0]
    stanga = [x for x in lista[1:] if x <= pivot]
    dreapta = [x for x in lista[1:] if x > pivot]
    return quick_sort(stanga) + [pivot] + quick_sort(dreapta)

numere = [int(x) for x in input("Scrie numere separate prin spatiu: ").split()]
numere_sortate = quick_sort(numere)
print("Numerele sortate:", numere_sortate)