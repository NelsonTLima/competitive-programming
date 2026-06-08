#include <stdio.h>

int main(){
  char  _[5];
  int starting_d, finishing_d, starting_h, finishing_h, starting_m, finishing_m, starting_s, finishing_s;
  int days, hours, minutes, seconds;

  scanf("%s %d", _, &starting_d);
  scanf("%d %s %d %s %d", &starting_h, _, &starting_m, _, &starting_s);
  scanf("%s %d", _, &finishing_d);
  scanf("%d %s %d %s %d", &finishing_h, _, &finishing_m, _, &finishing_s);

  days = finishing_d - starting_d;
  hours = finishing_h - starting_h;
  minutes = finishing_m - starting_m;
  seconds = finishing_s - starting_s;

  if (seconds < 0){
    seconds = seconds + 60;
    minutes--;
  }
  if (minutes < 0){
    minutes = minutes + 60;
    hours--;
  }
  if (hours < 0){
    hours = hours + 24;
    days--;
  }

  printf("%d dia(s)\n", days);
  printf("%d hora(s)\n", hours);
  printf("%d minuto(s)\n", minutes);
  printf("%d segundo(s)\n", seconds);
}
