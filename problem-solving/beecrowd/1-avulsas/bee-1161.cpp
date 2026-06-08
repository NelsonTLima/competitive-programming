#include <bits/stdc++.h>

using namespace std;

long long fatorial(long long n){
  if (n == 0){
    return 1;
  }

  for (long long i=n; i > 1; i--){
    n *= i-1 ;
  }
  return n;
}

int main() {
  long long m, n;

  while (cin >> m >> n){
    cout << fatorial(m) + fatorial(n) << endl;
  }
  return 0;
}
