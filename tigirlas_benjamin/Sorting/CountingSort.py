def counting_sort(arr):
    # Find the maximum element in the array
    max_val = max(arr)
    
    # Create a count array to store the count of each element
    count = [0] * (max_val + 1)
    
    # Count the occurrence of each element in the array
    for num in arr:
        count[num] += 1
    
    # Calculate the cumulative count to determine the position of each element
    for i in range(1, max_val + 1):
        count[i] += count[i - 1]
    
    # Build the sorted array
    sorted_arr = [0] * len(arr)
    for num in arr:
        sorted_arr[count[num] - 1] = num
        count[num] -= 1
    
    return sorted_arr
print("Rindul original: ")
array = list(map(int, input().split())) 
print('Rindul sortat: ', counting_sort(array))