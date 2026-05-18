#include "lista.h"
#include <stdio.h>
#include <stdlib.h>

struct lista {
    Item *itens; // vetor de elementos
    int tam; // tamanho máximo
    int n; // quantidade de elementos
};

// O(1)
Lista* ListaCria() { 
    Lista* pLista = (Lista*) malloc(sizeof(Lista));
    if (pLista) {
        pLista->n = 0;
        pLista->tam = 5;
        pLista->itens = (Item*) malloc(sizeof(Item) * pLista->tam);
        if (!pLista->itens) {
            free(pLista);
            pLista = NULL;
        }
    }
    return pLista;
}

// O(1)
Lista* ListaDestroi(Lista *pLista) {
    if (pLista) {
        free(pLista->itens);
        free(pLista);
    }
    return NULL;
}

// O(1)
bool ListaEhVazia(Lista *pLista) {
    if (pLista)
        return pLista->n == 0;
    return false;
}

// O(1)
int ListaTamanho(Lista *pLista) {
    return pLista ? pLista->n : -1;
}

bool ListaEsvazia(Lista *pLista) {
    if (pLista) {
        pLista->n = 0;
        return true;
    }
    return false;
}

// O(n)
bool ListaInsereInicio(Lista *pLista, Item x) {
    return ListaInsereMeio(pLista, x, 0);
    /*
    if (!pLista)
        return false;
    if (pLista->n == pLista->tam)
        return false;
    for (int i=pLista->n;i>0;i--)
        pLista->itens[i] = pLista->itens[i - 1];
    pLista->itens[0] = x;
    pLista->n++;
    return true;
    */
}

// O(n)
bool ListaInsereMeio(Lista *pLista, Item x, int pos) {
    if (!pLista)
        return false;
    if (pLista->n == pLista->tam)
        return false;
    if (pos < 0 || pos > pLista->n)
        return false;
    for (int i=pLista->n;i>pos;i--)
        pLista->itens[i] = pLista->itens[i - 1];
    pLista->itens[pos] = x;
    pLista->n++;
    return true;
}

// O(1)
bool ListaInsereFim(Lista *pLista, Item x) {
    return ListaInsereMeio(pLista, x, pLista->n);
    /*
    if (!pLista)
        return false;
    if (pLista->n == pLista->tam)
        return false;
    pLista->itens[pLista->n++] = x;
    return true;
    */
}

// O(n)
bool ListaRemoveInicio(Lista *pLista, Item *pX) {
    return ListaRemoveMeio(pLista, 0, pX);
}

// O(n)
bool ListaRemoveMeio(Lista *pLista, int pos, Item *pX) {
    if (!pLista || !pX)
        return false;
    if (pos < 0 || pos >= pLista->n)
        return false;
    *pX = pLista->itens[pos];
    for (int i=pos;i<pLista->n-1;i++)
        pLista->itens[i] = pLista->itens[i + 1];
    pLista->n--;
    return true;
}

// O(1)
bool ListaRemoveFim(Lista *pLista, Item *pX) {
    if (pLista)
        return ListaRemoveMeio(pLista, pLista->n-1, pX);
    return false;
}

// O(1)
bool ListaGet(Lista *pLista, int pos, Item *pX) {
    if (!pLista || !pX)
        return false;
    if (pos < 0 || pos >= pLista->n)
        return false;
    *pX = pLista->itens[pos];
    return true;
}

// O(n)
void ListaImprime(Lista *pLista) {
    if (pLista) {
        printf("(");
        for (int i=0;i<pLista->n;i++)
            ItemImprime(pLista->itens[i]);
        printf(")\n");
    }
}