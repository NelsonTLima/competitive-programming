#include <stdio.h>
#include <stdlib.h>

int main(){
  int maior_ab, maior, a, b, c;

  scanf("%d %d %d", &a, &b, &c);
  maior_ab = (a + b + abs(a-b))/2;
  maior = (c + maior_ab + abs(c - maior_ab))/2;

  printf("%d eh o maior\n", maior);
}
