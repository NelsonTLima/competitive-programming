#include <iostream>
#include <vector>
#include <string>

using namespace std;

int main() {
  int casos, numero;
  vector<string> resultados;
  string resultado;

  cin >> casos;
  for (int i=0; i < casos; i++){
    cin >> numero;
    resultado = to_string(numero) + " eh primo\n";
    for (int j=2 ; j < numero; j++){
      if (numero % j == 0){
        resultado = to_string(numero) + " nao eh primo\n";
        break;
      }
    }
    resultados.push_back(resultado);
  }
  for (int i=0; i < resultados.size(); i++){
    cout << resultados[i];
  }
  return 0;
}
