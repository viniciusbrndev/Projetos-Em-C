#ifndef PRATICA_H
#define PRATICA_H
typedef struct time Time;

float maiorElemento(int i, float* v);
int inverteInt(int n);
int potenciaDeN(int k, int n);
void imprime(Time* p);
int quantidadeDeTimes(Time* times, char *conferencia, int n, int x, int tam);
#endif