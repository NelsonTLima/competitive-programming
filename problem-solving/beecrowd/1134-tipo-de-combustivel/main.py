alcool = gasolina = diesel = 0
combustivel = int(input())
while combustivel != 4:
    if combustivel == 1:
        alcool +=1
    elif combustivel == 2:
        gasolina +=1
    elif combustivel ==3:
        diesel +=1
    combustivel = int(input())
print(
        "MUITO OBRIGADO",
        f"Alcool: {alcool}",
        f"Gasolina: {gasolina}",
        f"Diesel: {diesel}",
        sep="\n"
        )
