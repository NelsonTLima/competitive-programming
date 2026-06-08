#include <bits/stdc++.h>

using namespace std;

string knapsack(int capacity, int* weights, int* values, int n) {
  int dp[capacity + 1];
  memset(dp, 0, sizeof(dp));

  vector<string> chosenItems(capacity + 1, "");

  for (int i = 1; i <= n; i++) {
    for (int weight = capacity; weight >= 0; weight--) {
      if (weights[i - 1] <= weight) {
        if (dp[weight] < dp[weight - weights[i-1]] + values[i-1]) {
          dp[weight] = dp[weight - weights[i-1]] + values[i - 1];

          chosenItems[weight] = chosenItems[weight - weights[i-1]] + to_string(i-1) + " ";
          //chosenItems[weight] += to_string(i-1) + " ";

        }
      }
    }
  }

  return chosenItems[capacity];
}


int main() {
  int capacity, n;
  while (cin >> capacity >> n) {
    int weights[n];
    int values[n];
    for (int i=0; i < n; i++) cin >> values[i] >> weights[i];
    string chosenItems = knapsack(capacity, weights, values, n);
    cout << chosenItems << endl;
    //for (int index : chosenItems) cout << index << " ";
    //cout << endl;
  }
  return 0;
}
