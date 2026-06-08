#include <stdio.h>
#include <math.h>

int main(){
  double PI=3.14159, r, volume;
  scanf("%lf", &r);
  volume = (4/3.0)* PI * pow(r, 3);
  printf("VOLUME = %.3lf\n", volume);
}
