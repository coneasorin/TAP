def selection_sort(arr):
    n = len(arr)
    for i in range(n - 1):
        min_idx = i
        for j in range(i + 1, n):
            if arr[j] < arr[min_idx]:

                min_idx = j

        arr[i], arr[min_idx] = arr[min_idx], arr[i]


def print_array(arr):
    for val in arr:
        print(val, end=" ")
    print()


print("Unsorted array: ")
arr = list(map(int, input().split()))

selection_sort(arr)

print("Sorted array: ", end="")
print_array(arr)
