#include <stdio.h>

int main(){
  float salary, salary_raise, new_salary;
  int perc_raise;

  scanf("%f", &salary);

  if (salary >= 0 && salary <= 400){
    perc_raise = 15;
  }
  else if (salary > 400 && salary <= 800){
    perc_raise = 12;
  }
  else if (salary > 800 && salary <= 1200){
    perc_raise = 10;
  }
  else if (salary > 1200 && salary <= 2000){
    perc_raise = 7;
  }
  else{
    perc_raise = 4;
  }

  salary_raise = salary * perc_raise / 100;
  new_salary = salary + salary_raise;

  printf("Novo salario: %.2f\n", new_salary);
  printf("Reajuste ganho: %.2f\n", salary_raise);
  printf("Em percentual: %d %%\n", perc_raise);
}
