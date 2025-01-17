def bucket_sort(lista):
    """
    Sortează o listă folosind algoritmul Bucket Sort.
    """
    if len(lista) == 0:
        return lista

    
    maxim = max(lista)
    minim = min(lista)
    numar_galeti = len(lista)
    interval = (maxim - minim) / numar_galeti
    galeti = [[] for _ in range(numar_galeti)]

    
    for numar in lista:
        index = int((numar - minim) / interval)
        
        if index == numar_galeti:
            index -= 1
        galeti[index].append(numar)

    
    for i in range(numar_galeti):
        galeti[i] = sorted(galeti[i])  

    
    rezultat = []
    for galeta in galeti:
        rezultat.extend(galeta)

    return rezultat


lista = [0.78, 0.17, 0.39, 0.26, 0.72, 0.94, 0.21, 0.12, 0.23, 0.68]
print("Lista inițială:", lista)
lista_sortata = bucket_sort(lista)
print("Lista sortată:", lista_sortata)
