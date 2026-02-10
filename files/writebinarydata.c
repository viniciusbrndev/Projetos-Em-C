#include <stdio.h>
#define MAX 10

int main(int argc, char **argv){
  int n, vetor[MAX];
  FILE *arquivo = fopen(argv[1], "wb");
  printf("digite o números de inteiros a serem lidos: ");
  scanf("%d", &n);
  printf("\nDigite os valores: ");
  for(int i = 0; i < n; i++){
    scanf("%d", &vetor[i]);
  }
  fwrite(&vetor, sizeof(int), n, arquivo);

fclose(arquivo);
return 0;
}
