#include <stdio.h>
#include <stdlib.h>
#define TAM 10

int main(){
  int matriz[TAM][TAM];
  for(int i = 0; i < TAM; i++)
    for(int j =0; j < TAM; j++)
      matriz[i][j] = rand() % 100;
  printf("MATRIZ ORIGINAL:\n");
      for(int i = 0; i < TAM; i++){
      for(int j = 0; j < TAM; j++){
        printf("%d ", matriz[i][j]);
      }
      printf("\n");
     }   
    printf("\n");
    
    //troca a linha 2 pela 8
      for(int j = 0; j < TAM; j++){
        int temp = matriz[1][j];
        matriz[1][j] = matriz[7][j];
        matriz[7][j] = temp;
      }
    
    for(int i = 0; i < TAM; i++){
      for(int j = 0; j < TAM; j++){
        printf("%d ", matriz[i][j]);
      }
      printf("\n");
     }   
    printf("\n");
    
    for(int i = 0; i < TAM; i++){
      int temp = matriz[i][3];
      matriz[i][3] = matriz[i][9];
      matriz[i][9] = temp;
      
    }
    for(int i = 0; i < TAM; i++){
      for(int j = 0; j < TAM; j++){
        printf("%d ", matriz[i][j]);
      }
      printf("\n");
     }   
    printf("\n");
    
    for(int i = 0; i < TAM; i++){
      int temp = matriz[i][i];
      matriz[i][i] = matriz[i][TAM -1 -i];
      matriz[i][TAM -1 -i] = temp;
      }
     
    for(int i = 0; i < TAM; i++){
      for(int j = 0; j < TAM; j++){
        printf("%d ", matriz[i][j]);
      }
      printf("\n");
     }
      
     
     
    }

