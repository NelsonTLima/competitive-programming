repeat = 1
vitorias_inter = 0
vitorias_gremio = 0
empates = 0
qty = 0
while repeat != 2:
    qty +=1
    inter, gremio = input().split()
    inter, gremio = int(inter), int(gremio)

    if inter > gremio:
        vitorias_inter +=1
    elif inter < gremio:
        vitorias_gremio +=1
    else:
        empates +=1

    if vitorias_inter > vitorias_gremio:
        vencedor = "Inter"
    elif vitorias_inter < vitorias_gremio:
        vencedor = "Gremio"
    else:
        vencedor = "Nenhum dos dois"
    print("Novo grenal (1-sim 2-nao)")
    repeat = int(input())
print(
        f"{qty} grenais",
        f"Inter:{vitorias_inter}",
        f"Gremio:{vitorias_gremio}",
        f"Empates:{empates}",
        f"{vencedor} venceu mais",
        sep="\n"
        )
