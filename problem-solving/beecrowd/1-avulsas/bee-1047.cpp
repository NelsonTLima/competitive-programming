#include <iostream>

using namespace std;

int main() {
  int horaInicial, minutoInicial, horaFinal, minutoFinal, horas, minutos;
  cin >> horaInicial >> minutoInicial >> horaFinal >> minutoFinal;

  horas = (24 + horaFinal - horaInicial);
  minutos = (60 + minutoFinal - minutoInicial);

  if (minutos < 60){
    horas--;
  }

  horas %= 24;
  minutos %= 60;

  if (horas == 0 and minutos == 0) {
    horas = 24;
  }

  cout << "O JOGO DUROU " << horas << " HORA(S) E "<< minutos << " MINUTO(S)\n";

  return 0;
}
