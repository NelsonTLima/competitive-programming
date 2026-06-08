#include <bits/stdc++.h>

using namespace std;

int knapsack(int maxWeight, int* weights, int* values, int n) {
  if (n == 0 || maxWeight == 0) return 0;

  if (weights[n-1] > maxWeight){
    return knapsack(maxWeight, weights, values, n-1);
  }

  return max(
      values[n - 1] + knapsack(maxWeight - weights[n - 1], weights, values, n - 1),
      knapsack(maxWeight, weights, values, n - 1)
      );
}

int main() {
  int n;
  vector<int> results;
  while (cin >> n && n != 0) {

    int precos[n], pesos[n], pesoMaximo;
    for (int i=0; i<n; i++){
      cin >> precos[i] >> pesos[i];
    }
    cin >> pesoMaximo;
    results.push_back(knapsack(pesoMaximo, pesos, precos, n));
  }

  for (int i=0; i < results.size(); i++){
    cout << results[i] << endl;
  }
  return 0;
}
