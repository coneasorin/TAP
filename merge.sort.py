def merge_sort(lista):
    """
    Sortează o listă folosind algoritmul Merge Sort.
    """
    if len(lista) <= 1:
        return lista

    
    mijloc = len(lista) // 2
    stanga = merge_sort(lista[:mijloc])
    dreapta = merge_sort(lista[mijloc:])

    
    return merge(stanga, dreapta)

def merge(stanga, dreapta):
    """
    Combină două liste sortate într-una singură sortată.
    """
    rezultat = []
    i = j = 0

    
    while i < len(stanga) and j < len(dreapta):
        if stanga[i] < dreapta[j]:
            rezultat.append(stanga[i])
            i += 1
        else:
            rezultat.append(dreapta[j])
            j += 1

    
    rezultat.extend(stanga[i:])
    rezultat.extend(dreapta[j:])

    return rezultat


lista = [38, 27, 43, 3, 9, 82, 10]
print("Lista inițială:", lista)
lista_sortata = merge_sort(lista)
print("Lista sortată:", lista_sortata)
