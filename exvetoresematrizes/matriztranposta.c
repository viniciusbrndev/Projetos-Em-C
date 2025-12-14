#include <stdio.h>
#define MAX 10


int main(){
  int matriz[MAX][MAX], matrizT[MAX][MAX];
  printf("Digite os valores da matriz: ");
  for(int i = 0; i < MAX; i++)
    for(int j = 0; j < MAX; j++)
      scanf("%d", &matriz[i][j]);
  //transpõem a matriz original em uma outra matriz
  for(int i = 0; i < MAX; i++){
    for(int j = 0; j < MAX; j++){
      matrizT[j][i] = matriz[i][j];
    }
  }
  //imprime a matriz original
  for(int i = 0; i < MAX; i++){
    for(int j = 0; j < MAX; j++)
      printf("%d ", matriz[i][j]);
    printf("\n");
  }
  printf("\n");
  //imprime a matriz transposta
  for(int i = 0; i < MAX; i++){
    for(int j = 0; j < MAX; j++)
      printf("%d ", matrizT[i][j]);
    printf("\n");
  }




return 0;
}

