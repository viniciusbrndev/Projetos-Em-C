#ifndef LISTA_H
#define LISTA_H

#include <stdbool.h>
#include "item.h"

typedef struct lista Lista;

Lista* ListaCria();
Lista* ListaDestroi(Lista *pLista);

bool ListaEhVazia(Lista *pLista);
int ListaTamanho(Lista *pLista);
bool ListaEsvazia(Lista *pLista);
bool ListaInsereInicio(Lista *pLista, Item x);
bool ListaInsereMeio(Lista *pLista, Item x, int pos);
bool ListaInsereFim(Lista *pLista, Item x);
bool ListaRemoveInicio(Lista *pLista, Item *pX);
bool ListaRemoveMeio(Lista *pLista, int pos, Item *pX);
bool ListaRemoveFim(Lista *pLista, Item *pX);
bool ListaGet(Lista *pLista, int pos, Item *pX);
void ListaImprime(Lista *pLista);


#endif // LISTA_H