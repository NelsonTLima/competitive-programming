#include <iostream>
#include <iomanip>

using namespace std;

int main() {
  int numero, contador=0, acumulador=0;
  double  media;
  while (true){
    cin >> numero;
    if (numero < 0){break;}
    acumulador += numero;
    contador++;
  }
  media = static_cast<double>(acumulador) / contador;
  cout << fixed << setprecision(2) << media << endl;
  return 0;
}
