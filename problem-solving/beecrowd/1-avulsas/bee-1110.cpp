#include <bits/stdc++.h>

using namespace std;

int main() {
  unsigned n;
  vector<string> respostas;

  while (cin >> n && n != 0){
    deque<string> cartas;
    vector<string> descarte;
    int topo;

    // Povoando o deck:
    for (unsigned i=1; i <= n; i++){
      cartas.push_front(to_string(i));
    }

    while (cartas.size() > 1){
      descarte.push_back(cartas.back());
      cartas.pop_back();

      cartas.push_front(cartas.back());
      cartas.pop_back();
    }

    string resposta = "Discarded cards: ";
    unsigned size = descarte.size();
    for (unsigned i=0; i < size - 1; i ++){
      resposta += descarte[i] + ", ";
    }
    resposta += descarte[size - 1];
    resposta += "\nRemaining card: " + cartas[0];
    respostas.push_back(resposta);
  }

  for (string i : respostas){
    cout << i << "\n";
  }

  return 0;
}
