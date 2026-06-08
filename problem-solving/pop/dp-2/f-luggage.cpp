#include <bits/stdc++.h>

using namespace std;

bool canDivide(int capacity, int *weights, int n){
  int dp[capacity + 1];
  memset(dp, 0, sizeof(dp));

  for (int i=1; i <= n; i++){
    for (int weight = capacity; weight >= 0; weight--){
      if (weights[i-1] <= weight)
        dp[weight] = max(dp[weight], dp[weight - weights[i-1]] + weights[i-1]);
    }
  }

  return (dp[capacity] == capacity);
}

int main(){
  int m;
  string line;
  cin >> m;
  getline(cin, line);
  while (m--){
    getline(cin, line);
    istringstream iss(line);

    int n;
    int weightSum = 0;
    int weights[20];
    for (n=0; iss >> weights[n]; n++) weightSum += weights[n];

    if (weightSum % 2 != 0) {
      cout << "NO" << endl;
      continue;
    }

    int capacity = weightSum / 2;
    cout << (canDivide(capacity, weights, n) ? "YES" : "NO") << endl;
  }
}
