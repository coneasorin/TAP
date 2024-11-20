#calc factorialul de la un nr int citit de la tastatura.
num = int(input("Enter a number and i will give you its factorial: "))
ans = 1;

for i in range(1, num+1):
    ans = ans *i
print(ans)