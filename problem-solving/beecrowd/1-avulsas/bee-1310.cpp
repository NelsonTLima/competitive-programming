#include <bits/stdc++.h>

using namespace std;

int maxCrossingSubarray(int arr[], int begin, int mid, int end){
  int maxSum = numeric_limits<int>::min();

  int sum = 0;
  for (int i = mid; i >= begin; i--){
    sum = sum + arr[i];
    maxSum = max(sum, maxSum);
  }

  sum = maxSum;
  for (int i=mid + 1; i <= end; i++){
    sum = sum + arr[i];
    maxSum = max(sum, maxSum);
  }
  return maxSum;
}

int maxContiguousSubarray(int arr[], int begin, int end) {
  if (begin == end) return arr[begin];

  int mid = (begin + end) / 2;
  int left = maxContiguousSubarray(arr, begin, mid);
  int right = maxContiguousSubarray(arr, mid + 1, end);
  int cros = maxCrossingSubarray(arr, begin, mid, end);

  return max(cros, max(left, right));
}

int main() {

  vector<int> resultados;
  int n, custoPorDia;

  while (cin >> n)
  {
    cin >> custoPorDia;
    int receitas[n];
    for (int i=0; i < n; i++) {
      cin >> receitas[i];
      receitas[i] -= custoPorDia;
    }

    int resultado = maxContiguousSubarray(receitas, 0, n - 1);

    if (resultado >= 0) resultados.push_back(resultado);
    else resultados.push_back(0);
  }

  for (int resultado : resultados) cout << resultado << "\n";

  return 0;
}
