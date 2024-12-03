sir = [2, 8, 5,3, 9, 4, 1 ]
n = len(sir)
for i in range(n-1):
    min = i
    for j in range(i+1, n):
        if sir[j] < sir[min]:
            min = j
    min_value = sir.pop(min)
    sir.insert(i, min_value)
print(sir)

