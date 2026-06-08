#include <iostream>

using namespace std;

int main(){
  int x=0;
  for (int i=1; i<=9; i+=2){
    for (int j=7+x; j>=5+x; j--){
      cout << "I=" << i << " J=" << j << "\n";
    }
    x+=2;
  }
  return 0;
}
