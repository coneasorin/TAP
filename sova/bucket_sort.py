def bucket_sort(arr):
    if len(arr) == 0:
        return arr
    min_value, max_value = min(arr), max(arr)
    bucket_range = (max_value - min_value) / len(arr)
    
    buckets = [[] for _ in range(len(arr))]
    
    for num in arr:
        index = int((num - min_value) / bucket_range)
        if index == len(arr):
            index -= 1
        buckets[index].append(num)
    
    for i in range(len(arr)):
        buckets[i].sort()
    
    sorted_arr = []
    for bucket in buckets:
        sorted_arr.extend(bucket)
    
    return sorted_arr

arr = [64, 34, 25, 12, 22, 11, 90]
print("Sorted array:", bucket_sort(arr))
