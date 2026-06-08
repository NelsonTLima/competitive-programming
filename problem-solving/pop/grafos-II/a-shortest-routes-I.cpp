#include <bits/stdc++.h>
#define INF std::numeric_limits<long>::max()

using namespace std;

vector<long> dijkstra(vector<vector<pair<long, long>>> &graph, long source) {

  vector<long> shortest_distances(graph.size(), INF);
  priority_queue<pair<long, long>, vector<pair<long, long>>, greater<pair<long, long>>> pq;

  shortest_distances[source] = 0;
  pq.push({0, source});

  while (!pq.empty()) {

    long current_distance = pq.top().first;
    long current_vertex = pq.top().second;
    pq.pop();

    if (current_distance > shortest_distances[current_vertex]) continue;

    for (const auto& neighbor : graph[current_vertex]){
      long neighbor_vertex = neighbor.first;
      long edge_weight = neighbor.second;

      if (shortest_distances[current_vertex] + edge_weight < shortest_distances[neighbor_vertex]) {
        shortest_distances[neighbor_vertex] = shortest_distances[current_vertex] + edge_weight;
        pq.push({shortest_distances[neighbor_vertex], neighbor_vertex});
      }
    }
  }
  return shortest_distances;
}

int main(){
  int n, m;
  cin >> n >> m;

  vector<vector<pair<long, long>>> graph;
  graph.resize(n);

  long a, b, c;
  for (int i=0; i < m; i++){
    cin >> a >> b >> c;
    graph[a-1].push_back({b-1, c});
  }

  //graph.erase(graph.begin());

  vector<long> shortest_distances = dijkstra(graph, 0);

  for (int i=0; i < shortest_distances.size(); i++){
    if (i == shortest_distances.size() -1) cout << shortest_distances[i] << endl;
    else cout << shortest_distances[i] << " ";
  }
  return 0;
}
