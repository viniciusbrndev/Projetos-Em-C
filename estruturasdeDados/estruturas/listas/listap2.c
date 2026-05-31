#include "listap2.h"
#include <stdlib.h>
#include <stdio.h>
#include <stdbool.h>

struct celula{
    int chave;
    Celula *prox;
};
struct lista{
    Celula *cabeca;
};
typedef struct fila{
    int tam;
    int *itens;
    
    int n;
    int fim;
    int ini;
}Fila;

Lista* criaLista(){
    Lista* p = (Lista*)malloc(sizeof(Lista));
    if(p){
        p->cabeca = (Celula*)malloc(sizeof(Celula));
        if(!p->cabeca){
            free(p);
            p = NULL;
        }
        p->cabeca->prox = NULL;
    }
    return p;
}
bool insereFim(Lista* p, int item){
    if(!p)
        return false;
    Celula *aux = p->cabeca->prox;
    while(aux->prox)
        aux = aux->prox;
    Celula* novo = (Celula*)malloc(sizeof(Celula));
    novo->chave = item;
    novo->prox = NULL;
    aux->prox = novo;
    return true;
}
void moveElemento(Lista *p, int chave){
    if(!p)
        return;
    Celula *ant, *aux;
    ant = p->cabeca->prox;
    while(ant->chave != chave)
        ant = ant->prox;
    aux = ant->prox;
    ant->prox = aux->prox;
    aux->prox = p->cabeca->prox;
    p->cabeca->prox = aux;
}
int listaTamanho(Lista *p){
    if(!p)
        return -1;
    int tam = 0;
    Celula *aux = p->cabeca->prox;
    while(aux){
        tam++;
        aux = aux->prox;
    }
    return tam;
}
//O(n²)
Lista* ListaIntercala(Lista* p1, Lista*p2){
    if(!p1 || !p2)
        return NULL;
    Lista* p3 = criaLista();
    if(!p3)
        return NULL;
    Celula *aux1, *aux2;
    aux1 = p1->cabeca->prox;
    aux2 = p2->cabeca->prox;
    while(aux1 || aux2){
        if(aux1){
            insereFim(p3, aux1->chave);
            aux1 = aux1->prox;
        }
        if(aux2){
            insereFim(p3, aux2->chave);
            aux2 = aux2->prox;
        }
    }
    return p3;
}
//O(n)
Lista* ListaIntercalamod(Lista* p1, Lista* p2){
    if(!p1 || !p2)
        return NULL;
    Lista* p3 = criaLista();
    if(!p3)
        return NULL;
    Celula *aux1, *aux2, *ult, *novo;
    aux1 = p1->cabeca->prox;
    aux2 = p2->cabeca->prox;
    ult = p3->cabeca;
    while(aux1 || aux2){
        if(aux1){
            novo = malloc(sizeof(Celula));
            novo->chave = aux1->chave;
            novo->prox = NULL;
            ult->prox = novo;

            ult = novo;
            aux1 = aux1->prox;
        }
        if(aux2){
            novo = malloc(sizeof(Celula));
            novo->chave = aux2->chave;
            novo->prox = NULL;
            ult->prox = novo;

            ult = novo;
            aux1 = aux2->prox;
        }
    }
    return p3;
}
Fila* FilaInicia(int tam){
    Fila *p = malloc(sizeof(Fila));
    if(p){
        p->itens = malloc(sizeof(int) * tam);
        if(!p->itens){
            free(p);
            p = NULL;
        }
        p->n = 0;
        p->tam = tam;
        p->fim = 0;
        p->ini = 0;
    }
}
bool FilaEnfileira(Fila* p, int item){
    if(!p || p->n == p->tam)
        return false;
    p->itens[p->fim] = item;
    p->fim = (p->fim +1) % p->tam;
    p->n++;
    return true;
}
bool FilaDesenfileira(Fila* p, int *pItem){
    if(!p || !p->n)
        return false;
    *pItem = p->itens[p->ini];
    p->ini = (p->ini +1) % p->tam;
    p->n--;
    return true;
}
void imprimeLista(Lista *pLista){
    //if();
}