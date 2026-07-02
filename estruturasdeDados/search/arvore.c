#include "arvore.h"
#include <stdlib.h>
#include "item.h"
#include <stdio.h>
#include <stdbool.h>


struct no{
    Item data;

    No* dir;
    No* esq;
};


No* criaNo(Item x){
    No* novo = malloc(sizeof(No));
    if(novo){
        novo->data = x;

        novo->esq = NULL;
        novo->dir = NULL;
    }
    return novo;
}

bool ArvorePesquisa(No *pRaiz, Item chave, Item *pX){
    if(!pRaiz)
        return false;
    else if(pRaiz->data.chave < chave.chave)
        return ArvorePesquisa(pRaiz->dir, chave, pX);
    else if(pRaiz->data.chave > chave.chave)
        return ArvorePesquisa(pRaiz->esq,chave, pX);
    *pX = pRaiz->data;
    return true;
}
bool ArvoreInsere(No **ppRaiz, Item x){
    if(!*ppRaiz){
        *ppRaiz = criaNo(x);
        if(*ppRaiz)
            return true;
        }
    if((*ppRaiz)->data.chave > x.chave)
        ArvoreInsere((*ppRaiz)->esq, x);
    if((*ppRaiz)->data.chave < x.chave)
        ArvoreInsere((*ppRaiz)->dir, x);
    return false;
}
bool noAntecessor(No *qSai,No **ppAnt){
    if((*ppAnt)->dir)
        return noAntecessor(qSai, (*ppAnt)->dir);
    qSai->data = (*ppAnt)->data;
    No* aux = *ppAnt;
    *ppAnt = aux->esq;
    free(aux);
}
bool ArvoreRemove(No **ppRaiz, Item chave, Item *pX){
    if(!(*ppRaiz))
        return false;
    if(chave.chave > (*ppRaiz)->data.chave)
        return ArvoreRemove((*ppRaiz)->dir, chave, pX);
    if(chave.chave < (*ppRaiz)->data.chave)
        return ArvoreRemove((*ppRaiz)->esq, chave, pX);
    *pX = (*ppRaiz)->data;
    //No folha
    if(!(*ppRaiz)->esq && !(*ppRaiz)->dir){
        free(*ppRaiz);
        *ppRaiz = NULL;
        return true;
    }
    //so tem filho na esquerda
    if((*ppRaiz)->esq && !(*ppRaiz)->dir){
        No* aux= *ppRaiz;
        *ppRaiz = (*ppRaiz)->esq;
        free(aux);
        return true;
    }
    //so tem filha na direita
    if(!(*ppRaiz)->esq && (*ppRaiz)->dir){
        No* aux = *ppRaiz;
        *ppRaiz = (*ppRaiz)->dir;
        free(aux);
        return true;
    }
    //TEM OS DOIS
    return noAntecessor(*ppRaiz, &(*ppRaiz)->esq);
}

