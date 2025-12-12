#include <stdio.h>
#include <stdlib.h>
#define LIN 20
#define COL 15

int main(){
  int matriz[LIN][COL], somaPar = 0;
  for(int i = 0; i < LIN; i++)
    for(int j =0; j < COL; j++)
      matriz[i][j] = rand() % 100;
  
  for(int i = 0; i < LIN; i++){
    if(i % 2 == 0)
    for(int j = 0; j < COL; j++){
      somaPar += matriz[i][j];
    }
  
  }
      
  
return 0;      
}
