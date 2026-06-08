#include <bits/stdc++.h>

using namespace std;

string f(int x, int y, int z){
  if ( x*x + y*y == z*z or x*x + z*z == y*y or y*y + z*z == x*x){
    if (gcd(x,gcd(y,z)) == 1) return "tripla pitagorica primitiva\n";
    return "tripla pitagorica\n";
  }
  return "tripla\n";
}

int main() {
  int x, y, z;

  while (cin >> x >> y >> z){
    cout << f(x,y,z);
  }
}
