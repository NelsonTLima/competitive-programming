#include <bits/stdc++.h>

using namespace std;

vector<vector<int>> GRAPH;

//  BFS
void bfs(int source, int destination){

  queue<int> q;
  vector<int> VISITED;
  vector<int> PREDECESSOR;
  PREDECESSOR.resize(destination + 1);
  VISITED.resize(destination + 1);

  q.push(source);

  VISITED[source] = 1;

  while (!q.empty()){

    int current = q.front();
    q.pop();

    for (int next : GRAPH[current]) {
      if (!VISITED[next]){
        PREDECESSOR[next] = current;
        VISITED[next] = 1;
        q.push(next);
      }
      if (current == destination) {
        while (!q.empty()) q.pop();
        break;
      }
    }
  }

  if (!VISITED[destination]) cout << "IMPOSSIBLE\n";
  else{
    vector<int> path;
    int current = destination;
    path.push_back(current);
    while (PREDECESSOR[current] != 0) {
      path.insert(path.begin(), PREDECESSOR[current]);
      current = PREDECESSOR[current];
    }

    cout << path.size() << endl;
    for (int i=0; i < path.size(); i++) {
      if (i == path.size() - 1) cout << path[i] << endl;
      else cout << path[i] << " ";
    }
  }
}

int main(){
  int n, m, a, b;
  cin >> n >> m;

  GRAPH.resize(n+1);

  while (m--){
    cin >> a >> b;
    GRAPH[a].push_back(b);
    GRAPH[b].push_back(a);
  }

  bfs(1, n);
  return 0;
}
