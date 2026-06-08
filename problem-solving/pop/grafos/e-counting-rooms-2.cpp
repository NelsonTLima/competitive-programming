#include <bits/stdc++.h>

using namespace std;

vector<vector<int>> VISITED;

void exploreRoom(int x, int y) {
  if (
      x >= 0 and
      y >= 0 and
      x < VISITED.size() and
      y < VISITED[0].size() and
      !VISITED[x][y]
      )
  VISITED[x][y] = 1;
  else return;

  exploreRoom(x, y - 1);
  exploreRoom(x - 1, y);
  exploreRoom(x, y + 1);
  exploreRoom(x + 1, y);
}

int main(){
  int n, m;
  cin >> n >> m;

  // MAPA DAS ILHAS.
  VISITED.resize(n);
  for (int i=0; i < VISITED.size(); i++) VISITED[i].resize(m);

  char tmp;
  int vertex = 1;
  for (int i=0; i < n; i++){
    for (int j=0; j < m; j++){
      cin >> tmp;
      if (tmp == '.') {
        VISITED[i][j] = 0;
      }
      else {
        VISITED[i][j] = 1;
      }
    }
  }

  int roomCount = 0;
  for (int i=0; i < VISITED.size(); i++){
    for (int j=0; j < VISITED[i].size(); j++){
      if (!VISITED[i][j]) {
        exploreRoom(i, j);
        roomCount++;
      }
    }
  }

  /* MOSTRAR O MAPA PRONTO
  for (int i=0; i < VISITED.size(); i++){
    for (int j : VISITED[i])
      cout << j << " ";
  cout << endl;
  }*/

  cout << roomCount << endl;


  return 0;
}
