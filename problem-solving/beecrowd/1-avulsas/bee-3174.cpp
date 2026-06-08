#include <bits/stdc++.h>

using namespace std;

int main() {
  int n, h, i;
  string e, g;
  vector<float> horasGrupo = {0, 0, 0, 0};
  vector<float> horas = {8, 4, 6, 12};
  int presentes = 0;

  cin >> n;
  for (i=0; i < n; i++){
    cin >> e >> g >> h;

    if (g == "bonecos"){
      horasGrupo[0] += h;
    }else if (g == "arquitetos"){
      horasGrupo[1] += h;
    }else if (g == "musicos"){
      horasGrupo[2] += h;
    }else if (g == "desenhistas"){
      horasGrupo[3] += h;
    }
  }

  for (i=0; i < 4; i++){
    presentes += horasGrupo[i] / horas[i];
  }

  cout << presentes << endl;
  return 0;
}
