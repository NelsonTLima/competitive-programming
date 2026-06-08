#include <bits/stdc++.h>

using namespace std;

int main() {
  int a, b, gt, lw, i, sum;


  while (true){
    sum = 0;
    cin >> a >> b;

    if (a <= 0 || b <= 0){ break; }

    gt = a;
    lw = b;
    if (a < b) {
      gt = b;
      lw = a;
    }

    for (int i=lw; i<=gt; i++){
      cout << i << " ";
      sum += i;
    }
    cout << "Sum="<< sum << endl;
  }

  return 0;
}
