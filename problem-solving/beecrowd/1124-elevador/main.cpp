#include <bits/stdc++.h>

using namespace std;

int main(){
  int l, c, r1, r2;
  vector<char> res;
  while (cin >> l >> c >> r1 >> r2 and (l + c + r1 + r2)) {

    int bigger = max(l, c);
    int smaller = min(l, c);
    int R = max(r1, r2);
    int r = min(r1, r2);

    int x = bigger - (R + r);
    int y = smaller - (R + r);

    if (2*R > smaller) { res.push_back('N'); continue ;};

    int tmp = ((R + r)*(R + r)) - (x * x);

    int ty = sqrt(max(tmp, 0));

    if (x > 0 and y >= ty) res.push_back('S');
    else res.push_back('N');
  }

  for (auto c : res){
    cout << c << endl;
  }
}
