#include <bits/stdc++.h>

using namespace std;

int main() {
  int n, f1, f2;
  vector<int> results;

  cin >> n;
  for (int i=0; i < n; i++){
    cin >> f1 >> f2;
    results.push_back(gcd(f1,f2));
  }

  for (int i=0; i < results.size(); i++){
    cout << results[i] << endl;
  }

  return 0;
}
