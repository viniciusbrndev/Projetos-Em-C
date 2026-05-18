#include <stdio.h>
#include "lista.h"
#include "item.h"

void testaLista();

int main() {
    testaLista();
    return 0;
}

void testaLista() {
    Lista *pLista = NULL;
    pLista = ListaCria();
    printf("A lista %s vazia\n", ListaEhVazia(pLista) ? "eh" : "nao eh");
    printf("Inseriu [1|pedro] na lista fim? %s\n", ListaInsereFim(pLista, (Item){1, "pedro"}) ? "SIM" : "NAO");
    printf("A lista %s vazia\n", ListaEhVazia(pLista) ? "eh" : "nao eh");
    printf("Inseriu [2|gui] na lista inicio? %s\n", ListaInsereInicio(pLista, (Item){2, "gui"}) ? "SIM" : "NAO");
    printf("Inseriu [3|ze] na lista meio(1)? %s\n", ListaInsereMeio(pLista, (Item){3, "ze"}, 1) ? "SIM" : "NAO");

    printf("Inseriu [4|maria] na lista (indice invalido)? %s\n", ListaInsereMeio(pLista, (Item){4, "maria"}, 10) ? "SIM" : "NAO");

    ListaImprime(pLista);

    ListaEsvazia(pLista);
    printf("A lista %s vazia\n", ListaEhVazia(pLista) ? "eh" : "nao eh");
    ListaImprime(pLista);

    for (int i=0;i<10;i++)
        printf("Inseriu [%d|pedro] na lista fim? %s\n", i + 1, ListaInsereFim(pLista, (Item){i + 1, "pedro"}) ? "SIM" : "NAO");
    
    ListaImprime(pLista);
    
    Item item;
    if (ListaRemoveInicio(pLista, &item)) { 
        printf("Item removido inicio: ");
        ItemImprime(item);
        printf("\n");
    } else printf("Item nao foi removido\n");

    if (ListaRemoveMeio(pLista, 3, &item)) { 
        printf("Item removido meio(3): ");
        ItemImprime(item);
        printf("\n");
    } else printf("Item nao foi removido\n");

    if (ListaRemoveMeio(pLista, 3, &item)) { 
        printf("Item removido meio(3): ");
        ItemImprime(item);
        printf("\n");
    } else printf("Item nao foi removido\n");

    ListaImprime(pLista);

    if (ListaGet(pLista, 1, &item)) { 
        printf("Item localizado pos(1): ");
        ItemImprime(item);
        printf("\n");
    } else printf("Item nao foi localizado pos(1)\n");

    if (ListaGet(pLista, 13, &item)) { 
        printf("Item localizado pos(13): ");
        ItemImprime(item);
        printf("\n");
    } else printf("Item nao foi localizado pos(13)\n");


    pLista = ListaDestroi(pLista);
}