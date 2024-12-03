def quick_sort(arr):
    if len(arr) <= 1: 
        return arr
    pivot = arr[0]

    less_than_pivot = [] 
    equal_to_pivot = [pivot]
    greater_than_pivot = [] 

    # Partition the array
    for element in arr[1:]:  # start from the second element (index 1)
        if element < pivot:
            less_than_pivot.append(element)
        elif element == pivot:
            equal_to_pivot.append(element)
        else:
            greater_than_pivot.append(element)

    # Recursively sort the subarrays and combine the results
    return quick_sort(less_than_pivot) + equal_to_pivot + quick_sort(greater_than_pivot)

print("Rindul original: ")
array = list(map(int, input().split())) 
print('Rindul sortat: ', quick_sort(array))