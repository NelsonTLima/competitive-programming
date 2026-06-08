#include <iostream>

int main() {
  int horaInicial, horaFinal, horas;
  std::cin >> horaInicial >> horaFinal;

  if (horaFinal == horaInicial) { horas = 24; }
  else { horas = (24 + horaFinal - horaInicial) % 24; }

  std::cout << "O JOGO DUROU " << horas << " HORA(S)\n";

  return 0;
}
