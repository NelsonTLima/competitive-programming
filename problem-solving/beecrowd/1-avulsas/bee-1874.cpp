#include <bits/stdc++.h>

using namespace std;

int main() {
  int h, p, f;
  vector<string> respostas;

  while (cin >> h >> p >> f) {

    if (h == 0 && p == 0 && f == 0) break;

    int deposito[h][p];
    int blocos[f];

    for (unsigned i = 0; i < h; i++){
      for (unsigned j = 0; j < p ; j++){
        cin >> deposito[i][j];
      }
    }

    for (unsigned i=0; i < f; i++){
      cin >> blocos[i];
    }

    unsigned k = 0;
    for (int i=p - 1; i > -1; i--){
      for (int j=h - 1; j > -1; j--){
        if (deposito[j][i] == 0 && k < f){
          deposito[j][i] = blocos[k];
          k++;
        }
      }
    }

    string resposta = "";
    for (unsigned i=0; i < h; i++){
      for (unsigned j=0; j < p - 1; j++){
        resposta += to_string(deposito[i][j]) + " ";
      }
      resposta += to_string(deposito[i][p - 1]) + "\n";
    }
    respostas.push_back(resposta);
  }
  for (string i : respostas){
    cout << i;
  }
  return 0;
}
