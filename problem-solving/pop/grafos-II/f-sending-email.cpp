#include <bits/stdc++.h>
#define INF std::numeric_limits<long>::max()

using namespace std;

long dijkstra(vector<vector<pair<long, long>>> &graph, long source, long end) {

  vector<long> dist(graph.size(), INF);
  priority_queue<pair<long, long>,
    vector<pair<long, long>>,
    greater<pair<long, long>>> pq;

  dist[source] = 0;
  pq.push({0, source});

  while (!pq.empty()) {

    long current_distance = pq.top().first;
    long current_vertex = pq.top().second;
    pq.pop();

    if (current_distance > dist[current_vertex]) continue;

    for (const auto& neighbor : graph[current_vertex]){
      long neighbor_vertex = neighbor.first;
      long edge_weight = neighbor.second;

      if (dist[current_vertex] + edge_weight < dist[neighbor_vertex]) {
        dist[neighbor_vertex] = dist[current_vertex] + edge_weight;
        pq.push({dist[neighbor_vertex], neighbor_vertex});
      }
    }
  }
  return dist[end];
}

int main(){
  int c;
  cin >> c;

  for (int i = 1; i <= c; i++) {
    int n, m, s, t;
    cin >> n >> m >> s >> t;

    vector<vector<pair<long, long>>> graph(n);

    long a, b, c;
    for (int i=0; i < m; i++){
      cin >> a >> b >> c;
      graph[a].push_back({b, c});
      graph[b].push_back({a, c});
    }

    long delay = dijkstra(graph, s, t);

    cout << "Case #" << i << ": ";
    if (delay == INF) cout << "unreachable\n";
    else cout << delay << endl;

  }

  return 0;
}
