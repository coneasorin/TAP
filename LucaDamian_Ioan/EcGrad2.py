#rezolvati ecuatia de gradul 2
a = float(input("Enter coefficient a: "))
b = float(input("Enter coefficient b: "))
c = float(input("Enter coefficient c: "))

discriminant = b**2 - 4*a*c

if discriminant > 0:
    x1 = (-b + discriminant**0.5) / (2 * a)
    x2 = (-b - discriminant**0.5) / (2 * a)
    print("The solutions are x1 =", x1, "and x2 =", x2)
elif discriminant == 0:
    x = -b / (2 * a)
    print("The solution is x =", x)
