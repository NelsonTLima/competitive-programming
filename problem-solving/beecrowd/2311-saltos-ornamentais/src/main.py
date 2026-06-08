saidas = []
n = int(input())

for i in range(n):
    nome = input()
    gd = float(input())
    saltos = input().split()

    for i in range(len(saltos)):
        saltos[i] = float(saltos[i])

    saltos.sort()
    saltos.pop()
    saltos.remove(saltos[0])

    resultado_final = sum(saltos) * gd
    saida = f"{nome} {resultado_final:.2f}"
    saidas.append(saida)

for i in saidas:
    print(i)
