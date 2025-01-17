def insertion_sort(lista):
    """
    Sortează o listă folosind algoritmul Sortare prin Inserție.
    """
    for i in range(1, len(lista)):
        
        element_curent = lista[i]
        j = i - 1

        
        while j >= 0 and lista[j] > element_curent:
            lista[j + 1] = lista[j]
            j -= 1

        
        lista[j + 1] = element_curent


lista = [38, 27, 43, 3, 9, 82, 10]
print("Lista inițială:", lista)
insertion_sort(lista)
print("Lista sortată:", lista)
