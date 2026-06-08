#include <stdio.h>
#include <string.h>

int main(){
  char SENHA_CORRETA[]="2002", senha[10];
  scanf("%s", senha);
  while (strcmp(senha, SENHA_CORRETA) != 0){
    printf("Senha Invalida\n");
    scanf("%s", senha);
  }
  printf("Acesso Permitido\n");
}
