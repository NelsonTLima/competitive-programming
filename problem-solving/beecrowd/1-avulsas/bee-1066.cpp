#include <iostream>

using namespace std;

int main(){
  int n;
  int c_pares=0;
  int c_impares=0;
  int c_positivos=0;
  int c_negativos=0;

  for (int i=0; i<5; i++){
    cin >> n;

    if (n % 2 == 0){ c_pares++; }
    else{ c_impares++;}

    if (n > 0){ c_positivos++; }
    else if (n < 0){ c_negativos++; }
  }
  cout << c_pares << " valor(es) par(es)\n";
  cout << c_impares << " valor(es) impar(es)\n";
  cout << c_positivos << " valor(es) positivo(s)\n";
  cout << c_negativos << " valor(es) negativo(s)\n";
}
