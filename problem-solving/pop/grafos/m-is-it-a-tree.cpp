#include <bits/stdc++.h>

using namespace std;

vector<vector<int>> GRAPH;
vector<int> VISITED;

// Dfs based.
bool ciclic(int vertex = 1) {
  VISITED[vertex] = 1;
  for (int next : GRAPH[vertex]) {
    if (VISITED[next]) return true;
    if (ciclic(next)) return true;
  }
  return false;
}

bool allVisited(){
  for (int i=1; i < VISITED.size(); i++){
    if (!VISITED[i]){
      return false;
    }
  }
  return true;
}

int main(){
  int n, m, u, v;
  cin >> n >> m;

  GRAPH.resize(n+1);
  VISITED.resize(n+1);

  for(int i=0; i < m; i++){
    cin >> u >> v;
    GRAPH[u].push_back(v);
  }

  if (not ciclic() and allVisited()) cout << "YES\n";
  else cout << "NO\n";
  return 0;
}
