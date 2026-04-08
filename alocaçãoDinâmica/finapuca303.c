#include <stdio.h>
#include <stdlib.h>
#include <string.h>



int main(){

}

void processaArquivo(char *entrada, char *saida){
  FILE *input = fopen(entrada, "r");
  FILE *output = fopen(saida, "w");
  fseek(input, 0, SEEK_END);
  char linha[100];
  for(int i = 99; i >= 0; i--){
    fseek(input, i, SEEK_SET);
    fgets(linha, sizeof(linha), input);
    for(int j = 0; linha[j] != '\0'; j++){
      if(linha[j] == ' ')
        linha[j] = '-';
    }
  fprintf(output, "%s", linha);
  fprintf(output, "\n");
  }
  fclose(output);
  fclose(inpute);

}
