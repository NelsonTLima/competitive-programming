#include <iostream>

using namespace std;

int main() {
  int n;
  cin >> n;

  int x[n];
  int valor, menor_valor, posicao=0;

  cin >> menor_valor;
  x[0] = menor_valor;
  for (int i=1; i<n; i++){
    cin >> valor;
    x[i] = valor;
    if (valor < menor_valor){
      menor_valor = valor;
      posicao = i;
    }
  }
  cout << "Menor valor: " << menor_valor << endl;
  cout << "Posicao: " << posicao << endl;

  return 0;
}
