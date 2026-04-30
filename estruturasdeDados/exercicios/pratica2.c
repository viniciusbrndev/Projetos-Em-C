#include "pratica2.h"
#include <stdlib.h>
#include <stdio.h>


struct jogador{
    char nome[30];
    int idade;
    int ehTitular;
};



Jogador* alocaJogador(){
    Jogador* p = (Jogador*)malloc(sizeof(Jogador));
    if(!p)
        return NULL;
    return p;
}
void desalocaJoogador(Jogador **p){
    if(!p)
        return;
    free(*p);
    *p = NULL;
}
void imprimeTitular(Jogador *jogador){
    if(!jogador)
        return;
    if(jogador->ehTitular == 1)
        printf("\nNome do jogador: %s Idade: %d", jogador->nome, jogador->idade);
}
int idadeJogador(Jogador* p){
    if(p)
        return p->idade;
}
