#sortati un vector de n elemente folosiind bubble sort
list_size = int(input("Enter how many numbers you want sorted: "))
numbers = []

for i in range(0, list_size):
    numbers.append(int(input("Enter a number: ")))

print(numbers)

temp = 0;
for i in range(list_size):
    for j in range(0, list_size-i-1):
        if numbers[j+1] < numbers[j]:
            numbers[j], numbers[j+1] = numbers[j+1], numbers[j]

print(f"{numbers} are the numbers sorted in order.")