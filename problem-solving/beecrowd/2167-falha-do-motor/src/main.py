n = int(input())

medidas = input().split(" ")

saida = 0
maior = int(medidas[0])
for i in range(n):
    if int(medidas[i]) < maior:
        saida = i + 1
        break
    maior = int(medidas[i])
print(saida)
