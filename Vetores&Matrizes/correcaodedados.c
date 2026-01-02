#include <stdio.h>
#include <stdlib.h>
#define LIN 10
#define COL 20

int main(){
  srand(-10);
  int matriz[LIN][COL], somaPar = 0;
  for(int i = 0; i < LIN; i++)
    for(int j =0; j < COL; j++)
      matriz[i][j] = rand() % 100;
  
  for(int i = 0; i < LIN; i++){
    for(int j = 0; j < COL; j++){
      printf("%d ", matriz[i][j]);
    }
    printf("\n");
  }
  printf("\n");
        
  for(int i = 0; i < LIN; i++){
    for(int j = 0; j < COL; j++){
      if(matriz[i][j] < 0)
        matriz[i][j] = 0;
    }
  }
  for(int i = 0; i < LIN; i++){
    for(int j = 0; j < COL; j++){
      printf("%d ", matriz[i][j]);
    }
      printf("\n");
  }



      
}
