#include <bits/stdc++.h>

using namespace std;

int main() {
  double m[12][12];
  int l;
  cin >> l;

  char t;
  cin >> t;


  for (int i=0; i < 12; i++){
    for (int j=0; j < 12; j++){
      cin >> m[i][j];
    }
  }

  double sum = 0;
  for (int j=0; j < 12; j++){
    sum += m[l][j];
  }

  if (t == 'S') cout << fixed << setprecision(1) << sum << endl;
  else cout << fixed << setprecision(1) << (sum / 12) << endl;

  return 0;
}
