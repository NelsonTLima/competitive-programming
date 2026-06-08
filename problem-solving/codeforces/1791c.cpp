#include <bits/stdc++.h>

using namespace std;

int main() {

  int t, l, j;
  string s;
  cin >> t;

  for (int i=0; i < t; i++){
    cin >> l >> s;

    j=0; l--;
    while (j < l and
        ((s[j] == '0' and s[l] == '1') or
         (s[j] == '1' and s[l] == '0'))){
      j++;
      l--;
    }
    cout << (l - j + 1) << endl;
  }

  return 0;
}
