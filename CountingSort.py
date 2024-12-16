def count_sort(array):
    M = max(array)

    count = [0] * (M + 1)

    for num in array:
        count[num] += 1




    for i in range(1, M + 1):
        count[i] += count[i - 1]
    output_array = [0] * len(array)


    for i in range(len(array) - 1, -1, -1):
        output_array[count[array[i]] - 1] = array[i]
        count[array[i]] -= 1

    return output_array

print("Unsorted list: ")
arr = list(map(int, input().split()))

output_array = count_sort(arr)
print("sorted array: ", output_array)