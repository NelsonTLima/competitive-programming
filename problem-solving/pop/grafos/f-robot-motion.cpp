#include <bits/stdc++.h>

using namespace std;

void walk(char **instructions, vector<pair<int, int>> &visited, int i, int j){

  char instruction = instructions[i][j];
  instructions[i][j] = 'X';

  pair<int, int> pos (i, j);
  visited.push_back(pos);

  switch (instruction){
    case 'N':
      return walk(instructions, visited, i - 1, j) + 1;
    case 'S':
      return walk(instructions, visited, i + 1, j) + 1;
    case 'E':
      return walk(instructions, visited, i, j + 1) + 1;
    case 'W':
      return walk(instructions, visited, i, j - 1) + 1;
  }
  return;
}

int main(){
  int rows, columns, entryColumn;
  while (cin >> rows >> columns >> entryColumn and
        (rows and columns and entryColumn))
  {
    rows += 2;    // + 2 SO I'LL CREATE AN EXIT EDGE.
    columns += 2;

    char** instruction = new char*[rows];
    for (int i=0; i < rows; i++){
      instruction[i] = new char[columns];
    }

    vector<pair<int, int>> visited;

    // CREATING AN EXIT EDGE.
    for (int i=0; i < rows; i++){
      for (int j=0; j < columns;
          j += (i == 0 || i == rows -1) ? 1 : columns -1)
      {
        instruction[i][j] = '0';
      }
    }

    // POPULATING INSTRUCTIONS.
    for (int i=1; i < rows - 1; i++){
      for (int j=1; j < columns - 1; j++)
      {
        cin >> instruction[i][j];
      }
    }

    walk(instruction,visited, 1, entryColumn);

    int pathSize = visited.size() - 1;
    int loop = pathSize - distance(
        visited.begin(), find(visited.begin(), visited.end(), visited.back()));
    int steps = pathSize - loop;

    if (!loop){
      cout << steps << " step(s) to exit" << endl;
    }
    else{
      cout << steps << " step(s) before a loop of " << loop << " step(s)" << endl;
    }

  }
  return 0;
}
