#include <bits/stdc++.h>

using namespace std;

int main() {
  string entrada;
  queue<string> oeste, norte, sul, leste, fila_pouso;


  cin >> entrada;

  while (entrada != "0") {
    if (entrada == "-1"){
      while (cin >> entrada && isalpha(entrada[0])){
        oeste.push(entrada);
      }
    }
    if (entrada == "-2"){
      while (cin >> entrada && isalpha(entrada[0])){
        sul.push(entrada);
      }
    }
    if (entrada == "-3"){
      while (cin >> entrada && isalpha(entrada[0])){
        norte.push(entrada);
      }
    }
    if (entrada == "-4"){
      while (cin >> entrada && isalpha(entrada[0])){
        leste.push(entrada);
      }
    }
  };

  string proximo;
  while (!leste.empty() || !oeste.empty() || !norte.empty() || !sul.empty()){
    if (!oeste.empty()){
      fila_pouso.push(oeste.front());
      oeste.pop();
    }
    if (!norte.empty()){
      fila_pouso.push(norte.front());
      norte.pop();
    }
    if (!sul.empty()){
      fila_pouso.push(sul.front());
      sul.pop();
    }
    if (!leste.empty()){
      fila_pouso.push(leste.front());
      leste.pop();
    }
  }

  cout << fila_pouso.front();
  fila_pouso.pop();
  while (!fila_pouso.empty()) {
    cout << " "<< fila_pouso.front();
    fila_pouso.pop();
  }
  cout << "\n";

  return 0;
}
