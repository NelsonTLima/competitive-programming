#include <iostream>
#include <map>
#include <string>

using namespace std;

int main() {
  int n;
  map<int, string> ddd;

  ddd[61] = "Brasilia";
  ddd[71] = "Salvador";
  ddd[11] = "Sao Paulo";
  ddd[21] = "Rio de Janeiro";
  ddd[32] = "Juiz de Fora";
  ddd[19] = "Campinas";
  ddd[27] = "Vitoria";
  ddd[31] = "Belo Horizonte";

  cin >> n;
  if (ddd.find(n) != ddd.end()) {
    cout << ddd[n] << endl;
  }
  else {
    cout << "DDD nao cadastrado" << endl;
  }
  return 0;
}
