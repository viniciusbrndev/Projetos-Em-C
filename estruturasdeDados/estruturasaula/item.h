#ifndef ITEM_H
#define ITEM_H

typedef struct {
    int chave;
    char nome[21];
} Item;

void ItemImprime(Item item);

#endif // ITEM_H