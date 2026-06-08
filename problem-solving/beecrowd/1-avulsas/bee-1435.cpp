#include <bits/stdc++.h>

using namespace std;

int main() {

  int n;
  while(cin >> n && n != 0){

    for (int i=1; i <= n; i++){
      for (int j=i-1; j <= n - i; j++){
        for (int k=i-1; k <= n - i; k++){
          matrix[j][k] = i;
          if (j > i-1 && j < n - i){
            k += n - 2*i;
          }
        }
      }
    }

    // Prints matrix
    for (int i=0; i < n; i++){
      for (int j=0; j < n; j++){

        // Justifying right
        if (matrix[i][j] < 10){
          cout << "  " << matrix[i][j];
        }
        else if(matrix[i][j] < 100){
          cout << " " << matrix[i][j];
        }
        else{
          cout << matrix[i][j];
        }

        if (j < n - 1){
          cout << " ";
        }
        else{
          cout << "\n";
        }
      }
    }
    cout << "\n";
  }
  return 0;
}
