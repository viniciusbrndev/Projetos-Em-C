#include <stdio.h>
#define TAM_MAX 20

double media(double vetor[], int tamanho);

int main(){
 double notas[TAM_MAX], soma = 0;
 
 for(int i = 0; i < TAM_MAX; i++){
  printf("Digite uma nota:\n");
  scanf("%lf", &notas[i]);
  soma += notas[i];
 }
 
 printf("%lf\n", media(notas, TAM_MAX));
 /*
 int totalN = 0;
 for(int i = 0; i < TAM_MAX; i++){
  if(notas[i] > soma / TAM_MAX){
    totalN++;
  }
 }
 
 printf("Total de notas maiores que a média: %d\n", totalN);

}
*/

double media(double vetor[], int tamanho){
  double soma = 0;
  for(int i = 0; i < tamanho; i++){
    soma += vetor[i];
  }

  return soma / tamanho;

}
}
