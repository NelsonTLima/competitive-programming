#include <stdio.h>

int main(){
  unsigned value, quantity, LIST_OF_CEDULES[7] = {100, 50, 20, 10, 5, 2, 1}, i=0;

  scanf("%u",&value);
  printf("%u\n", value);

  for (i=0; i < 7; i++){
    quantity = (unsigned) value / LIST_OF_CEDULES[i];
    value %= LIST_OF_CEDULES[i];
    printf("%u nota(s) de R$ %u,00\n", quantity, LIST_OF_CEDULES[i]);
  }
}
