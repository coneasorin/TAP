def count(lista):
    maxim = max(lista)
    frecventa = [0] * (maxim + 1)
    for num in lista:
        frecventa[num] += 1

    index = 0
    for i in range(len(frecventa)):
        while frecventa[i] > 0:
            lista[index] = i
            index += 1
            frecventa[i] -= 1

numere = [int(x) for x in input("Scrie numere pozitive separate prin spatiu: ").split()]
count(numere)
print("Numerele sortate:", numere)