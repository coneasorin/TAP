def bubbleSort(array):
    for i in range(len(array)):
        swapped = False

        for j in range(0, len(array) - i - 1):
            if array[j] > array[j + 1]:
                temp = array[j]
                array[j] = array[j + 1]
                array[j + 1] = temp
                swapped = True
        if not swapped:
            break


print("Introdu lista de numere (separate prin spațiu): ")
arr = list(map(int, input().split()))
bubbleSort(arr)
print('Lista sortată: ', arr)