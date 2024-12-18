def quick_sort(arr):

    if len(arr) <= 1:
        return arr


    pivot = arr[len(arr) // 2]


    left = [x for x in arr if x < pivot]
    middle = [x for x in arr if x == pivot]
    right = [x for x in arr if x > pivot]


    return quick_sort(left) + middle + quick_sort(right)



if __name__ == "__main__":

    arr = list(map(int, input("Introdu lista de numere (separate prin spațiu): ").split()))


    sorted_arr = quick_sort(arr)


    print("Lista sortată:", sorted_arr)