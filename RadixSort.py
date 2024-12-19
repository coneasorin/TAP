def counting_sort(arr, exp):
    n = len(arr)
    output = [0] * n  
    count = [0] * 10  

    
    for i in range(n):
        index = (arr[i] // exp) % 10
        count[index] += 1

    
    for i in range(1, 10):
        count[i] += count[i - 1]

    i = n - 1
    while i >= 0:
        index = (arr[i] // exp) % 10
        output[count[index] - 1] = arr[i]
        count[index] -= 1
        i -= 1

  
    for i in range(n):
        arr[i] = output[i]


def radix_sort(arr):
    
    max_val = max(arr)

   
    exp = 1  
    while max_val // exp > 0:
        counting_sort(arr, exp)
        exp *= 10



if __name__ == "__main__":
    
    try:
        array = list(map(int, input("Introdu numerele separate prin spațiu: ").split()))
        
        radix_sort(array)
        print("Lista sortata:")
        print(array)
    except ValueError:
        print("introdu doar numere întregi separate prin spațiu!")