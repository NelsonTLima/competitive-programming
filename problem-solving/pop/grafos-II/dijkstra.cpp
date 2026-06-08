#include <bits/stdc++.h>

#define INF std::numeric_limits<int>::max()

using namespace std;

size_t closest_avaliable(vector<int> *distance, vector<int> *visited){
  size_t min_idx = -1;
  int min_dist = INF;
  for (size_t i=0; i < (*distance).size(); i++){
    if ((*distance)[i] < min_dist && !(*visited)[i]) {
      min_dist = (*distance)[i];
      min_idx = i;
    }
  }
  return min_idx;
}

vector<int> dijkstra(vector<vector<pair<int, int>>> *graph, int source, int end) {
  vector<int> distance((*graph).size(), INF);
  vector<int> visited((*graph).size(), false);
  unordered_map<int, int> predecessor;

  distance[source] = 0;

  for (int i = 1; i < (*graph).size(); i++){
    size_t current = closest_avaliable(&distance, &visited);
    if (current == -1) break;
    visited[current] = true;

    for (auto &next : (*graph)[current] ){
      size_t next_vertex = next.first;
      int next_distance = next.second;
      if (distance[current] + next_distance <  distance[next_vertex]){
        distance[next_vertex] = distance[current] + next_distance;
        predecessor[next_vertex] = current;
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

  vector<vector<pair<int, int>>> graph(n+1);

  int a, b;
  long c;
  for (int i=0; i < m; i++){
    cin >> a >> b >> c;
    graph[a].push_back({b, c});
    graph[b].push_back({a, c});
  }

  vector<int> path = dijkstra(&graph, 1, n);

  for (int i : path){
    cout << i << " ";
  }
  cout << endl;

  return 0;
}
