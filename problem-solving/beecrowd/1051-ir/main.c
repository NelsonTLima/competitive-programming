#include <stdio.h>

int main(){
  int i=0;
  float salary, rest, tax=0;
  float SALARIES[] = {4500, 3000, 2000};
  float ALIQUOTS[] = {0.28, 0.18, 0.08};

  scanf("%f", &salary);

  for (i=0; i < 3; i++){
    rest = salary - SALARIES[i];
    if (rest > 0){
      tax = tax + (rest * ALIQUOTS[i]);
      salary = salary - rest;
    }
  }
  if (tax == 0){
    printf("Isento\n");
  }
  else{
    printf("R$ %.2f\n", tax);
  }
}
