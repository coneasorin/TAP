def selection_sort(arr):
    for i in range(len(arr)):
        min_idx = i
        for j in range(i + 1, len(arr)):
            if arr[j] < arr[min_idx]:
                min_idx = j
        arr[i], arr[min_idx] = arr[min_idx], arr[i]


arr = [42, 17, 3, 88, 21, 5, 13, 34, 8, 55]

print(arr)
selection_sort(arr)
print(arr)