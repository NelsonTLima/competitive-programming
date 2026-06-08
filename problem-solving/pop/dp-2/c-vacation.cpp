#include <bits/stdc++.h>

using namespace std;

int solution(int days, int *a, int *b, int *c){
  int dp[days][3];

  dp[0][0] = a[0];
  dp[0][1] = b[0];
  dp[0][2] = c[0];

  for (int i=1; i < days; i++){
    dp[i][0] = a[i] + max(dp[i-1][1], dp[i-1][2]);
    dp[i][1] = b[i] + max(dp[i-1][0], dp[i-1][2]);
    dp[i][2] = c[i] + max(dp[i-1][0], dp[i-1][1]);
  }

  return max(
      dp[days-1][0], max(
      dp[days-1][1],
      dp[days-1][2]
      ));
}

int main(){
  int days;
  cin >> days;
  int a[days], b[days], c[days];
  for (int i=0; i < days; i++) cin >> a[i] >> b[i] >> c[i];
  cout << solution(days, a, b, c) << endl;
  return 0;
}
