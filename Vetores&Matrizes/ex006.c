#include <stdio.h>
#define TAM 6

void subPzero(int matriz[TAM][TAM], int p);

int main(){
  int matriz[TAM][TAM], x;
  for(int i = 0; i < TAM; i++){
      printf("Digite 6 valores da linha %d: ", i);
    for(int j = 0; j < TAM; j++){
      scanf("%d", &matriz[i][j]);
    }
  
  }
  printf("\nDigite o valor de X: ");
  scanf("%d", &x);
  subPzero(matriz, x);
 
  for(int i = 0; i < TAM; i++){
    for(int j = 0; j < TAM; j++){
      printf("%d ", matriz[i][j]);
    }
    printf("\n");
  }



}


void subPzero(int matriz[TAM][TAM], int p){
  for(int i = 0; i < TAM; i++){
    for(int j = 0; j < TAM; j++){
      if(matriz[i][j] == p){
        for(int l = 0; l < TAM; l++){
          matriz[i][l] = 0;
        }
        for(int c = 0; c < TAM; c++){
          matriz[c][j] = 0;
        }
      }
    }
    
  }



}
