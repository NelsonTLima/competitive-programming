#include <stdio.h>

int main(){
  double a, b, average;
  scanf("%lf\n%lf", &a, &b);
  average = ((3.5 * a) + (7.5 * b))/11;
  printf("MEDIA = %.5lf\n", average);
}
