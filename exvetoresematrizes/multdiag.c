#include <stdio.h>
#include <stdlib.h>
#define TAM_MAX 10

int main(){

  int matriz[TAM_MAX][TAM_MAX], mult = 1;
  for(int i = 0; i < TAM_MAX; i++)
    for(int j = 0; j < TAM_MAX; j++)
      matriz[i][j] = rand() % 20;

  for(int m = 0; m < TAM_MAX; m++)
    if(matriz[m][m] != 0)
      mult *= matriz[m][m];


  printf("Resultado: %d", mult);
}
