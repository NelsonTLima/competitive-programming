#include <bits/stdc++.h>

using namespace std;

int unboundedKnapsack(int capacity, int n, int weights[]) {
  int dp[capacity + 1];
  memset(dp, 0, sizeof(dp));

  for (int i = 0; i <= capacity; i++) {
    for (int j = 0; j < n; j++) {
      if (weights[j] <= i) {
        dp[i] = max(
            dp[i],
            dp[i - weights[j]] + weights[j]
            );
      }
    }
  }

  int count=0;
  for (int i=0; i <= capacity; i++) if (dp[i] == capacity) count++;
  return count;
}


int main(){
  int n, x;
  cin >> n >> x;
  int w[n];
  for (size_t i = 0; i < n; i++) cin >> w[i];
  cout << unboundedKnapsack(x, n, w) << endl;
  return 0;
}
