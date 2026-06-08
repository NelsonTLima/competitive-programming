#include <bits/stdc++.h>

using namespace std;

bool explore(int matrix[5][5], int x, int y) {
  int flag = false;
  matrix[x][y] = 1;

  if (x == 4 && y == 4) return true;

  for (int i=-1; i <= 1; i++){
    for (int j=-1; j <= 1; j++){
      if (i != 0 && j != 0) continue;
      // Se a posição está dentro da matriz e se não foi explorada.
      if ((x + i >= 0 && x + i < 5 && y + j >= 0 && y + j < 5) && matrix[x + i][y + j] == 0){
        flag = explore(matrix, x+i, y+j);
      }
    }
  }

  if (flag == true){
    for (int i=0; i < 5; i++){
      for (int j=0; j < 5; j++){
        if (matrix[i][j] == 0){
          matrix[i][j] = 1;
        }
      }
    }
  }

  return flag;
}

int main() {
  int t;
  vector<string> results;
  cin >> t;

  for (int n = 0; n < t; n++){

    int matrix[5][5];
    for (int i=0; i < 5; i++){
      for (int j=0; j < 5; j++){
        cin >> matrix[i][j];
      }
    }

    if (explore(matrix, 0, 0)) {
      results.push_back("COPS\n");
    }
    else{
      results.push_back("ROBBERS\n");
    }
  }

  for (int i=0; i < results.size(); i++){
    cout << results[i];
  }
  return 0;
}
