def quick_sort(lista):
    """
    Sortează o listă folosind algoritmul Quick Sort.
    """
    if len(lista) <= 1:
        return lista

   
    pivot = lista[0]

    
    mai_mici = [x for x in lista[1:] if x <= pivot]  
    mai_mari = [x for x in lista[1:] if x > pivot]   

   
    return quick_sort(mai_mici) + [pivot] + quick_sort(mai_mari)


lista = [38, 27, 43, 3, 9, 82, 10]
print("Lista inițială:", lista)
lista_sortata = quick_sort(lista)
print("Lista sortată:", lista_sortata)
