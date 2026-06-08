#include <iostream>

using namespace std;

int main(){
  int x, y, i, buffer, s=0;
  cin >> x >> y;;

  if (x > y) {
    buffer = x;
    x = y;
    y = buffer;
  }

  for (i=x+1; i<y; i++){
    if (i % 2 != 0){
      s += i;
    }
  }
  cout << s << "\n";
}
