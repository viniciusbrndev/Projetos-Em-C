#include <stdio.h>
#define TAM 6

void verInterval(int matriz[TAM][TAM], int a, int b);

int main(){
  
  int matriz[TAM][TAM], a, b;
  for(int i = 0; i < TAM; i++){
      printf("Digite 6 valores da linha %d: ", i);
    for(int j = 0; j < TAM; j++){
      scanf("%d", &matriz[i][j]);
    }
  
  }
  printf("Digite os valores do intervalo (A,B): ");
  scanf("%d %d", &a, &b);
  printf("\n");
  verInterval(matriz, a, b);
  
  
return 0;
  }
  
  
void verInterval(int matriz[TAM][TAM], int a, int b){
  for(int i =0; i < TAM; i++){
    for(int j = 0; j < TAM; j++){
      if(matriz[i][j] < a || matriz[i][j] > b){
        matriz[i][j] = 0;
      }
    }
  }
  
  for(int i =0; i < TAM; i++){
    for(int j = 0; j < TAM; j++){
      printf("%d", matriz[i][j]);
      }
    printf("\n");
    }
  }
  


