#include <stdio.h>
#include <stdlib.h>
#include <string.h>


int main(){
    FILE *entrada = fopen("saida.txt", "r");
    float max = 0;
    float min = 100000000000000000000000;
    float soma = 0;
    float temp;
    int i = 0;
    while(fscanf(entrada, "%f", &temp) == 1){
        if(temp > max)
            max = temp;
        if(temp < min)
            min = temp;
        soma += temp;
        i++;
    }
    printf("MAX: %.2f", max);
    printf("\nMIN: %.2f", min);
    printf("MÉDIA: %.2f", soma/i);
    fclose(entrada);
    return 0;

}