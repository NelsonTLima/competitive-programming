#include <stdio.h>

int main() {
  unsigned n, hours=0, minutes=0, seconds;

  scanf("%u", &n);

  if (n >= 60) {
    minutes = n / 60;
    seconds = n % 60;
  }else{
    seconds = n;
  }
  if (minutes >= 60){
    hours = minutes / 60;
    minutes = minutes % 60;
  }

  printf("%u:%u:%u\n",hours, minutes, seconds);
}
