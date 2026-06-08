#include <stdio.h>

int main(){
  char name[20];
  double salary, sales, total;
  scanf("%s\n%lf\n%lf", name, &salary, &sales);
  total = salary + (sales * 0.15);
  printf("TOTAL = R$ %.2lf\n", total);
}
