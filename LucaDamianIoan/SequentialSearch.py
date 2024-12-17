def sequential_search(arr, search):
    for index, element in enumerate(arr):
        if element == search:
            return index
    return -1

with open('text.txt', 'r') as file:
    file_rows = file.readlines()
    sir = list(map(int, file_rows[0].strip().split()))

searched = int(input('Enter the number to search: '))
result = sequential_search(sir, searched)

if result != -1:
    print(f"The searched element, {searched}, was found at index {result + 1}.")
else:
    print(f"The searched element, {searched}, was not found.")
