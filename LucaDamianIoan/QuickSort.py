def quick_sort(arr):
    if len(arr) <= 1:
        return arr
    pivot = arr[len(arr) // 2]
    left = [x for x in arr if x < pivot]
    middle = [x for x in arr if x == pivot]
    right = [x for x in arr if x > pivot]
    return quick_sort(left) + middle + quick_sort(right)


arr = [42, 17, 3, 88, 21, 5, 13, 34, 8, 55]

print(arr)
quick_sort(arr)
print(arr)