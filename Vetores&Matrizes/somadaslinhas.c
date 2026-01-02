#include <stdio.h>
#include <stdlib.h>
#define LIN 3
#define COL 5

int main(){
  
  int matriz[LIN][COL], somaLinhas[LIN];
  for(int i = 0; i < LIN; i++)
    for(int j =0; j < COL; j++)
      matriz[i][j] = rand() % 10 ;
  for(int i = 0; i < LIN; i++)
    somaLinhas[i] = 0;
    
  for(int i = 0; i < LIN; i++){
    for(int j = 0; j < COL; j++)
    somaLinhas[i] += matriz[i][j];
    }
    
    for(int a = 0; a < LIN; a++)
      printf("A soma da linha %d é %d\n", a+1, somaLinhas[a]);
      
      
}
