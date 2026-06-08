#include <bits/stdc++.h>

using namespace std;

long solution(vector<long> &v, int k) {
  vector<long> dp(v.size(), numeric_limits<int>::max());
  dp[0] = 0;
  dp[1] = abs(v[0] - v[1]);

  for (size_t i=0; i < v.size(); i++) {
    for (size_t j=1; j <= k and i + j < v.size(); j++) {
      dp[i + j] = min(
          dp[i + j],
          dp[i] + abs(v[i] - v[i + j])
          );
    }
  }

  return dp.back();
}

int main(){
  int n, k;
  cin >> n >> k;

  vector<long> h(n);
  for (size_t i=0; i < n; i++) cin >> h[i];

  cout << solution(h, k) << endl;

  return 0;
}
