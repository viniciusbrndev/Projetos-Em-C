#include <stdio.h>
#include <stdlib.h>
#define TAM 15


int main(){
  int matriz[TAM][TAM], somaDiag = 0;
  
  for(int i = 0; i < TAM; i++)
    for(int j =0; j < TAM; j++)
      matriz[i][j] = rand() % 100;

  for(int i = 0; i < TAM; i++)
    for(int j = TAM -1; j >= 0; j--)
      somaDiag += matriz[i][j];
}
