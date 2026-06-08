#include <bits/stdc++.h>

using namespace std;

int main(){
  int n;
  cin >> n;
  int matrix[n][n];
  for (int i=0; i < n; i++) {
    for (int j=0; j < n; j++) {
      cin >> matrix[i][j];
    }
  }

  vector<vector<int>> outs;

  for (int i=0; i < n; i++){
    vector<int> vertices;
    for (int j=0; j < n; j++){
      if (matrix[i][j] == 1){
        vertices.push_back(j + 1);
      }
    }
    outs.push_back(vertices);
  }

  for (int i=0; i < outs.size(); i++) {
    for (int j=0; j < outs[i].size(); j++) {
      if (j == outs[i].size() -1) cout << outs[i][j];
      else cout << outs[i][j] << " ";
    }
    cout << "\n";
  }
  return 0;
}
