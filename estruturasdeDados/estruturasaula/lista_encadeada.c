#include "lista.h"
#include <stdio.h>
#include <stdlib.h>

typedef struct cel {
    Item item;
    struct cel *prox;
} Celula;


struct lista {
    int n; // quantidade de elementos
    Celula *cab;
    Celula *ult;
};

// O(1)
Lista* ListaCria() { 
    Lista* pLista = (Lista*) malloc(sizeof(Lista));
    if (pLista) {
        pLista->n = 0;
        pLista->cab = (Celula*) malloc(sizeof(Celula));
        if (!pLista->cab) {
            free(pLista);
            return NULL;
        }
        pLista->cab->prox = NULL;
        pLista->ult = pLista->cab;
    }
    return pLista;
}

// O(n)
Lista* ListaDestroi(Lista *pLista) {
    if (pLista) {
        ListaEsvazia(pLista);
        free(pLista->cab);
        free(pLista);
    }
    return NULL;
}

// O(1)
bool ListaEhVazia(Lista *pLista) {
    // if (pLista)
        // return pLista->n == 0;
        // return pLista->ult == pLista->cab;
    return false;
}

// O(1)
int ListaTamanho(Lista *pLista) {
    return pLista ? pLista->n : -1;
    // if (pLista) {
    //     int i = 0;
    //     Celula *aux = pLista->cab->prox;
    //     while (aux) { // aux != NULL
    //         aux = aux->prox;
    //         i++;
    //     }
    //     return i;
    // }
    // return -1;
}

// O(n)
bool ListaEsvazia(Lista *pLista) {
    if (pLista) {
        Item x;
        while(ListaRemoveInicio(pLista, &x));
        return true;
    }
    return false;
}

// O(1)
bool ListaInsereInicio(Lista *pLista, Item x) {
    return ListaInsereMeio(pLista, x, 0);
}

// O(n)
bool ListaInsereMeio(Lista *pLista, Item x, int pos) {
    if (!pLista)
        return false;
    if (pos < 0 || pos > pLista->n)
        return false;
    Celula *nova = (Celula*) malloc(sizeof(Celula));
    if (!nova)
        return false;
    Celula *aux = NULL;

    if (pos == pLista->n)
        aux = pLista->ult;
    else {
        aux = pLista->cab;
        for (int i=0;i<pos;i++) 
            aux = aux->prox;
    }
    
    nova->item = x;
    nova->prox = aux->prox;
    aux->prox = nova;

    if (pos == pLista->n)
        pLista->ult = nova;
    
    pLista->n++;
    return true;
}

// O(1)
bool ListaInsereFim(Lista *pLista, Item x) {
    return ListaInsereMeio(pLista, x, pLista->n);
}

// O(1)
bool ListaRemoveInicio(Lista *pLista, Item *pX) {
    return ListaRemoveMeio(pLista, 0, pX);
}

// O(n)
bool ListaRemoveMeio(Lista *pLista, int pos, Item *pX) {
    if (!pLista || !pX)
        return false;
    if (pos < 0 || pos >= pLista->n)
        return false;
    
    Celula *ant = pLista->cab;
    for (int i=0;i<pos;i++)
        ant = ant->prox;
    
    Celula *aux = ant->prox;
    ant->prox = aux->prox;
    *pX = aux->item;
    free(aux);
    pLista->n--;
    if (pos == pLista->n)
        pLista->ult = ant;
    return true;
}

// O(n)
bool ListaRemoveFim(Lista *pLista, Item *pX) {
    if (pLista)
        return ListaRemoveMeio(pLista, pLista->n-1, pX);
    return false;
}

// O(n)
bool ListaGet(Lista *pLista, int pos, Item *pX) {
    if (!pLista || !pX)
        return false;
    if (pos < 0 || pos >= pLista->n)
        return false;
    Celula *ant = pLista->cab;
    for (int i=0;i<pos;i++)
        ant = ant->prox;
    *pX = ant->prox->item;
    return true;
}

// O(n)
void ListaImprime(Lista *pLista) {
    if (pLista) {
        printf("(");
        Celula *aux = pLista->cab->prox;
        // OP 1
        // for (int i=0;i<pLista->n;i++) {
        //     ItemImprime(aux->item);
        //     aux = aux->prox;
        // }
        // OP 2
        while (aux) { // aux != NULL
            ItemImprime(aux->item);
            aux = aux->prox;
        }
        // // OP 3
        // for (aux=pLista->cab->prox; aux != NULL; aux=aux->prox)
        //     ItemImprime(aux->item);
        printf(")\n");
    }
}