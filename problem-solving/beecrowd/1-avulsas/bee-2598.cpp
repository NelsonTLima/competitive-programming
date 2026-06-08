#include <bits/stdc++.h>

using namespace std;

int main() {
  int c, r;
  float n, m;
  vector<int> results;

  cin >> c;
  for (int i=0; i < c; i++){
    cin >> m >> n;
    r = ceil(m/n);
    results.push_back(r);
  }

  for (int i=0; i < results.size(); i++){
    cout << results[i] << endl;
  }
  return 0;
}
