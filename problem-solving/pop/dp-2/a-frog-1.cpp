#include <bits/stdc++.h>

using namespace std;

map<int, long> dp;

long rec(vector<long> &v, int i=0) {
  if (dp.count(i) > 0) return dp[i];

  if (i == v.size() - 2) return dp[i] = abs(v[i] - v[i+1]);

  if (i == v.size() - 3) return  dp[i] = min(
      abs(v[i] - v[i+1]) + rec(v, i + 1),
      abs(v[i] - v[i+2])
      );

  return dp[i] = min(
      abs(v[i] - v[i+1]) + rec(v, i + 1),
      abs(v[i] - v[i+2]) + rec(v, i + 2)
      );
}

int main(){
  int n;
  cin >> n;

  vector<long> h(n);
  for (size_t i=0; i < n; i++) cin >> h[i];

  cout << rec(h);

  return 0;
}
