def insertion_sort(arr):
    for i in range(1, len(arr)):
        key = arr[i]
        j = i - 1
        while j >= 0 and key < arr[j]:
            arr[j + 1] = arr[j]
            j -= 1
        arr[j + 1] = key


arr = [42, 17, 3, 88, 21, 5, 13, 34, 8, 55]

print(arr)
insertion_sort(arr)
print(arr)