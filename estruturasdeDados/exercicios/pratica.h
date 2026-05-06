#ifndef PRATICA_H
#define PRATICA_H
typedef struct time Time;
typedef struct aluno Aluno;
typedef struct funcionario Funcionario;

float maiorElemento(int i, float* v);
int inverteInt(int n);
int potenciaDeN(int k, int n);
void imprime(Time* p);
int quantidadeDeTimes(Time* times, char *conferencia, int n, int x, int tam);
void imprimeVetor(int *v, int n);
void imprimeImpar(int *v, int n);
int printTree(int n);
#endif