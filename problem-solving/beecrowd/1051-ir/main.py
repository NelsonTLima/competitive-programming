SALARIES = [4500, 3000, 2000]
ALIQUOTS = [0.28, 0.18, 0.08]
tax=0

salary = float(input())

for i in range(3):
    rest = salary - SALARIES[i]
    if (rest > 0):
        tax = tax + (rest * ALIQUOTS[i])
        salary = salary - rest

if (tax == 0):
    print("Isento")
else:
    print(f"R$ {tax:.2f}")
