def selectionSort(arr, n):
    
    for i in range(n):
        min_index = i
 
        for j in range(i + 1, n):
            # select the minimum element in every iteration
            if arr[j] < arr[min_index]:
                min_index = j
         # swapping the elements to sort the array
        (arr[i], arr[min_index]) = (arr[min_index], arr[i])
 
print("Rindul original: ")
arr = list(map(int, input().split()))
n = len(arr)
selectionSort(arr, n)
print('Rindul sortat: ', arr)