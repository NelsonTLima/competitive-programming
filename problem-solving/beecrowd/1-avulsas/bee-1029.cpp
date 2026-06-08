#include <bits/stdc++.h>

using namespace std;

struct Fibonacci{
  int qtyCalls;
  int result;
};

int fib(int x, int* counter){
  (*counter)++;
  if (x == 0 || x == 1) return x;
  return fib(x - 1, counter) + fib(x - 2, counter);
}

Fibonacci calculateFib(int x){
  Fibonacci newFibonacci;

  newFibonacci.qtyCalls = -1;
  newFibonacci.result = fib(x, &newFibonacci.qtyCalls);

  return newFibonacci;
}

int main(void){
  int n, x;
  Fibonacci current;
  string result;
  vector<string> results;

  cin >> n;

  for (int i = 0; i < n; i++){
    cin >> x;
    current = calculateFib(x);
    result = "fib("+ to_string(x) + ") = " + to_string(current.qtyCalls) + " calls = " + to_string(current.result) +  "\n";
    results.push_back(result);

  }

  for (int i = 0; i < results.size(); i++){
    cout << results[i];
  }

  return 0;
}
