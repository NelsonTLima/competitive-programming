#include <iostream>
#include <stdio.h>

using namespace std;

int main(){
  float n;
  float c = 0.0;
  float s = 0.0;

  for (int i=0; i<6; i++){
    cin >> n;
    if (n > 0){
      c++;
      s += n;
    }
  }
  cout << c << " valores positivos\n";
  printf("%.1f\n", s/c);
}
