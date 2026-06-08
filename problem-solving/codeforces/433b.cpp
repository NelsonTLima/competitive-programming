#include <bits/stdc++.h>

using namespace std;

int main() {
  int n, i, m, type, l, r;
  cin >> n;

  long long v[n+1], u[n+1];
  v[0] = 0; u[0] = 0;
  for (int i=1; i < n + 1; i++) {
    cin >> u[i];
    v[i] = (i == 1) ? u[1] : v[i-1] + u[i];
  }
  sort( u, u + (sizeof(u) / sizeof(u[0])) );
  for (int i=1; i < n + 1; i++) u[i] += u[i-1];

  cin >> m;
  while (m--){
    cin >> type >> l >> r;
    if (type == 1) cout << (v[r] - v[l-1]) << endl;
    else cout << (u[r] - u[l-1]) << endl;
  }

  return 0;
}
