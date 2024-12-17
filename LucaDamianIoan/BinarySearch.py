#ONLY WORKS ON SORTED ARRAYS
def binary_search(arr, search):
    low = 0
    high = len(arr) -1

    while low <= high:
        mid = (low + high)//2

        if arr[mid] == search:
            return mid
        elif arr[mid] < search:
            low = mid + 1
        else:
            high = mid - 1

    return -1

with open('text.txt', 'r') as file:
    file_rows = file.readlines()
    sir = list(map(int, file_rows[0].strip().split()))

#sir = sorted(sir)
#print(f"Sirul sortat este {sir}")
searched = int(input('Enter the number to search: '))
result = binary_search(sir, searched)

if result != -1:
    print(f"The searched element ,{searched}, was found at index {result+1}.")
else:
    print(f"The searched element ,{searched}, was not found.")