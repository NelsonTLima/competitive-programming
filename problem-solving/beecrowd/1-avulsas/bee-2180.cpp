#include <bits/stdc++.h>

using namespace std;

int main() {

  // Crivo.
  bool is_prime[1000000 + 1];

  for( int i=2; i<= 1000000 ; i++ ) is_prime[i] = true;

  for( int64_t i=2; i<=1000000 ; i++ ){
    if( not is_prime[i] ) continue;
    for( int64_t j=i*i; j <= 1000000; j+=i ) is_prime[j] = false;
  }

  int peso;
  cin >> peso;

  int contagem=0;
  int soma = 0;
  while (contagem < 10){
    if (is_prime[peso]){
      soma += peso;
      contagem++;
    }
    peso++;
  }

  int horas = 60000000 / soma;
  int dias = horas / 24;


  cout << soma << " km/h\n";
  cout << horas << " h / " << dias << " d\n";

  return 0;
}
