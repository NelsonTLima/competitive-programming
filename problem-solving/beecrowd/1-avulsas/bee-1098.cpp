#include <bits/stdc++.h>

using namespace std;

int main(){
  for (double i=0; i<=2; i+=0.2){
    for (double j=1; j<=3; j++){
      cout << setprecision(2) << "I=" << i << " J=" << j+i << "\n";
    }
  }
  return 0;
}
