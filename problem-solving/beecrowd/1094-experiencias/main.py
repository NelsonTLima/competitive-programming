r = int(input())
coelhos = ratos = sapos = total = 0
for i in range(r):
    experimento = input()
    n, cobaia = experimento.split()
    n = int(n)
    total = total + n
    if cobaia == 'C':
        coelhos = coelhos +  n
    elif cobaia == 'R':
        ratos = ratos +  n
    elif cobaia == 'S':
        sapos = sapos + n

perc_coelhos = coelhos/total * 100
perc_ratos = ratos/total * 100
perc_sapos = sapos/total * 100

print(
        f"Total: {total} cobaias",
        f"Total de coelhos: {coelhos}",
        f"Total de ratos: {ratos}",
        f"Total de sapos: {sapos}",
        f"Percentual de coelhos: {perc_coelhos:.2f} %",
        f"Percentual de ratos: {perc_ratos:.2f} %",
        f"Percentual de sapos: {perc_sapos:.2f} %",
        sep="\n"
        )
