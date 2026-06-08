#include <bits/stdc++.h>

using namespace std;

int main() {

  int t, i, n, c;
    cin >> t;

  while (t--){
    cin >> n;

    int arr[n];
    for (i=0; i < n; i++) cin >> arr[i];

    i=0;
    c=0;
    n = n - 1;
    while (i < n) {
      if (arr[i] == 0) { i++; continue;}

      while (arr[n] == 1 and i < n) n--;

      if (i == n) break;
      n--;
      c++;
      i++;
    }

    cout << c << endl;
  }

  return 0;
}
