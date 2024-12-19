def selectionSort(arr, n):
    
    for i in range(n):
        min_index = i
 
        for j in range(i + 1, n):
          
            if arr[j] < arr[min_index]:
                min_index = j
        (arr[i], arr[min_index]) = (arr[min_index], arr[i])
 
print("Introdu lista de numere (separate prin spațiu): ")
arr = list(map(int, input().split()))
n = len(arr)
selectionSort(arr, n)
print('Lista sortată: ', arr)