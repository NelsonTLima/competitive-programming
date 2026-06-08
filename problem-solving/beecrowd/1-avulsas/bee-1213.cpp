#include <bits/stdc++.h>

using namespace std;

map<int, vector<int>> MBT_LOOKUPTABLE;
int modBase10(int exponent, int n)
{
  if (MBT_LOOKUPTABLE.count(n) and MBT_LOOKUPTABLE[n].size() > exponent){
    return MBT_LOOKUPTABLE[n][exponent];
  }
  return MBT_LOOKUPTABLE[n].emplace_back(
      (exponent == 0) ? (1 % n) : (modBase10(exponent - 1, n) * 10) % n);
}

int main() {
  int n, mod, i;
  vector<int> results;

  while (cin >> n) {
    mod = 0; i = 0;
    do {
      i++;
      mod += modBase10(i, n);
    } while (mod % n != 0);

    results.emplace_back(i);
  }

  for (int i=0; i < results.size(); i++){
    cout << results[i] << "\n";
  }

  return 0;
}
