#include <stdio.h>

int main(){
  int matriz[3][3], soma;
  //lê os valores da matriz linha por coluna
  for(int i = 0; i < 3; i++){
    for(int j = 0; j < 3; j++){
      printf("Digite uma valor: ");
      scanf("%d", &matriz[i][j]);
    }
  }
  //percorre e soma os valores das linhas da matriz 
  for(int i = 0; i < 3; i++){
    soma = 0;
    for(int j = 0; j < 3; j++){
      soma += matriz[i][j];
    }
    printf("%d\n", soma);
  }

return 0;
}
