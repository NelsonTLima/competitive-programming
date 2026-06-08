#include <bits/stdc++.h>

using namespace std;

vector<vector<char>> LABYRINTH;
vector<vector<int>> VISITED;

int inBounds(int x, int y){
 return (
          x >= 0 and
          y >= 0 and
          x < LABYRINTH.size() and
          y < LABYRINTH[x].size() and
          LABYRINTH[x][y] != '#' and
          !VISITED[x][y]
        );
}

int cmp(string& a, string& b){
  return a.size() < b.size();
}

string explore(int x, int y) {
  if (!inBounds(x, y)) return "";

  if (LABYRINTH[x][y] == 'B') return "B";

  VISITED[x][y] = 1;

  string l, r, u, d;

  vector<string> substrings;

  l = (inBounds(x, y - 1)) ? "L" + explore(x, y - 1) : "";
  d = (inBounds(x + 1, y)) ? "D" + explore(x + 1, y) : "";
  r = (inBounds(x, y + 1)) ? "R" + explore(x, y + 1) : "";
  u = (inBounds(x - 1, y)) ? "U" + explore(x - 1, y) : "";

  if (l != "") substrings.push_back(l);
  if (u != "") substrings.push_back(u);
  if (r != "") substrings.push_back(r);
  if (d != "") substrings.push_back(d);

  vector<string> eligible;
  for (string s : substrings){
    if (s[s.size() - 1] == 'B') eligible.push_back(s);
  }

  if (eligible.empty()) return "";

  return *min_element(eligible.begin(), eligible.end(), cmp);
}

int main(){
  int n, m, ai, aj;
  cin >> n >> m;

  // MAPA DO LABIRINTOS.
  LABYRINTH.resize(n);
  for (char i=0; i < LABYRINTH.size(); i++) LABYRINTH[i].resize(m);

  VISITED.resize(n);
  for (char i=0; i < VISITED.size(); i++) VISITED[i].resize(m);


  char tmp;
  int vertex = 1;
  for (int i=0; i < n; i++){
    for (int j=0; j < m; j++){
      cin >> LABYRINTH[i][j];
      if (LABYRINTH[i][j] == 'A'){
        ai = i;
        aj = j;
      }
    }
  }

  /* MOSTRAR O MAPA PRONTO
  for (int i=0; i < LABYRINTH.size(); i++){
    for (char j : LABYRINTH[i]){
      cout << j << " ";
    }
    cout << endl;
  }*/

  string result = explore(ai, aj);
  if (result != "") {
    result.pop_back();
    cout << "YES" << endl;
    cout << to_string(result.size()) << endl;
    cout << result << endl;
  }
  else {
    cout << "NO" << endl;
  }
  return 0;
}
