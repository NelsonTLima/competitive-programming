#include <stdio.h>

int main() {
  double distancia_percorrida, litros_gastos, consumo;

  scanf("%lf\n%lf", &distancia_percorrida, &litros_gastos);
  consumo = distancia_percorrida/litros_gastos;

  printf("%.3lf km/l\n", consumo);
}
