#include <iostream>
#include <vector>
#include <string>

using namespace std;

int main() {
  int leds_necessarios[10] = {6,2,5,5,4,5,6,3,7,6};
  int i, casos, soma_leds=0;
  string string_numero;
  string resultado;
  vector<string> resultados;

  cin >> casos;
  for (i=0; i < casos; i++){
    cin >> string_numero;
    soma_leds = 0;
    for (char numero : string_numero){
      int indice = stoi(string(1, numero));
      soma_leds += leds_necessarios[indice];
    }
    resultado = to_string(soma_leds) + " leds\n";
    resultados.push_back(resultado);
  }

  for (i=0; i < resultados.size(); i++){
    cout << resultados[i];
  }

  return 0;
}
