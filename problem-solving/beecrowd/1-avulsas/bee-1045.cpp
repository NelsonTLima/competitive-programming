#include <iostream>
#include <algorithm>
#include <string>
#include <vector>

using namespace std;

int main() {
  double a, b, c, a2, b2, c2;
  vector<string> resultados;

  cin >> a >> b >> c;
  double lados[3] = {a, b, c};
  sort(begin(lados), end(lados), greater<double>());

  a = lados[0];
  a2 = a * a;
  b = lados[1];
  b2 = b * b;
  c = lados[2];
  c2 = c * c;

  if (a >= b + c){
    cout << "NAO FORMA TRIANGULO\n";
  }
  else{
    if (a2 == b2 + c2){
      resultados.push_back("TRIANGULO RETANGULO\n");
    }
    if (a2 > b2 + c2){
      resultados.push_back("TRIANGULO OBTUSANGULO\n");
    }
    if (a2 < b2 + c2){
      resultados.push_back("TRIANGULO ACUTANGULO\n");
    }
    if (a == b and a == c){
      resultados.push_back("TRIANGULO EQUILATERO\n");
    }
    else if (a == b or b == c) {
      resultados.push_back("TRIANGULO ISOSCELES\n");
    }
  }

  for (int i = 0; i < resultados.size(); i++){
    cout << resultados[i];
  }
  return 0;
}
