#include <iostream>

using namespace std;

int main(){
  int n;

  int x = 0;
  int y = 1;
  int z;

  cin >> n;
  cout << x << " ";
  cout << y;
  for (int i=0; i < n-2; i++){
    z = x + y;
    cout << " " << z;
    x = y;
    y = z;
  }
  cout << "\n";

  return 0;
}
