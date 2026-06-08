#include <bits/stdc++.h>

using namespace std;

int main() {
  int t, n, k, c;
  string s;

  cin >> t;

  for (int i=0; i < t; i++){
    cin >> n >> k >> s;

    c = 0; n--;
    while (n >= 0) {
      if (s[n] == 'W') {
        n-- ; continue ;
      }
      else {
        c++ ; n -= k ;
      }
    }

    cout << c << endl;
  }

  return 0;
}
