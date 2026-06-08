#include <stdio.h>

int main(){
  int s, t, f, sum, result;
  scanf("%d %d %d", &s, &t, &f);
  sum = s+t+f;

  if (sum > 23){
    result = sum - 24;
  }
  else if (sum < 0){
    result = sum + 24;
  }
  else{
    result = sum;
  }
  printf("%d\n", result);
}
