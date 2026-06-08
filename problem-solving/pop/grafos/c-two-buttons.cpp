#include <bits/stdc++.h>

using namespace std;

typedef struct{
  int value;
  int level;
} Edge;

// BFS based solution.
int f(int n,int m){
  queue<Edge> q;
  int *visited = new int[20001]();

  Edge root = {n , 0};
  q.push(root);

  while(q.front().value != m and !q.empty()){
    //cout << q.front().value << endl;

    Edge edge = {q.front().value, q.front().level};
    visited[edge.value] = 1;

    q.pop();

    Edge left = {edge.value * 2, edge.level + 1};
    Edge right = {edge.value - 1, edge.level + 1};

    if (left.value <= 2 * m and !visited[left.value]) q.push(left);
    if (right.value >= 0 and !visited[right.value]) q.push(right);
  }

  if (q.empty()) return -1;
  return q.front().level;
}

int main(){
  int n, m;
  cin >> n >> m;
  cout << f(n, m) << endl;
  return 0;
}
