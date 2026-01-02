#include <stdio.h> 

int busca(int matriz[5][5], int valor, int *linha, int *coluna);

int main(){
  int matriz[5][5], corte = 6, l, c;
  printf("Digite o valor a ser procurado na matriz: ");
  scanf("%d",  &corte);
  
  //lê os valores da matriz linha por coluna
  for(int i = 0; i < 5; i++){
    for(int j = 0; j < 5; j++){
      printf("\nDigite uma valor: ");
      scanf("%d", &matriz[i][j]);
    }
    }
  
  int verify = busca(matriz, corte, &l, &c);
  if(verify){
    printf("\nValor encontrado na linha %d, coluna %d", l + 1, c + 1);
  }else
    printf("\nValor não encontrado!!");
  

return 0;
}


//função percorre a matriz por linhas e compara os valores
int busca(int matriz[5][5], int valor, int *linha, int *coluna){
  for(int i = 0; i < 5; i++){
    for(int j = 0; j < 5; j++){
      if(matriz[i][j] == valor){
        *linha = i;
        *coluna = j;
        return 1;
      }
    }
    
  }
  return 0;
}



