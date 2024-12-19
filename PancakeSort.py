def pancake_sort(array):

    def flip(arr, end):
        start = 0
        while start < end:
            arr[start], arr[end] = arr[end], arr[start]
            start += 1
            end -= 1

    n = len(array)
    
    for i in range(n, 0, -1):
        
        max_idx = array.index(max(array[:i]))

        if max_idx != 0:
            flip(array, max_idx)
        
        flip(array, i - 1)
    return array
print("Introdu lista de numere (separate prin spațiu): ")
array = list(map(int, input().split())) 
print('Lista sortată: ', pancake_sort(array))