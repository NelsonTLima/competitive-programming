#include <bits/stdc++.h>
#define INF std::numeric_limits<long>::max()-10e9

using namespace std;

vector<int> belmanFord(vector<vector<pair<int, long>>> &graph, int source) {
  int v = graph.size();
  vector<long> dist(v, INF);
  unordered_map<int, int> parent;
  unordered_map<int, int> visited;

  dist[source] = 0;

  for (int k=0; k < v; k++){
    for (int a=0; a < v; a++){
      for (auto edge : graph[a]) {
        int b = edge.first;
        long weight = edge.second;
        if (dist[b] > dist[a] + weight) {
          dist[b] = dist[a] + weight;
          parent[b] = a;
        }
      }
    }
  }

  int c = -1;
  for (int a=0; a < v; a++){
    for (auto edge : graph[a]){
      int b = edge.first;
      long weight = edge.second;
      if (dist[b] > dist[a] + weight){
        dist[b] = dist[a] + weight;
        c = b;
      }
    }
  }

  if (c != -1) {
    for (size_t i=0; i < graph.size(); i++){
      c = parent[c];
    }
    vector<int> cycle;
    int y = c;
    while (true) {
      if (y == c and !cycle.empty()) break;
      cycle.push_back(y + 1);
      y = parent[y];
    }
    reverse(cycle.begin(), cycle.end());
    cycle.push_back(cycle.front());
    return cycle;
  }

  return {};
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

  vector<int> cycle = belmanFord(graph, 0);

  if (cycle.empty()) cout << "NO";
  else {
    cout << "YES\n";
    cout << cycle[0];
    for (size_t i=1; i < cycle.size(); i++)
      cout << " " << cycle[i];
    cout << endl;
  }

  return 0;
}
