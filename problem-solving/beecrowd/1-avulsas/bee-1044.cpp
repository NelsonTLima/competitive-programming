#include <iostream>
#include <cstdlib>

using namespace std;

int main() {
  int a, b, buffer;
  cin >> a >> b;
  a = abs(a);
  b = abs(b);

  if (a > b) {
    buffer = a;
    a = b;
    b = buffer;
  }

  if (b % a == 0){
    cout << "Sao Multiplos\n";
  }
  else{
    cout << "Nao sao Multiplos\n";
  }

  return 0;
}
