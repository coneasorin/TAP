#determineaza daca un nr in citit de la tastatura este prim.
num = int(input("Enter a number: "))
if num <= 1:
    print("The number is not prime")
    exit(0)
for i in range(2, num // 2 +1):
    if num % i == 0:
        print("The number is not prime")
        exit(0)
print("The number is prime")

