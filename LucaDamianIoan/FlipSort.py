def flip_sort(arr):
    def flip(subarr, k):
        subarr[:k] = subarr[:k][::-1]

    n = len(arr)
    for curr_size in range(n, 1, -1):
        max_idx = arr.index(max(arr[:curr_size]))
        if max_idx != curr_size - 1:
            flip(arr, max_idx + 1)
            flip(arr, curr_size)

arr = [42, 17, 3, 88, 21, 5, 13, 34, 8, 55]

print(arr)
flip_sort(arr)
print(arr)