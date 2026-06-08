#include <bits/stdc++.h>

using namespace std;

int main(){
  int n, i;
  double a, b, c, resultado;
  vector<double> resultados;

  cin >> n;
  for (i=0; i<n; i++){
    cin >> a >> b >> c;
    resultado = ((2.0*a) + (3.0*b) + (5.0*c))/10.0;
    resultados.push_back(resultado);
  }

  for (double x : resultados){
    cout << fixed << setprecision(1) << x << "\n";
  }
  return 0;
}
