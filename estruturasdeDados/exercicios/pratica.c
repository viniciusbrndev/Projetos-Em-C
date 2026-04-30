#include "pratica.h"
#include "pratica2.h"
#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>

struct time{
    Jogador **player;
    int nPlayers;
    char nomeTime[20];
    char conf;
};


float maiorElemento(int i, float* v){
    if(i == 1)
        return v[0];
    float max = maiorElemento(i-1, &v[1]);
    if(v[0] > max){
        max = v[0];
    }
    return max;
}
int inverteInt(int n){
    int soma = 0;
    if(n < 1)
        return n;
    soma = (soma*10) + inverteInt(n%10);
    return soma;
}
int potenciaDeN(int k, int n){
    if(n == 0)
        return 1;
    return k* potenciaDeN(k, n-1);
}
void inverteVetor(float *v, int inicio, int fim){
    if(inicio >= fim)
        return;

    float temp = v[inicio];
    v[inicio] = v[fim];
    v[fim] = temp;
    inverteVetor(v, inicio+1, fim-1);
}
void inverteVetor2(float *v, int i, int tam){
    if(i >= tam/2)
        return;
        
    float temp = v[i];
    v[i] = v[tam-i-1];
    v[tam-i-1] = temp;
    inverteVetor2(v, i+1, tam);
}

Time* alocaTimes(int *v, int num_times){
    if(!v || num_times <= 0)
        return NULL;
    Time *p = (Time*)malloc(sizeof(Time) * num_times);
    if(!p)
        return NULL;
    for(int i = 0; i < num_times; i++){
        p[i].nPlayers = v[i];
        p[i].player = (Jogador**)malloc(sizeof(Jogador*)*v[i]);
        if(!p[i].player){
            for(int a = 0; a < i; a++){
                free(p[a].player);
            }
            free(p);
            return NULL;
        }
        for(int j = 0; j < p[i].nPlayers; j++){
            p[i].player[j] = alocaJogador();
        }
    }
    return p;
}
void desalocaTime(Time **p, int num_times){
    if(!p|| num_times <= 0)
        return;
    for(int i = 0; i < num_times; i++){
        for(int j = 0; j < (*p)[i].nPlayers; j++)
            desalocaJoogador((*p)[i].player[j]);
        free((*p)[i].player);
    }
    free(*p);
    *p = NULL;
}
void imprime(Time* p){
    if(!p)
        return;
    printf("\nNome do time: %s", p->nomeTime);
    print("\nNum de jogadores; %d", p->nPlayers);
    printf("\nJOGADORES TITULARES:\n");
    for(int i = 0; i < p->nPlayers; i++){
        imprimeTitular(p->player[i]);
    }
}
int quantidadeDeTimes(Time* times, char *conferencia, int n, int x, int tam){
    int cont = 0;
    if(!times || !conferencia || n <= 0 || x <= 0)
        return -1;
    for(int i = 0; i < tam; i++)
        if(times[i].conf == *conferencia)
            if(times[i].nPlayers > n)
                for(int j = 0; j < times[i].nPlayers; j++)
                    if(idadeJogador(times[i].player[j]) > x){
                        cont++;
                        break;
                    }
                
            
        
    return cont;
}
void imprimeVetor(int *v, int n){
    if(n == 0)
        return;
    printf("%d ", v[0]);
    imprimeVetor(v + 1, n -1);
}
void imprimeImpar(int *v, int n){
    if(n == 0)
        return;
    if((v[0] % 2) == 0)
        printf("%d ", v[0]);
    imprimeImpar(v +1, n -1);
}