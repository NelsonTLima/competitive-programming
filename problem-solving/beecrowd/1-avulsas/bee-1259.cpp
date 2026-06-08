#include <bits/stdc++.h>

using namespace std;

int main() {

  vector<unsigned int> pares;
  vector<unsigned int> impares;
  unsigned int x, n, i;

  cin >> n;
  for (i=0; i < n; i++){
    cin >> x;
    if (x % 2 == 0){
      pares.push_back(x);
    }
    else{
      impares.push_back(x);
    }
  }

  sort(pares.begin(), pares.end());
  sort(impares.begin(), impares.end());
  reverse(impares.begin(), impares.end());

  for (i=0; i < pares.size() ; i++) cout << pares[i] << endl;
  for (i=0; i < impares.size(); i++ ) cout << impares[i] << endl;

  return 0;
}
