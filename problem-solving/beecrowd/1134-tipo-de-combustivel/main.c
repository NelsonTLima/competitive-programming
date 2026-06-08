#include <stdio.h>

int main(){
  int alcool=0, gasolina=0, diesel=0, combustivel;
  scanf("%d", &combustivel);
  while (combustivel != 4){
    if (combustivel == 1){
      alcool++;
    }
    else if (combustivel == 2){
      gasolina++;
    }
    else if (combustivel == 3){
      diesel++;
    }
    scanf("%d", &combustivel);
  }
  printf("MUITO OBRIGADO\n");
  printf("Alcool: %d\n", alcool);
  printf("Gasolina: %d\n", gasolina);
  printf("Diesel: %d\n", diesel);
}
