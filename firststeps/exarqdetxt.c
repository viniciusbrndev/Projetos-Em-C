//exercício de arquivos de texto:

#include <stdio.h>
#define MAX 100

void limparBuffer(FILE *f);

int main(int argc, char **argv){
  int n, m;
  char matrizc[MAX][MAX];
  if(argc >= 3){
    
    FILE *entrada = fopen(argv[1], "r");
    FILE *saida = fopen(argv[2], "w");
    
    if(entrada != NULL && saida != NULL){
      fscanf(entrada,"%d %d", &n, &m);
      limparBuffer(entrada);
      
      if(n <= 98 && m <= 98){
        for(int i = 0; i < n; i++){       
          if(fgets(matrizc[i], m + 2, entrada) == NULL)
            break;
        }
        for(int j = n -1; j >= 0; j--){
          fputs(matrizc[j], saida);
          }
        fclose(entrada);
        fclose(saida);
      } 
    }
  else{
    printf("ARQUIVO NÃO PODE SER ABERTO!!");
    return 0;
  }
      }
  else{
    printf("PARÂMETROS INCORRETOS OU INEXISTENTES!!");
    return 0;
  }
  



  
  return 0;
}
void limparBuffer(FILE *f){
  int c;
  while((c = fgetc(f)) != '\n' && c != EOF);
}
