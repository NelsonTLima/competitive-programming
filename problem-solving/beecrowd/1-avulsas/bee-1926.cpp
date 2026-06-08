#include <bits/stdc++.h>

using namespace std;

// Crivo.
bool is_prime[1000000 + 1];

bool is_twin(int x){
  if (is_prime[x] and (is_prime[x - 2] or is_prime[x + 2])) return true;
  return false;
}

int main() {

  // crivo.
  for( int i=2; i<= 1000000 ; i++ ) is_prime[i] = true;

  for( int64_t i=2; i<=1000000 ; i++ ){
    if( not is_prime[i] ) continue;
    for( int64_t j=i*i; j <= 1000000; j+=i ) is_prime[j] = false;
  }

  vector<int> twinCount;
  int c=0;
  for (int i=0; i <= 1000000; i++){

    twinCount.push_back(c);
    if (is_twin(i)) {
      c++;
    }
  }

  int q, x, y, buffer;
  vector<int> results;

  cin >> q;
  for (int i=0; i < q; i++){
    cin >> x >> y;
    if (x > y){
      buffer = y;
      y = x;
      x = buffer;
    }

    (is_twin(y)) ?
      results.push_back(twinCount[y] - twinCount[x] + 1) :
      results.push_back(twinCount[y] - twinCount[x]);
  }

  for (int i : results) cout << i << "\n";

  return 0;
}
