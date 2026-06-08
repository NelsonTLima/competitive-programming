#include <stdio.h>

int main(){
  double total=0.0, price;
  int product_id, qty, i=0;

  for (i=0 ; i < 2; i++){
    scanf("%d %d %lf", &product_id, &qty, &price);
    total = total + (price * qty);
  }
  printf("VALOR A PAGAR: R$ %.2lf\n", total);
}
