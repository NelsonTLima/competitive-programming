#include <iostream>

using namespace std;

int main(){
  int n;

  cin >> n;

  int count = 1;
  for (int i=0; i < n; i++){
    for (int j=0; j < 3; j++ ){
      cout << count << " ";
      count++;
    }
    cout << "PUM\n";
    count++;
  }

  return 0;
}
