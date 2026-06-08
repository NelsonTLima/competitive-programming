#include <stdio.h>
#include <math.h>

int main(){
  double PI, a, b, c;
  double triangulo, circulo, trapezio, quadrado, retangulo;

  PI = 3.14159;

  scanf("%lf %lf %lf", &a, &b, &c);

  triangulo = a*c/2;
  circulo = PI*pow(c, 2);
  trapezio = (a + b)*c/2;
  quadrado = pow(b, 2);
  retangulo = a * b;

  printf("TRIANGULO: %.3f\n", triangulo);
  printf("CIRCULO: %.3f\n", circulo);
  printf("TRAPEZIO: %.3f\n", trapezio);
  printf("QUADRADO: %.3f\n", quadrado);
  printf("RETANGULO: %.3f\n", retangulo);
}
