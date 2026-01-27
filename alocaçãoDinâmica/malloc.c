//Alocação dinâmica 
#include <stdio.h>
#include <stdlib.h>

int main(){
  //aloca um espaço na memória e retorna um ponteiro para o espaço
  int *vetor =  malloc(sizeof(int) * 6);
  for(int i = 0; i < 6; i++)
    *(vetor + i) = i;
  for(int i = 0; i < 6; i++)
    printf("%d ", vetor[i]);
  
  free(vetor);
  vetor = NULL;

  return 0;
}

int** alocaMatriz(int n, int m){
  int **matriz = malloc(sizeof(int*) * 6);
  for(int j = 0; j < m; j++){
    matriz[j] = malloc(sizeof(int) * 6);
  
  }
  
  return matriz;

}
