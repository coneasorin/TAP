def bucket_sort(arr):

    # Define a hash function
    def hash(x):
        return int(x * 10)

    # Create buckets
    buckets = [[] for _ in range(10)]

    # Insert elements into buckets
    for i in arr:
        index = hash(i)
        buckets[index].append(i)

    # Sort each bucket
    for bucket in buckets:
        bucket.sort()

    # Merge buckets
    sorted_arr = []
    for bucket in buckets:
        sorted_arr.extend(bucket)

    return sorted_arr


print("Rindul original: ")
arr = list(map(float, input().split()))
print('Rindul sortat: ',bucket_sort(arr))