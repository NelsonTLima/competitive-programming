#include <bits/stdc++.h>

using namespace std;



int main() {
  unsigned n, m;
  map<string, unsigned> cargos;
  string cargo;
  unsigned valor;
  vector<unsigned> salarios;

  cin >> n >> m;
  for (unsigned i=0; i < n; i++){
    cin >> cargo >> valor;
    cargos[cargo] = valor;
  }


  for (unsigned i=0; i < m; i++){

    string linha;
    unsigned salario = 0;

    while (getline(cin, linha)) {
      if (linha == ".") break;

      istringstream stream(linha);
      string palavra;
      while (stream >> palavra){
        if (cargos.count(palavra)){
          salario += cargos[palavra];
        }
      }
    }
    salarios.push_back(salario);
  }

  for (unsigned s : salarios){
    cout << s << "\n";
  }
  return 0;
}
