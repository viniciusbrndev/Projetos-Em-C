#include <stdio.h>
#define TAM 3

int main(){
  int mat[TAM][TAM] = {0, 6, 7, 2, 9, 2, 4, 5, 6};
  int prodLinha, somaCol = 0, somaTotal = 0; 
  prodLinha = mat[0][0];
  //calcula o produto da primeira linha
  for(int i = 1; i < TAM; i++)
    prodLinha *= mat[0][i]; 
  //soma os elementos da primeira coluna
  for(int i = 0; i < TAM; i++)
    somaCol += mat[i][0];
  //soma todos os elementos
  for(int i = 0; i < TAM; i++){
    for(int j = 0; j < TAM; j++)
        somaTotal+= mat[i][j];
  }
  printf("soma da primeira coluna = %d\nproduto dos elementos da primeira linha = %d\nsoma total dos elementos da matriz = %d\n", somaCol, prodLinha, somaTotal);


  return 0;
}
