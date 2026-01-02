#include <stdio.h>
#include <math.h>

int main(){
  float notas[50], soma = 1;
  int n;
  printf("DIGITE A DIMENSÃO N DO VETOR: ");
  scanf("%d", &n);
  for(int i = 0; i < n; i++){
    scanf("%f", notas[i]);
  }
  //calcula a média geométrica
  for(int i = 0; i < n; i++){
    soma *= notas[i];
  }
  printf("Média GEO: %.2f", pow(soma, 1.0 / n));




}

