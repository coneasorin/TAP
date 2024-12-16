def bubble_sort(arr):
    for n in range(len(arr) - 1, 0, -1):
        swapped = False
        for i in range(n):
            if arr[i] > arr[i + 1]:
                arr[i], arr[i + 1] = arr[i + 1], arr[i]
                swapped = True
        if not swapped:
            break

print("Unsorted list: ")
arr = list(map(int, input().split()))

bubble_sort(arr)

print("Sorted list is:")
print(arr)
