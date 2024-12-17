def cautare_binara(lista, valoare):
    stanga = 0
    dreapta = len(lista) - 1
    while stanga <= dreapta:
        mijloc = (stanga + dreapta) // 2
        if lista[mijloc] == valoare:
            return mijloc
        
        elif lista[mijloc] > valoare:
            dreapta = mijloc - 1
        else:
            stanga = mijloc + 1
    return -1
lista = [1, 3, 5, 7, 9, 11, 13, 15]
valoare = 7
rezultat = cautare_binara(lista, valoare)

if rezultat != -1:
    print(f"Valoarea {valoare} se află la indexul {rezultat}.")
else:
    print(f"Valoarea {valoare} nu a fost găsită în listă.")
