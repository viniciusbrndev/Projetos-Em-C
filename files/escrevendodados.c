#include <stdio.h>


int main(int argc, char **argv){
  int n;
  
  FILE *arquivo = fopen(argv[1], "w");
  printf("digite o números de inteiros a serem lidos: ");
  scanf("%d", &n);
  printf("\nDigite os valores: ");
  
  int temp;
  for(int i = 0; i < n; i++){
    scanf("%d", &temp);
    fprintf(arquivo, "%d ", temp);
  }

fclose(arquivo);
return 0;
}
