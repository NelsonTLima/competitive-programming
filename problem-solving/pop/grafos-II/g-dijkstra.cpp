#include <bits/stdc++.h>
#define INF std::numeric_limits<long>::max()

using namespace std;

map<int, vector<pair<int, long>>> graph;

vector<int> dijkstra(int source, int end) {
  map<int, int> predecessor;
  map<int, long> distance;
  priority_queue<pair<int, long>, vector<pair<int, long>>, greater<pair<int, long>>> pq;
  map<int, bool> visited;

  distance[source] = 0;
  pq.push({0, source});

  while (!pq.empty()) {

    int current_distance = pq.top().first;
    int current_vertex = pq.top().second;
    visited[current_vertex] = true;
    pq.pop();

    for (auto neighbor : graph[current_vertex]){
      int neighbor_vertex = neighbor.first;
      if (visited[neighbor_vertex]) continue;

      long edge_weight = neighbor.second;
      long new_distance = current_distance + edge_weight;

      if (!distance.count(neighbor_vertex)) distance[neighbor_vertex] = INF;

      if (new_distance < distance[neighbor_vertex]) {
        distance[neighbor_vertex] = new_distance;
        predecessor[neighbor_vertex] = current_vertex;
        pq.push({new_distance, neighbor_vertex});
      }
    }
  }

  if (!predecessor[end]){
    return {-1};
  }
  else {
    int current_vertex = end;
    vector<int> path;
    while (current_vertex) {
      path.push_back(current_vertex);
      current_vertex = predecessor[current_vertex];
    }
    reverse(path.begin(), path.end());
    return path;
  }
}

int main(){
  int n, m;
  cin >> n >> m;

  int a, b;
  long c;
  for (int i=0; i < m; i++){
    cin >> a >> b >> c;
    graph[a].push_back({b, c});
    graph[b].push_back({a, c});
  }

  vector<int> path = dijkstra(1, n);

  for (int i : path){
    cout << i << " ";
  }
  cout << endl;

  return 0;
}
