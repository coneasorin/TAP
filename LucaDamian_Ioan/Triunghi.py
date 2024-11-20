#se citesc 3 nr de la tastatura, sa se afisieze daca acestea represinta unghiurile unui triunghi
angle1 = float(input("Enter the first angle: "))
angle2 = float(input("Enter the second angle: "))
angle3 = float(input("Enter the third angle: "))

if angle1 > 0 and angle2 > 0 and angle3 > 0 and (angle1 + angle2 + angle3) == 180:
    print("The angles form a valid triangle.")
else:
    print("The angles do not form a valid triangle.")
