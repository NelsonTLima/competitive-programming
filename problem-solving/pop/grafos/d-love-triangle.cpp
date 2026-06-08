#include <bits/stdc++.h>

using namespace std;

vector<int> GRAPH;

bool test(int vertex) {
  vector<int> visited;
  visited.resize(GRAPH.size());

  int next = vertex;

  visited[next] = 1;
  int depth = 1;
  while (depth < 3) {
    next = GRAPH[next];
    if (visited[next]) return false;
    visited[next] = 1;
    depth++;
  }
  next = GRAPH[next];
  return (next == vertex) ? true : false;
}

bool solution(){
  bool flag = false;
  for (int i=1; i < GRAPH.size(); i++) {
    flag = test(i);
    if (flag == true) break;
  }
  return flag;
}

int main(){
  int n;
  cin >> n;
  GRAPH.resize(n + 1);

  for (int i=1; i <= n; i++){
    cin >> GRAPH[i];
  }

  if (solution()) cout << "YES\n";
  else cout << "NO\n";
  return 0;
}
