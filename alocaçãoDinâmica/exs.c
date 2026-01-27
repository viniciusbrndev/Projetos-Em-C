#include <stdio.h>
#include <stdlib.h>


int main(){
  int n;
  printf("DIGITE O TAMANHO DO VETOR: ");
  scanf("%d", &n);
  if(n <= 0)
    return 0;
  //aloca o vetor
  int *v = malloc(n * sizeof(int));
  //testa e preenche
  if(v != NULL){
    printf("\nDigite os valores do vetor: ");
     int temp;
    for(int i = 0; i < n; i++){
      scanf("%d", &temp);
      if(temp)
        v[i] = temp;
      else
        v[i] = 0;
        
    }
  }
  else{
    printf("\nERRO NA ALOCAÇÃO!!");
    return 0;
  }
  free(v);
  return 0;
}
