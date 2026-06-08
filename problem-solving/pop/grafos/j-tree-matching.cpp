#include <bits/stdc++.h>

using namespace std;

vector<vector<int>> GRAPH;

int _dfs(int *visited, int vertex, int flag=0){
  visited[vertex] = 1;
  int connected = 0;
  for (int next : GRAPH[vertex]){
    if (!visited[next]){
      connected += (flag) ? _dfs(visited, next, !flag) +1 : _dfs(visited, next, !flag);
    }
  }
  return connected;
}

int dfs(int vertex){
  int* visited_1 = new int[GRAPH.size() + 1]();
  int* visited_2 = new int[GRAPH.size() + 1]();

  return max(_dfs(visited_1, vertex), _dfs(visited_2, vertex, 1));
}

int bfs(int vertex, int flag = 1){
  int *visited = new int[GRAPH.size() + 1]();
  queue<int> q;
  q.push(vertex);
  int count = 0;
  while (!q.empty()){

    int current = q.front();
    q.pop();

    for (int next : GRAPH[current]){

      if (!visited[next]){
        flag = !flag;
        if (flag) count++;
        visited[next] = 1;
        q.push(next);
      }
    }
  }
  return count;
}

int main() {
  int n, a, b;
  cin >> n;

  GRAPH.resize(n+1);

  int i = n-1;
  while (i--){
    cin >> a >> b;
    GRAPH[a].push_back(b);
    GRAPH[b].push_back(a);
  }

  cout << max(bfs(1), dfs(1)) << endl;
  return 0;
}
