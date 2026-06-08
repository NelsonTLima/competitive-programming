#include <bits/stdc++.h>

using namespace std;

int main(){
  unsigned a, b, buffer;
  vector<int> respostas;

  // Pega o numero de cartas
  while (true) {
    set<int> set_a, set_b;
    cin >> a >>  b;
    if (a == 0 && b == 0) break;

    // Coloca os valores no set de Alice.
    for (unsigned i=0; i < a; i++){
      cin >> buffer;
      set_a.insert(buffer);
    }

    // Coloca os valores no set de Beatriz.
    for (unsigned i=0; i < b; i++){
      cin >> buffer;
      set_b.insert(buffer);
    }

    int trocaveis_em_a = 0;
    for (auto i : set_a){
      if (set_b.count(i) == 0){
        trocaveis_em_a++;
      }
    }

    int trocaveis_em_b = 0;
    for (auto i : set_b){
      if (set_a.count(i) == 0){
        trocaveis_em_b++;
      }
    }

    respostas.push_back(min(trocaveis_em_a, trocaveis_em_b));
  }

  for (int i=0; i < respostas.size(); i++){
    cout << respostas[i] << "\n";
  }
  return 0;
}
