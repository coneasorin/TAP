def cautare_binara_flipata(lista, valoare):
    stanga = 0
    dreapta = len(lista) - 1
    while stanga <= dreapta:
        mijloc = (stanga + dreapta) // 2
        if lista[mijloc] == valoare:
            return mijloc
        elif lista[mijloc] < valoare:
            dreapta = mijloc - 1
        else:
            stanga = mijloc + 1
    return -1
lista = [91, 78, 50, 35, 23, 16, 12, 8, 4]
valoare = 35

rezultat = cautare_binara_flipata(lista, valoare)
if rezultat != -1:
    print(f"Valoarea {valoare} a fost găsită la indexul {rezultat}.")
else:
    print(f"Valoarea {valoare} nu a fost găsită în listă.")
