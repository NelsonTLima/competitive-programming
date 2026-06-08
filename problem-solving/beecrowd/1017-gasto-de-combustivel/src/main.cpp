#include <iostream>

using namespace std;

int main() {
  float velocidade_media, tempo_de_viagem;
  cin >> velocidade_media >> tempo_de_viagem;
  printf("%.3f\n", velocidade_media * tempo_de_viagem / 12);
  return 0;
}
