#include <bits/stdc++.h>

using namespace std;

#define PI M_PI

int main() {

  vector<float> results;
  int c;
  cin >> c;

  double l, n, B, b, H, h, v;

  for (int i=0; i < c; i++){
    cin >> n >> l >> b >> B >> H;

    v = l / n; // volume de liquido

    // Se o cone for, na verdade um cilindro...
    if (B == b) h = (v) / (PI * b * b);

    else {
      B = cbrt(v * 3 * (B - b) / (PI * H) + pow(b, 3));
      h = (3 * v) / (PI * ((B * B) + (B * b) + (b * b)));
    }

    results.push_back(h);
  }

  for (float i : results) cout << fixed << setprecision(2) << i << endl;

  return 0;
}
