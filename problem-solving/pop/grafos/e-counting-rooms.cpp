#include <bits/stdc++.h>

using namespace std;

typedef struct {
  int x;
  int y;
} Coordinate;

vector<int> VISITED;
vector<vector<int>> GRAPH;
unordered_map<int, Coordinate> VERTICES;

void dfs(int vertice) {
  VISITED[vertice] = 1;
  for (int next : GRAPH[vertice]) {
    if (!VISITED[next]) {
      dfs(next);
    }
  }
}

int main(){
  int n, m;
  cin >> n >> m;

  // MAPA DAS ILHAS.
  int matrix[n][m];
  char tmp;
  int vertex = 1;
  for (int i=0; i < n; i++){
    for (int j=0; j < m; j++){
      cin >> tmp;
      if (tmp == '.') {
        Coordinate coordinate = {i, j};
        VERTICES[vertex] = coordinate;
        vertex++;
      }
    }
  }

  // CONSTRUINDO A LISTA DE ADJACENCIAS
  GRAPH.resize(VERTICES.size() + 1);
  for (int i=0; i < VERTICES.size(); i++){
    for (int j=i+1; j < VERTICES.size(); j++){
      if (
          ( VERTICES[i].x == VERTICES[j].x and
            (VERTICES[i].y == VERTICES[j].y + 1 or
            VERTICES[i].y == VERTICES[j].y - 1)
          ) or
          ( VERTICES[i].y == VERTICES[j].y and
            (VERTICES[i].x == VERTICES[j].x + 1 or
            VERTICES[i].x == VERTICES[j].x - 1))
        ) {// São adjacentes.
        GRAPH[i].push_back(j);
        GRAPH[j].push_back(i);
      }
    }
  }

  // FAZ UMA BUSCA PARA CADA VERTICE NÃO VISITADO.
  // o numero de ilhas será igual o numero de buscas realizadas.
  // vou usar dfs para ver se resolve sem levar TLE.
  VISITED.resize(GRAPH.size());
  int room_count = 0;
  for (int v=1; v < GRAPH.size(); v++) {
    if (!VISITED[v]) {
      room_count++;
      dfs(v);
    }
  }
  cout << room_count << endl;

  return 0;
}
