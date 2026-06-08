#include <bits/stdc++.h>

using namespace std;

int*** create3dArray(int x, int y, int z) {
  int*** array = new int**[x];
  for (int i = 0; i < x; ++i) {
    array[i] = new int*[y];
    for (int j = 0; j < y; ++j) {
      array[i][j] = new int[z];
    }
  }
  return array;
}

void fill3dArray(int*** arr, int x, int y, int z, int val){
  for (int i=0; i < x; i++){
    for (int j=0; j < y; j++){
      for (int k=0; k < z; k++){
        arr[i][j][k] = val;
      }
    }
  }
}

int placeApples(int*** arr, int k){
  int x, y, t;
  for (int i=0; i < k; i++){
    cin >> x >> y >> t;
    arr[x][y][t] = 1;
    //cout << "maca colocada nas coordenadas: " << x
    //  << "," << y << "\ntempo: " << t << "\n" << arr[x][y][t] << endl;
  }
  return t;
}

int f(
    //argumentos:
    int x, int y, int t, // Coordenadas no mapa.
    int m, int n, int timeLimit, // maximo de linhas, colunas e quantidade de casos.
    int*** arr,          // mapa tri-dimencional das maçãs.
    int*** dp            // mapa tri-dimencional para memoização.
    )
{
  // logs pra debugar:
  //cout << "x = " << x << "\ny = " << y << "\nt = " << t << endl;
  //cout << "m = " << m << "\nn = " << n << "\nk = " << k << endl;

  // condição de parada:
  // se o ponto estiver fora do cubo.
  if ((x < 0 || x > m) || (y < 0 || y > n) || (t > timeLimit)){
    return 0;
  }

  // memoização se ja esteve la no mesmo tempo ja sabe o resultado:
  if (dp[x][y][t] != -1) return dp[x][y][t];

  // verifica se tem maçã e armazena o valor 1 se tiver.
  int apple = arr[x][y][t];

  //if (apple == 1){
  //  cout << "achou\n";
  //}

  // iteração para percorrer todos os espaços em volta.
  // e alimentar um vetor com os 8 resultados dos nós filhos.
  vector<int> leafs;
  for (int i = -1; i <= 1; i++){
    for (int j = -1; j <= 1; j++){
      //if ( i == 0 && j == 0) continue;
      leafs.push_back(apple + f(x+i, y+j, t+1 , m, n, timeLimit, arr, dp));
    }
  }

  // iteração para obter o valor maximo e colocar no memo.
  for (int i = 0; i < leafs.size(); i++){
    if (leafs[i] > dp[x][y][t]){
      dp[x][y][t] = leafs[i];
    }
  }
  // retorna o resultado salvo para o nó pai.
  return dp[x][y][t];

}

int main() {
  int n, m, k, x, y, t=0;
  vector<int> saida;

  while (true){
    cin >> n >> m >> k;
    if (n == 0 && m == 0 && k == 0) break;

    int*** arr = create3dArray(n+5, m+5, 2009);
    int*** dp = create3dArray(n+5, m+5, 2009);

    fill3dArray(arr, n + 5, m + 5, 2009, 0);
    fill3dArray(dp, n + 5, m + 5, 2009, -1);

    int timeLimit = placeApples(arr, k);

    cin >> x >> y;
    //cout << f(x,y,t,m,n,k,arr,dp);
    saida.push_back(f(x, y, t, m, n, timeLimit, arr, dp));
  }
  for (int i=0; i < saida.size(); i++){
    cout << saida[i] << "\n";
  }
  return 0;
}

/*
 * pseudo-codigo:
 *
 * f(x,y,t, m, n, k, array3D, memo3D):
 *    if (x >= m && y >= n && z >= 2 * k)return 0 ----> se o ponto estiver fora do mapa retorna zero.
 *                                                ----> agora todos os pontos estão dentro do mapa 3D.
 *    if (dp[x][y][t] != -1) return dp[x][y][t]   ----> se ja obteve antes, buscar no memo.
 *
 *    qty = apples[x][y][t]                       ----> será zero ou um.
 *
 *    vector<int> filhos[8];                      ----> vetor com os resultados dos nós filho.
 *    for (i, -1..1)                              ----> iteração para mover em todas direções
 *      for (j, -1..1)                            ----> não será permitido ficar parado.
 *      if ( i = j = 0) continue                  ----> soma a quantidade de maçãs com os resultados
 *      filhos.push_back(qty + f(x+i, y+j, t+1)); ----> que vêm dos nós-filho e guarda no vetor.
 *
 *    dp[x][y][t] = max(filhos);                  ----> Guarda o valor maximo na memoização
 *    return dp[x][y][z]                          ----> retorna esse valor para o pai.
 *
 *  y          _t
 * /|\+-------+/'
 *  |/|......./|
 *  |||+++++++.|
 *  |||......|.|
 *  |/       | /
 *  +--------|--->x
 */
