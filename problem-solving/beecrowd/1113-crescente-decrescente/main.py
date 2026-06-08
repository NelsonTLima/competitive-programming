x, y = input().split()
while (x != y):
    x, y = int(x), int(y)
    if x > y:
        print("Decrescente")
    else:
        print("Crescente")
    x, y = input().split()
