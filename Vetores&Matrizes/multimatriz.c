#include <stdio.h>
#define MAX 50

int main(){
  int m, n, p;
  int A[MAX][MAX], B[MAX][MAX], C[MAX][MAX]
  
  printf("Digite as dimensões da matriz A (linhas e colunas): ");
  scanf("%d %d", &m, &n);
  printf("\nDigite as dimensões da matriz B (Colunas)");
  scanf("%d", &p);
  // ler os valores da matriz A
  printf("\nDigite os elementos da matriz A: ");
  for(int i = 0; i < m; i++){
    for(int j = 0; j < n; j++)
      scanf("%d", &A[i][j]);
  }
  //ler os valores da matriz B
  printf("\nDigite os elementos da matriz B: ");
  for(int i = 0; i < n; i++){
    for(int j = 0; j < p; j++)
      scanf("%d", &B[i][j]);
  }
  //Multiplicação 
  for(int i = 0; i < m; i++){
    for(int j = 0; j < p; j++){
      for(int k = 0; k < n; k++){
        C[i][j] += A[i][k] * B[k][j];
      }
    }
  }
  //Imprimir o resultado
  for(int i = 0; i < n; i++){
    for(int j = 0; j < p; j++)
      printf("%d  ", C[i][j]);
    printf("\n"); 
  }





}
