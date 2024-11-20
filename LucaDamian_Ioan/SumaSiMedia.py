#Determina suma si media de o lista de nr citit de la tastatura
list_size = int(input("Enter how many numbers you want to find the sum and average of: "))
numbers = []

for i in range(list_size):
    numbers.append(int(input("Enter number: ")))

total_sum = 0
for i in numbers:
    total_sum += i

print(f"Sum: {total_sum}\nAverage: {total_sum/list_size}")