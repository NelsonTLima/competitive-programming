#include <iostream>
#include <iomanip>

using namespace std;

int main() {
  char o;
  double x, c=0, soma=0;

  cin >> o;

  for (int i=0; i<12;i++){
    for (int j=0; j<12;j++){
      cin >> x;
      if (j > i){
        soma += x;
        c++;
      }
    }
  }

  if (o == 'S'){
    cout << fixed << setprecision(1) << soma << endl;
  }
  else{
    cout << fixed << setprecision(1) << soma/c << endl;
  }

  return 0;
}
