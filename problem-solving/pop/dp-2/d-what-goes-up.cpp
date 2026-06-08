#include <bits/stdc++.h>

using namespace std;

vector<long> longestIncreasingSubsequence(vector<long> &v){
  vector<long> dp(v.size() + 1, numeric_limits<long>::max());
  vector<long>::iterator it;

  for (int i=0; i < v.size(); i++){
    it = lower_bound(dp.begin(), dp.end(), v[i]);
    if (it > dp.end()) break;
    *it = v[i];
  }
  dp.resize(distance(dp.begin(), it) + 1);
  return dp;
}

int main(){
  long n;
  vector<long> v;
  while (cin >> n) v.push_back(n);
  vector<long> l = longestIncreasingSubsequence(v);
  cout << l.size() << endl << "-" << endl;
  for (auto i : l) cout << i << endl;
  return 0;
}
