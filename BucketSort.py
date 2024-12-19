def bucket_sort(arr):

    def hash(x):
        return int(x * 10)
    buckets = [[] for _ in range(10)]

   
    for i in arr:
        index = hash(i)
        buckets[index].append(i)

    for bucket in buckets:
        bucket.sort()

    sorted_arr = []
    for bucket in buckets:
        sorted_arr.extend(bucket)

    return sorted_arr


print("Introdu lista de numere (separate prin spațiu): ")
arr = list(map(float, input().split()))
print("Lista sortată: ",bucket_sort(arr))