def radix(lista):
    maxim = max(lista)
    cifra = 1
    while maxim // cifra > 0:
        counting(lista, cifra)
        cifra *= 10

def counting(lista, cifra):
    n = len(lista)
    output = [0] * n
    frecventa = [0] * 10

    for num in lista:
        index = (num // cifra) % 10
        frecventa[index] += 1

    for i in range(1, 10):
        frecventa[i] += frecventa[i - 1]

    for num in reversed(lista):
        index = (num // cifra) % 10
        output[frecventa[index] - 1] = num
        frecventa[index] -= 1

    for i in range(n):
        lista[i] = output[i]

numere = [int(x) for x in input("Scrie numere pozitive separate prin spatiu: ").split()]
radix(numere)
print("Numerele sortate:", numere)