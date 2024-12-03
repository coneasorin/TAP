def counting_sort(arr):
    max_val = max(arr)
    count = [0] * (max_val + 1)
    for num in arr:
        count[num] += 1

    index = 0
    for i in range(len(count)):
        while count[i] > 0:
            arr[index] = i
            index += 1
            count[i] -= 1

arr = [42, 17, 3, 88, 21, 5, 13, 34, 8, 55]

print(arr)
counting_sort(arr)
print(arr)