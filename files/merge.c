#include <stdio.h>
#include <stdlib.h>
#include <string.h>


int main(){
    FILE *arq1 = fopen("arq1.txt", "r");
    FILE *arq2 = fopen("arq2.txt", "r");
    FILE *arq3 = fopen("arq3.txt", "w");
    char linha1[100];
    char linha2[100];
    while (fgets(linha1, sizeof(linha1), arq1) != NULL && fgets(linha2, sizeof(linha2), arq2) != NULL)
    {
        if(linha1[0] <= linha2[0]){
            fprintf(arq3, "%s", linha1);
            fprintf(arq3, "%s", linha2);
        }
        else{
            fprintf(arq3, "%s", linha2);
            fprintf(arq3, "%s", linha1);
        }

        
    }
    fclose(arq1);
    fclose(arq2);
    fclose(arq3);
}