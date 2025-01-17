def heapify(lista, n, i):
    """
    Funcția heapify este folosită pentru a transforma o sublistă într-un heap.
    n - dimensiunea listei
    i - indicele nodului care trebuie "heapificat".
    """
    largest = i  
    left = 2 * i + 1  
    right = 2 * i + 2  

    
    if left < n and lista[left] > lista[largest]:
        largest = left

    
    if right < n and lista[right] > lista[largest]:
        largest = right

    
    if largest != i:
        lista[i], lista[largest] = lista[largest], lista[i]  
        heapify(lista, n, largest)  

def heap_sort(lista):
    """
    Funcția heap_sort sortează o listă folosind algoritmul Heap Sort.
    """
    n = len(lista)

    
    for i in range(n // 2 - 1, -1, -1):
        heapify(lista, n, i)

    
    for i in range(n - 1, 0, -1):
        lista[i], lista[0] = lista[0], lista[i]  
        heapify(lista, i, 0)  

lista = [12, 11, 13, 5, 6, 7]
print("Lista inițială:", lista)
heap_sort(lista)
print("Lista sortată:", lista)
