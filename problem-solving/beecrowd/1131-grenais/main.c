#include <stdio.h>
#include <strings.h>

int main(){
  int repeat=1, vitorias_inter=0,vitorias_gremio=0, empates=0, qty=0;
  int inter, gremio;
  char vencedor[16];

  while (repeat != 2){
    qty++;
    scanf("%d %d", &inter, &gremio);

    if (inter > gremio){
      vitorias_inter++;
    }
    else if (inter < gremio){
      vitorias_gremio++;
    }
    else{
      empates++;
    }

    if (vitorias_inter > vitorias_gremio){
      strcpy(vencedor, "Inter");
    }
    else if (vitorias_inter < vitorias_gremio){
      strcpy(vencedor, "Gremio");
    }
    else{
      strcpy(vencedor, "Nenhum dos dois");
    }
    printf("Novo grenal (1-sim 2-nao)\n");
    scanf("%d", &repeat);
  }
  printf("%d grenais\n", qty);
  printf("Inter:%d\n", vitorias_inter);
  printf("Gremio:%d\n", vitorias_gremio);
  printf("Empates:%d\n", empates);
  printf("%s venceu mais\n", vencedor);
}
