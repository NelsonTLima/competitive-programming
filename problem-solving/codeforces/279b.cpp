#include <bits/stdc++.h>

using namespace std;

int main() {
  int n, t;

  cin >> n >> t;

  int books[n];
  for (int i=0; i < n; i++) cin >> books[i];

  int max_books = 0, i=0, j=0, sum=0;
  while (j < n){
    if (i == j) sum = books[i];
    else sum += books[j];

    if (sum > t) {
      sum -= books[i];
      i++;
    }
    else if (j - i + 1 > max_books){
      max_books = j - i + 1;
    }
    j++;
  }

  cout << max_books << endl;

  return 0;
}
