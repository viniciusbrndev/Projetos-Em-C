#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int contaCaracteres(FILE *arq);
int contaPalavra(FILE *arq);
int contaLin(FILE *arq);

int main(){
    FILE *arq = fopen("fileex.txt", "r");
    printf("TOTAL DE CARACTERES: %d", contaCaracteres(arq));
    printf("\nTOTAL DE PALAVRAS: %d", contaPalavra(arq));
    printf("\nTOTAL DE LINHAS : %d", contaLin(arq));
    
}
int contaCaracteres(FILE *arq){
    int cont = 0;
    while (fgetc(arq) != NULL)
    {
        cont++;
    }
    return cont;
}
int contaPalavra(FILE *arq){
    int cont = 0;
    char c;
    while ((c = fgetc(arq)) != NULL)
    {
        if(c == '\n' || c == ' ' || c == '  ')
            cont++;
    }
    return cont;
}
int contaLin(FILE *arq){
    char c;
    int cont = 0;
    while((c = fgetc(arq)) != NULL){
        if(c == '\n')
            cont++;
    }
    return cont;

}