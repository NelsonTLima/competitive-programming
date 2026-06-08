#include <bits/stdc++.h>

using namespace std;

int main() {
  int n, x, i;
  string sign, result;
  vector<string> results;

  cin >> n;

  for (i=0; i<n; i++){
    cin >> x;
    if (x >= 0){
      sign = "POSITIVE\n";
    }
    else{
      sign = "NEGATIVE\n";
    }

    if (x == 0){
      results.push_back("NULL\n");
    }
    else if (abs(x) % 2 == 0){
      results.push_back("EVEN " + sign);
    }
    else{
      results.push_back("ODD " + sign);
    }
  }

  for (string i : results){
    cout << i;
  }
  return 0;
}
