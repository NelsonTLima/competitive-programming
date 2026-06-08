#include <bits/stdc++.h>

using namespace std;

bool isPrime(int x){

  if (x == 1) return false;
  if (x == 2) return true;
  if (x % 2 == 0) return false;

  for (int i=3; i * i <= x; i+=2){
    if (x % i == 0) return false;
  }
  return true;
}

bool primeDigits(int x){
  while (x > 0){
    int digit = x % 10;
    if (!isPrime(digit)) return false;
    x /= 10;
  }
  return true;
}

int main() {
  int n;
  vector<string> results;

  while (cin >> n){
    if (!isPrime(n)) {
      results.push_back("Nada\n");
      continue;
    }
    if (primeDigits(n)) {
      results.push_back("Super\n");
      continue;
    }
    results.push_back("Primo\n");
  }

  for (int i=0; i < results.size(); i++){
    cout << results[i];
  }
  return 0;
}
