PI = 3.14159

a, b, c = input().split()
a,b,c = float(a), float(b), float(c)

triangulo = a*c/2
circulo = PI*(c**2)
trapezio = (a + b)*c/2
quadrado = b**2
retangulo = a * b

print(
        f"TRIANGULO: {triangulo:.3f}",
        f"CIRCULO: {circulo:.3f}",
        f"TRAPEZIO: {trapezio:.3f}",
        f"QUADRADO: {quadrado:.3f}",
        f"RETANGULO: {retangulo:.3f}",
        sep="\n"
        )
