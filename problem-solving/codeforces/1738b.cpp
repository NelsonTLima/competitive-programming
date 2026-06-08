#include <bits/stdc++.h>

using namespace std;

bool possible(long long s[], int n, int k){

  // ALTHOUGH K IS LESS THAN N, S[] SIZE MUST BE N ANYWAY.
  // So you'll be able to complete the prefix sum array;

  // SPECIAL CASES:
  if (k > n) return false;
  if (k == 1) return true;

  // General solution.
  long long a[n];
  int i = i=n;
  while (i--){
    if (i == 0) {
      a[0] = s[0];

      int j = n - k;
      while (k < n and a[0] > a[1]){
        if (a[j] == a[j+1]) j--;
        else if (a[j] > a[j+1]) return false;
        else { a[0]--; a[j]++; }
      }

    }
    else if (i > n - k)
      a[i] = s[i] - s[i-1];
    else if (s[i] == 0 and a[i+1] >= 0)
      return true;
    else{
      a[i] = a[i+1] - 1;
      s[i-1] = s[i] - a[i];
    }
    if (i < n-1 and a[i] > a[i+1]) return false;
  }
  return true;
}

int main() {
  int t, n, k, i;

  cin >> t;
  while (t--){
    cin >> n >> k;
    long long s[n];
    for (i=n-k; i < n; i++) cin >> s[i];

    if (possible(s, n, k)) cout << "Yes\n";
    else cout << "No\n";
  }
  return 0;
}
