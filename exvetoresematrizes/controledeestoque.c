#include <stdio.h>
#define MAX 5

int main(){
  char nomeFlor[MAX][50];
  int estoqueIdeal[MAX], estoqueAtual[MAX];
  for(int i = 0; i < MAX; i++){
    printf("Digite o nome da %da planta: ", i+1);
    scanf("%49s", nomeFlor[i]);
    printf("\nDigite o estoque ideal: ");
    scanf("%d", &estoqueIdeal[i]);
    printf("\nDigite o estoque atual: ");
    scanf("%d", &estoqueAtual[i]);
  }
  printf("LISTA DE COMPRAS:\n");
  for(int i = 0; i < MAX; i++){
    int comprar = estoqueIdeal[i] - estoqueAtual[i];
    if(comprar > 0 ){
      printf("%s = ", nomeFlor[i]);
      printf("%d", comprar);
      printf("\n");
    }
  
  }

}

