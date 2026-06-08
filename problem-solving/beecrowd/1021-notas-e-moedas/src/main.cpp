#include <iostream>

using namespace std;

int main(){
  // será multiplicado por 100.
  double float_quantia;
  int quantidade = 0;
  double valor;
  // valor multiplicado por 100 também.
  int cedulas[6] = {10000, 5000, 2000, 1000, 500, 200};
  int moedas[6] = {100, 50, 25, 10, 5, 1};

  cin >> float_quantia;
  int quantia = float_quantia * 100;

  cout << "NOTAS:\n";
  for (auto cedula : cedulas){
    quantidade = quantia / cedula;
    quantia %= cedula;
    valor = cedula / 100.0;
    printf("%d nota(s) de R$ %.2f\n", quantidade, valor);
  }

  cout << "MOEDAS:\n";
  for (auto moeda : moedas){
    quantidade = quantia / moeda;
    quantia %= moeda;
    valor = moeda / 100.0;
    printf("%d moeda(s) de R$ %.2f\n", quantidade, valor);
  }

  return 0;
}
