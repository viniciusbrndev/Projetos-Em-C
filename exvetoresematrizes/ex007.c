#include <stdio.h>
#define TAM 5

void somaDiagonal(int matriz[5][5], int *soma1, int *soma2);

int main(){
  
  int matriz[TAM][TAM], sumDia1 = 0, sumDia2 = 0;
  for(int i = 0; i < TAM; i++){
      printf("Digite 5 valores da linha %d: ", i);
    for(int j = 0; j < TAM; j++){
      scanf("%d", &matriz[i][j]);
    }
  
  }
  somaDiagonal(matriz, &sumDia1, &sumDia2);
  printf("Soma da diagonal 1: %d\n", sumDia1);
  printf("Soma da diagonal 2: %d\n", sumDia2);
  
  
return 0;
  }
  
  
void somaDiagonal(int matriz[5][5], int *soma1, int *soma2){
  for(int i = 0; i < TAM; i++){
    for(int j = 0; j < TAM; j++){
      if(j == i)
         *soma1 += matriz[i][j];
      if(i + j == TAM -1)
        *soma2 += matriz[i][j];   
    }
    
  }
    
  }
  
  
  
  
