#include <stdio.h>
#include <stdlib.h>
#include <string.h>

typedef struct{
    int cod;
    char nome[30];
    int vendas;
    float preco;
}Produto;

int main(){
    char nome[30];
    printf("DIGITE O NOME DO ARQUIVO.txt ");
    fgets(nome, sizeof(nome), stdin);

    FILE *arq = fopen(nome, "r");
    char c;
    int cont = 0;
    while(c = fgetc(arq)){
        if(c == '\n')
            cont++;
    }
    Produto *estoque = malloc(sizeof(Produto) * cont);
    fseek(arq, 0, SEEK_SET);
    char linha[100];
    int i = 0;
    while(fgets(linha, sizeof(linha), arq)){
        char *token = strtok(linha, ";");
        estoque[i].cod = atoi(token);
        
        token = strtok(NULL, ";");
        strcpy(estoque[i].nome, token);
        
        token = strtok(NULL, ";");
        estoque[i].vendas = atoi(token);

        token = strtok(NULL, ";");
        estoque[i].preco = atof(token);
        i++;
    }


    fclose(arq);
    free(estoque);
}
float faturamentoTotal(Produto *estoque,int tam){
    float total =0; 
    for(int i = 0; i < tam; i++){
        total += estoque[i].preco * estoque[i].vendas;
    }
    return total;
}
int maisLucrativo(Produto *estoque, int tam){
    int i;
    float maior = (estoque[0].preco * estoque[0].vendas);
    for(i = 0; i < tam; i++){
        if((estoque[i].vendas * estoque[i].preco) > maior)
            maior = (estoque[i].vendas * estoque[i].preco);
    }
}