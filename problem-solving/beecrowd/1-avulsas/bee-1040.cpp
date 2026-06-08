#include <iostream>
#include <stdio.h>

int main() {
  float n1, n2, n3, n4, n5;

  std::cin >> n1 >> n2 >> n3 >> n4;

  float media = ((n1 * 2)+(n2 * 3)+(n3 * 4)+(n4 * 1))/10;

  printf("Media: %.1f\n", media);
  if (media >= 7) {
    std::cout << "Aluno aprovado.\n";
  }
  else if ((media < 7.0) && (media >= 5.0)){
    std::cout << "Aluno em exame.\n";
    std::cin >> n5;
    float media_final = (media + n5)/2;
    printf("Nota do exame: %.1f\n", n5);

    if (media_final >= 5.0) {
      std::cout << "Aluno aprovado.\n";
    }
    else{
      std::cout << "Aluno reprovado.\n";
    }

    printf("Media final: %.1f\n", media_final);
  }
  else {
    std::cout << "Aluno reprovado.\n";
  }
  return 0;
}
