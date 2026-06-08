#include <iostream>

using namespace std;

int main() {
  int n1, n2, n3, a, b, c, buffer;

  cin >> n1 >> n2 >> n3;
  a = n1;
  b = n2;
  c = n3;

  if  (a > c) {
    buffer = a;
    a = c;
    c = buffer;
  }

  if  (a > b) {
    buffer = a;
    a = b;
    b = buffer;
  }
  if  (b > c) {
    buffer = b;
    b = c;
    c = buffer;
  }

  cout << a << endl;
  cout << b << endl;
  cout << c << "\n\n";

  cout << n1 << endl;
  cout << n2 << endl;
  cout << n3 << endl;
  return 0;
}
