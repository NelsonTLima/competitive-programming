#include <bits/stdc++.h>

using namespace std;

int main() {

  vector<char> output;
  int a;
  while (cin >> a){
    if (a < 0 || a > 180){
      continue;
    }
    if (a % 6 == 0){
      output.push_back('Y');
    }
    else{
      output.push_back('N');
    }
  }

  for (int i=0; i < output.size(); i++){
    cout << output[i] << endl;
  }

  return 0;
}
