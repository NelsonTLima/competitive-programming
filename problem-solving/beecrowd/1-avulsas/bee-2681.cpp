#include <bits/stdc++.h>

using namespace std;

class BigInt{
private:
  vector<int> digits;

public:
  BigInt( string n ) {
    for (char digit : n){
      digits.push_back(atoi(&digit));
    }
  }

  void print() {
    for (int digit : digits){
      cout << digit;
    }
  }
};

BigInt fast_pow(int b, BigInt n) {
  BigInt res(1);
  if (n == 0) {
    return res;
  }
  res = fast_pow(b, n/2);
  re = res * res;
  if (n % 2 != 0) {
    res = res * b;
  }
  return res;
}

int main() {
  unsigned long long a = 1;

  for (int i=0; i < 40; i++){
    a *= 10;
    cout << a << endl;
  }
  //BigInt bi("123456767578468748189768697987652627185");

  //bi.print();
  return 0;
}
