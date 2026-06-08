#include <bits/stdc++.h>

using namespace std;

int knapsack(int budget, int* prices, int* pages, int n) {
  int dp[budget + 1];
  memset(dp, 0, sizeof(dp));

  for (int i = 1; i < n + 1; i++) {
    for (int cost = budget; cost >= 0; cost--) {
      if (prices[i - 1] <= cost)
        dp[cost] = max(dp[cost], dp[cost - prices[i - 1]] + pages[i - 1]);
    }
  }
  return dp[budget];
}

int main(){
  int n, maxCost;
  cin >> n >> maxCost;

  int prices[n], pages[n];

  for (int i=0; i < n; i++) cin >> prices[i];
  for (int i=0; i < n; i++) cin >> pages[i];

  cout << knapsack(maxCost, prices, pages, n) << endl;

  return 0;
}
