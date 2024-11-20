#determina divizorul comun cel mai mare pentru 2 nr de la tastatura.
num1 = int(input("Enter a number.\n"))
num2 = int(input("Enter a second number.\n"))

if num1 > 0 and num2 > 0:
    if num1 > num2:
        num1 = num1 % num2
    else:
        num2 = num2 % num1
else:
    print("invalid input")

print("The gcf is " + str(num2+num1))