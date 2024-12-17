def selection_sort(lista):
    for i in range(len(lista)):
        for j in range(i + 1, len(lista)):
            if lista[j] < lista[i]:
                lista[i], lista[j] = lista[j], lista[i]

numere = [int(x) for x in input("Scrie numere separate prin spatiu: ").split()]
selection_sort(numere)
print("Numerele sortate:", numere)