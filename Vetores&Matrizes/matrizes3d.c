#include <stdio.h>
#include <stdlib.h>
#define Y 10
#define X 10
#define Z 10

int main(){
  int estoque[Y][X][Z];
  long long somaNiveis[Z];
  for(int y = 0; y < Y; y++){
    for(int x = 0; x < X; x++){
      for(int z = 0; z < Z; z++){
        estoque[y][x][z] = rand() % 10 +1;      
        somaNiveis[z] = 0;
      }
    }
  }
  for(int k = 0; k < Z; k++){
    for(int i = 0; i < Y; i++){
      for(int j = 0; j < X; j++){
        somaNiveis[k] += estoque[i][j][k];
      }
    }
  }
  for(int i  = 0; i < Z; i++){
    printf("Quantidade de produtos no estoque %d: %lld", i+1, somaNiveis[i]);
    printf("\n");
  }
}
