def cautare_secventiala(list, element):
    for i in range(len(list)):
        if list[i] == element:
            return i  
    return -1  


list = [5, 3, 7, 9, 1, 6, 3]
element_cautat = 7

rezultat = cautare_secventiala(list, element_cautat)
if rezultat != -1:
    print(f"Elementul {element_cautat} a fost gasit la pozitia {rezultat}.")
else:
    print(f"Elementul {element_autat} nu a fost gasit.")
