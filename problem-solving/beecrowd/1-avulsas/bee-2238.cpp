#include <bits/stdc++.h>

using namespace std;


int main() {
  int a, b, c, d, n=-1;

  cin >> a >> b >> c >> d;

  if ( a % b != 0 and c % a == 0 and d % a != 0) n = a;

  int i;
  for (i=2; i * i <= c; i++){
    if ( i % a == 0 and i % b != 0 and c % i == 0 and d % i != 0) {
      n = i;
      break;
    }
  }

  if ( n == -1 and c % a == 0 and c % b != 0 and d % c != 0) {
    n = c;
  }

  if ( n % 2 == 0 and (n/2) > a and (n/2) % a == 0 and (n/2) % b != 0 and c % (n/2) == 0 and d % (n/2) != 0) {
    n = n/2;
  }

  cout << n << endl;

  return 0;
}
