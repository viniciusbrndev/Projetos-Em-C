#ifndef PRATICA2_H
#define PRATICA2_H

typedef struct jogador Jogador;

Jogador* alocaJogador();
void desalocaJoogador(Jogador **p);
void imprimeTitular(Jogador *jogador);
int idadeJogador(Jogador* p);
#endif