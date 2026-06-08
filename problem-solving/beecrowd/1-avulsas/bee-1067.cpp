#include <iostream>

using namespace std;

int main(){
  int n, c=0;
  cin >> n;

  while (c < 6){
    if (n % 2 != 0){
      c++;
      cout << n << "\n";
    }
    n++;
  }
}
