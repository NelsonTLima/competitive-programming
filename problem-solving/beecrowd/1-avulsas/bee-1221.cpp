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

int main() {
  int n, x;
  vector<string> results;

  cin >> n;
  for (int i=0; i < n; i++){
    cin >> x;

    if (isPrime(x)){
      results.push_back("Prime\n");
      continue;
    }
    results.push_back("Not Prime\n");
  }

  for (int i=0; i < results.size(); i++) cout << results[i];

  return 0;
}
