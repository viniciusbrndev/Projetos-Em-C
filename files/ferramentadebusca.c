#include <stdlib.h>
#include <stdio.h>
#include <string.h>

int main(){
    FILE *arq = fopen("arquivo.txt", "r");
    FILE *arq2 = fopen("posicoes.txt", "w");
    char busca[50];
    printf("DIGITE A PALAVRA A SER BUSCADA: ");
    fgets(busca, sizeof(busca), stdin);

    char linha[256];
    int pos = 0;
    while (fgets(linha, sizeof(linha), arq) != NULL)
    {
        if(strcmp(linha, busca) == 0){
            fprintf(arq2, "ENCONTRADO NA LINHA %d", pos);
        }
        pos++;
    }
    


    fclose(arq2);
    fclose(arq);
    return 0;
}