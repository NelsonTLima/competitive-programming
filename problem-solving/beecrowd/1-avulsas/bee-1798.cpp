#include <bits/stdc++.h>

using namespace std;

int unboundedKnapsack(int W, int n, int val[], int wt[]){
  vector<int> dp(W + 1, 0);

  for (int i=0; i<=W; i++){
    for (int j=0; j<n; j++){
      if (wt[j] <= i) {
        dp[i] = max(
            dp[i],
            dp[i-wt[j]] + val[j]
            );
      }
    }
  }
  return dp[W];
}

int main() {
  int n;
  int resultado;

  while (cin >> n){
    int tamanhoMaximo;
    cin >> tamanhoMaximo;

    int valores[n], tamanhos[n];
    for (int i = 0; i < n; i++){
      int tamanho, valor;
      cin >> tamanhos[i] >> valores[i];
    }

    resultado = unboundedKnapsack(tamanhoMaximo, n , valores, tamanhos);
  }
  cout << resultado << endl;
  return 0;
}
