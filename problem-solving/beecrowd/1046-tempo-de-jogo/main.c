#include <stdio.h>

int main(){
  int h1, h2, t;

  scanf("%d %d",&h1, &h2);

  if (h1 < h2){
    t = h2 - h1;
  }
  else if (h1 > h2){
    t = h2 - h1 + 24;
  }
  else{
    t = 24;
  }

  printf("O JOGO DUROU %d HORA(S)\n", t);
}
