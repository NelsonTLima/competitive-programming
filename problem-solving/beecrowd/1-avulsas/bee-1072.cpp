#include <iostream>

using namespace std;

int main(){
  int qty, n, i, qty_in = 0, qty_out = 0;
  cin >> qty;

  for (i=0 ; i<qty; i++){
    cin >> n;
    if (n >= 10 and n <=20){
      qty_in++;
    }
    else{
      qty_out++;
    }
  }
  cout << qty_in << " in\n";
  cout << qty_out << " out\n";
}
