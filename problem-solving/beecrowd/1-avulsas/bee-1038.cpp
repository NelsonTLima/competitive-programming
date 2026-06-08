#include <iostream>
#include <stdio.h>

int main(){
  int codigo;
  int quantidade;
  float preco;

  std::cin >> codigo >> quantidade;

  switch (codigo) {
    case 1:
      preco = 4.00;
      break;
    case 2:
      preco = 4.50;
      break;
    case 3:
      preco = 5.00;
      break;
    case 4:
      preco = 2.00;
      break;
    case 5:
      preco = 1.50;
      break;
    default:
      preco = 0;
  }

  float resultado = preco * quantidade;

  printf("Total: R$ %.2f\n", resultado);
  return 0;
}
