#include <stdio.h>
#include <iostream>
#include <cstdlib>

using namespace std;

int main() {
  float a, b, c;

  cin >> a >> b >> c;

  if ((abs(b - c) < a and a < (b + c)) || (abs(a - c) < b and b < (c + c)) || abs(a - b) < c and c < (a + b)){
    float perimetro = a + b + c;
    printf("Perimetro = %.1f\n", perimetro);
  }
  else{
    float area = ((a + b) * c)/2;
    printf("Area = %.1f\n", area);
  }

  return 0;
}
