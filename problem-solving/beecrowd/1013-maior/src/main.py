a, b, c = input().split()
a, b, c = int(a), int(b), int(c)

maior_ab = (a + b + abs(a-b))/2
maior = int((c + maior_ab + abs(c - maior_ab))/2)

print(maior, "eh o maior")
