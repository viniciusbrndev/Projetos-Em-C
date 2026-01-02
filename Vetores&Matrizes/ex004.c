#include <stdio.h>

int main(){

  int matriz[4][4], maior;
  
  //lê os valores da matriz linha por coluna
  for(int i = 0; i < 4; i++){
    for(int j = 0; j < 4; j++){
      printf("Digite uma valor: ");
      scanf("%d", &matriz[i][j]);
    }
    }
  //percorre a matriz e compara os valores 
  for(int i = 0; i < 4; i++){
    maior = matriz[i][0];
    for(int j = 0; j < 4; j++){
      if(matriz[i][j] >= maior){
        maior = matriz[i][j];
      }   
    }
    printf("Maior num da linha: %d\n", maior); 
  } 
    
return 0;
  }
