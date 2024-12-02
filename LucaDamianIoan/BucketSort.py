def insertion_sort(arr):
    for i in range(1, len(arr)):
        key = arr[i]
        j = i - 1
        while j >= 0 and key < arr[j]:
            arr[j + 1] = arr[j]
            j -= 1
        arr[j + 1] = key

def bucket_sort(arr):
    if len(arr) == 0:
        return arr

    bucket_count = 10
    buckets = [[] for _ in range(bucket_count)]
    max_val, min_val = max(arr), min(arr)

    for num in arr:
        idx = (num - min_val) * (bucket_count - 1) // (max_val - min_val)
        buckets[idx].append(num)

    sorted_arr = []
    for bucket in buckets:
        insertion_sort(bucket)
        sorted_arr.extend(bucket)
    return sorted_arr


arr = [42, 17, 3, 88, 21, 5, 13, 34, 8, 55]
sorted_arr = bucket_sort(arr)

print(arr)
print(sorted_arr)