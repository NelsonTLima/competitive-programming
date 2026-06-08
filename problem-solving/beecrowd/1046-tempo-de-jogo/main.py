h1, h2 = input().split()
h1, h2 = int(h1), int(h2)

if h1 < h2:
    t = h2 - h1
elif h1 > h2:
    t = h2 - h1 + 24
else:
    t = 24

print(f"O JOGO DUROU {t} HORA(S)")
