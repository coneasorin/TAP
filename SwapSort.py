def swap_sort(arr):
    n = len(arr)
    swapped = True
    while swapped:
        swapped = False
        for i in range(n-1):
            if arr[i] > arr[i+1]:
                arr[i], arr[i+1] = arr[i+1], arr[i]
                swapped = True
    return arr


unsorted = list(map(int, input("Introdu lista de numere (separate prin spațiu:").split()))
sortedArr = swap_sort(unsorted)
print("Lista sortată:", sortedArr)