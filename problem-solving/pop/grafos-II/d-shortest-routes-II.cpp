#include <bits/stdc++.h>

#define INF std::numeric_limits<long long>::max()

using namespace std;

void floyd_warshall(vector<vector<long long>> &graph){
  int v = graph.size();
  for (int k=1; k < v; k++){
    for (int i=1; i < v; i++){
      for (int j=1; j < v; j++){
        if (graph[i][k] < INF and graph[k][j] < INF ){
          graph[i][j] = min(graph[i][j], graph[i][k] + graph[k][j]);
        }
      }
    }
  }
}

int main(){
  int n, m, q, a, b;
  long long c;

  cin >> n >> m >> q;

  vector<vector<long long>> adjMatrix(n + 1, vector<long long>(n + 1, INF));

  for (int i=0; i < m; i++){
    cin >> a >> b >> c;
    if (c < adjMatrix[a][b]) {
      adjMatrix[a][b] = c;
      adjMatrix[b][a] = c;
    }
  }

  for (int i=0; i <= n; i++) adjMatrix[i][i] = 0;

  floyd_warshall(adjMatrix);

  while (q--) {
    cin >> a >> b;

    if (adjMatrix[a][b] == INF)
      cout << "-1" << endl;
    else cout << adjMatrix[a][b] << endl;
  }
  return 0;
}
