def cautare_binara(lista, element):
    """
    Returnează indexul elementului în lista sortată, sau -1 dacă nu este găsit.
    """
    stanga = 0
    dreapta = len(lista) - 1

    while stanga <= dreapta:
        mijloc = (stanga + dreapta) // 2
        if lista[mijloc] == element:
            return mijloc
        elif lista[mijloc] < element:
            stanga = mijloc + 1
        else:
            dreapta = mijloc - 1

    return -1 


lista_sortata = [1, 3, 5, 7, 9, 11, 13, 15]
element_cautat = 7

index = cautare_binara(lista_sortata, element_cautat)
if index != -1:
    print(f"Elementul {element_cautat} a fost găsit la indexul {index}.")
else:
    print(f"Elementul {element_cautat} nu a fost găsit.")
