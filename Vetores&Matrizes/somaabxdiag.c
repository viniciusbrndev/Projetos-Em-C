#include <stdio.h>
#include <stdlib.h>
#define LIN 30
#define COL 30

int main(){
  
  int matriz[LIN][COL], somaAbDiag = 0;
  for(int i = 0; i < LIN; i++)
    for(int j =0; j < COL; j++)
      matriz[i][j] = rand() % 10 ;
      
  for(int i = 0; i < LIN; i++){
    for(int j = 0; j < COL; j++){
    if(i != j && j < i)
      printf("%d ", matriz[i][j]);
      somaAbDiag += matriz[i][j];
    }
    printf("\n");
  }
  printf("\nA soma dos valores abaixo da diagonal é: %d\n", somaAbDiag);

return 0;
}
