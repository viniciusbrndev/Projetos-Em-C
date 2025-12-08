#include <stdio.h>
#include <string.h>

#define TAM_MAX 50

int buscaPalavra(char matriz[4][3][TAM_MAX], char busca[TAM_MAX], int* linha, int* total);

int main(){
  int posLinha[4], quantidade = 0;
  char matriz[4][3][TAM_MAX], nome[TAM_MAX];
  
  for(int i = 0; i < 4; i++){
    for(int j = 0; j < 3; j++){
      printf("\nDigite um nome: ");
      scanf("%s", matriz[i][j]);
    }
  }
  printf("\nDigite o nome a ser buscado: ");
  scanf("%s", nome);  
  if(buscaPalavra(matriz, nome, posLinha, &quantidade)){
    printf("\n%s aparece %d vezes!", nome, quantidade);
    printf("\n%s aparece nas linhas:", nome);
  
    for(int i = 0; i < quantidade; i++){
      printf("%d, ", posLinha[i]);
    }
  }
  else
    printf("\n%s não encontrado na matriz!", nome);
}

int buscaPalavra(char matriz[4][3][TAM_MAX], char busca[TAM_MAX], int linha[4], int* total)
{
  for(int i = 0; i < 4; i++){
    for(int j = 0; j < 3; j++){
      if(strcmp(matriz[i][j], busca) == 0){
        linha[*total] = i;
        (*total)++;        
        }
      }
    }
  if(*total){
    return 1;
  }else
    return 0;
  }


