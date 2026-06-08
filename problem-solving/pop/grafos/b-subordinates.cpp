#include <bits/stdc++.h>

using namespace std;

vector<int> VISITED;
vector<int> SUBORDINATES;
vector<vector<int>> GRAPH;

int dfs(int vertice) {
  VISITED[vertice] = 1;

  int subordinates = 0;
  for (int next : GRAPH[vertice]){
    if (!VISITED[next]){
      subordinates += dfs(next) + 1;
    }
    else{
      subordinates += SUBORDINATES[next];
    }
  }
  return SUBORDINATES[vertice] = subordinates;
}

int main(){
  int n;
  cin >> n;

  GRAPH.resize(n + 1);

  int edge;                                 // Edge represents the employer.
  for (int node=2; node <= n ; node++) {    // Node represents the subordinate.
    cin >> edge;
    GRAPH[edge].push_back(node);
  }

  VISITED.resize(n + 1);
  SUBORDINATES.resize(n + 1);

  dfs(1);

  for (int i=1; i <= n; i++) {
    if (i == n) {
      cout << SUBORDINATES[i] << endl;
    }
    else cout << SUBORDINATES[i] << " ";
  }

  return 0;
}
