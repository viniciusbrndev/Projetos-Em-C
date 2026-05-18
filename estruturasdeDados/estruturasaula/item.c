#include "item.h"

#include <stdio.h>

void ItemImprime(Item item) {
    printf("[%2d|%s]", item.chave, item.nome);
}