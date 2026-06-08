#include <bits/stdc++.h>

using namespace std;

int main() {
  int t, l, r, n,flag;
  cin >> t;

  while (t--) {
    cin >> n;
    long long arr[n];

    for (l=0; l < n; l++) cin >> arr[l];

    l=0;
    flag=0;
    while (l < n) {
      if (n == 1) { flag++; break; }
      if (l == 0 and arr[l] < arr[l+1]) {l++; flag++; continue;}
      if (l == n-1 and arr[l] < arr[l-1]) { flag++; break;}

      if (not (l == 0 or arr[l] < arr[l-1])) { l++; continue; }

      r = l;
      while (r < n - 1 and arr[r] == arr[r + 1]) r++;

      if (r == n - 1) { flag++; break; }
      else if (r == 0) { l++; continue; }

      if (arr[r] <= arr[r + 1]) {
        flag++;
      }
      l = r+1;
    }
    if (flag == 1) cout << "YES\n";
    else cout << "NO\n";
  }
  return 0;
}
