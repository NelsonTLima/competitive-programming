#include <bits/stdc++.h>

using namespace std;

long knapsack(int maxWeight, int* weights, int* prices, int n) {
  int dp[maxWeight + 1];
  memset(dp, 0, sizeof(dp));

  for (int i = 1; i <= n; i++) {
    for (int weight = maxWeight; weight >= 0; weight--) {
      if (weights[i - 1] <= weight)
        dp[weight] = max(
            dp[weight],
            dp[weight - weights[i - 1]] + prices[i - 1]
            );
    }
  }
  return dp[maxWeight];
}

int main(){
  int t;
  cin >> t;
  while (t--){
    int n;
    cin >> n;
    int prices[n];
    int weights[n];
    for (int i=0; i < n; i++) {
      cin >> prices[i] >> weights[i];
    }
    int person;
    cin >> person;
    int maxWeight;
    long familyCart = 0;
    for (int i=0; i < person; i++) {
      cin >> maxWeight;
      familyCart += knapsack(maxWeight, weights, prices, n);
    }
    cout << familyCart << endl;
  }

  return 0;
}
