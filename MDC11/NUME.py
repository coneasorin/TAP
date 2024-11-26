numere = []

# Citim 5 numere de la tastatură
for i in range(5):
    numar = float(input(f"Introduceti numarul {i + 1}: "))
    numere.append(numar)

# Găsim cel mai mare număr
cel_mai_mare = max(numere)

# Afișăm rezultatul
print(f"Cel mai mare număr citit este: {cel_mai_mare}")
