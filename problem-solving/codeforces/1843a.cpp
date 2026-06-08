#include <bits/stdc++.h>

using namespace std;

int main() {
  int t, n, i, j, c, num;


  cin >> t;
  while (t--){

    cin >> n;

    int arr[n];

    cin >> arr[0];
    for (i=1; i < n; i++) {
      cin >> arr[i];
    }

    sort(arr, arr + (sizeof(arr) / sizeof(arr[0])));

    if (n <= 1) { cout << 0 << endl; continue ;}

    c=0;
    i=0;
    n=n-1;
    while (i < n){
      c += arr[n] - arr[i];
      i++;
      n--;
    }

    cout << c << endl;
  }

  return 0;
}
