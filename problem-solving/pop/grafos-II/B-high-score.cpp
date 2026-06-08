#include <bits/stdc++.h>
#define NINF std::numeric_limits<long>::min()+10e9

using namespace std;

bool bfs(vector<vector<pair<int, long>>> &graph, int start, int end){
  vector<bool> visited(graph.size(), false);
  visited[start] = true;

  queue<int> q;
  q.push(start);

  while (!q.empty()){
    int current = q.front();
    if (current == end) return true;
    q.pop();
    for (auto p : graph[current]){
      int next = p.first;
      if (!visited[next]){
        visited[next] = true;
        q.push(next);
      }
    }
  }
  return false;
}

long belmanFord(vector<vector<pair<int, long>>> &graph, int source) {
  int v = graph.size();
  vector<long> dist(v, NINF);
  vector<int> parent(v, -1);

  dist[source] = 0;

  for (int k=0; k < v; k++){
    for (int a=0; a < v; a++){
      for (auto edge : graph[a]) {
        int b = edge.first;
        long weight = edge.second;
        if (dist[b] < dist[a] + weight) {
          dist[b] = dist[a] + weight;
          parent[b] = a;
        }
      }
    }
  }

  int out = dist[v-1];

  vector<int> cycle;
  for (int a=0; a < v; a++){
    for (auto edge : graph[a]){
      int b = edge.first;
      long weight = edge.second;
      if (dist[b] < dist[a] + weight){
        dist[b] = dist[a] + weight;
        cycle.push_back(b);
      }
    }
  }

  if (!cycle.empty()) {
    for (auto x: cycle) {
      if (bfs(graph, x, v - 1) and bfs(graph, source, x)) return -1;
    }
  }

  return dist[v - 1];
}

int main(){
  int n, m;
  cin >> n >> m;

  vector<vector<pair<int, long>>> graph(n);

  long a, b, c;
  for (int i=0; i < m; i++){
    cin >> a >> b >> c;
    graph[a-1].push_back({b-1, c});
  }

  cout << belmanFord(graph, 0) << endl;

  return 0;
}
