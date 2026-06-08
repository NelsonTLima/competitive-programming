#include <stdio.h>

int main(){
  int number, hours_worked;
  double wage_per_hour, salary;
  scanf("%d\n%d\n%lf", &number, & hours_worked, &wage_per_hour);
  salary = wage_per_hour * hours_worked;
  printf("NUMBER = %d\n", number);
  printf("SALARY = U$ %.2lf\n", salary);
}
