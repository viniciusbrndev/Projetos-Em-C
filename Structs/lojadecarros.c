#include <stdio.h>
#include <stdlib.h>
#include <string.h>

typedef struct 
{
    char marca[15];
    int ano;
    char cor[10];
    float preco;
} Carro;
void cadastroEstoque(Carro *estoque, int tam);
void buscaPreco(Carro *estoque, int tam, float busca);
void buscaMarca(Carro *estoque, int tam, char *busca);
void limparBuffer();
int main(){
    int n;
    float precoBusca;
    char marcaBusca[15];
    printf("DIGITE O TAMANHO DO ESTOQUE DE CARROS: ");
    scanf("%d", &n);
    limparBuffer();
    Carro *estoque = malloc(sizeof(Carro) * n);
    cadastroEstoque(estoque, n);
    
    printf("\nDIGITE O VALOR MAX DESEJADO: ");
    scanf("%f", &precoBusca);
    limparBuffer();
    buscaPreco(estoque,n, precoBusca);

    printf("DIGITE A MARCA DESEJADA: ");
    fgets(marcaBusca, sizeof(marcaBusca), stdin);
    buscaMarca(estoque, n, marcaBusca);


    free(estoque);
    return 0;
}

void cadastroEstoque(Carro *estoque, int tam){
    for(int i = 0; i < tam; i++){
        printf("\nInsira a marca do veículo %d:", i+1);
        fgets(estoque[i].marca, sizeof(char) *15, stdin);
        printf("\nInsira o ano do veículo %d:", i+1);
        scanf("%d", &estoque[i].ano);
        getchar();
        printf("\nInsira a cor do veículo %d:", i+1);
        fgets(estoque[i].cor, sizeof(char) *10, stdin);
        printf("\nInsira o preço do veículo %d:", i+1);
        scanf("%f", &estoque[i].preco);
        getchar();
    }
    
}
void buscaPreco(Carro *estoque, int tam, float busca){
    for(int i = 0; i < tam; i++){
        if(estoque[i].preco <= busca){
            printf("\nMarca: %s\nCor: %s\nAno: %d\n", estoque[i].marca, estoque[i].cor, estoque[i].ano);
            printf("\n");
        }

    }

}
void buscaMarca(Carro *estoque, int tam, char *busca){
    printf("\nVEÍCULOS DA MARCA %s:", busca);
    for(int i = 0; i < tam; i++){
        if(strcmp(estoque[i].marca, busca) == 0){
            printf("\nCor: %s\nAno: %d\nPreço: R$%.2f", estoque[i].cor, estoque[i].ano, estoque[i].preco);
            printf("\n");
        }
    }
}
void limparBuffer(){
    char c;
    while((c = getchar()) != '\n' && !EOF);
}