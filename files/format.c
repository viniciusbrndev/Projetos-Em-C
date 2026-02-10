#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main(){
    FILE *nomes = fopen("arquivoex.txt", "r");
    FILE *nomesFormat = fopen("saida.txt", "w");
    char linha[100];
    char sobrenome[30];
    while (fgets(linha, sizeof(linha), nomes) != NULL)
    {
        int tam = strlen(linha);
        int i;
        for(i = tam-1; i >= 0; i--){
            if(linha[i] == ' ')
                break;
        }
        int k = 0;
        for(int j = i+1; linha[j] != '\n' && linha[j] != '\0'; j++){
            sobrenome[k] = linha[j];
            k++;
        }
        sobrenome[k] = '\0';
        fprintf(nomesFormat, "%s,", sobrenome);
        for(int l = 0; l < i; l++)
            fprintf(nomesFormat, "%c", linha[l]);

        fprint(nomesFormat, "\n");
    }
    

    fclose(nomesFormat);
    fclose(nomes);
    return 0;
}