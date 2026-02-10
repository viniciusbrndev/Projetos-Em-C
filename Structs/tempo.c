#include <stdio.h>
#include <stdlib.h>


typedef struct 
{
    int horas;
    int min;
    int seg;
} Tempo;

int main(){
    Tempo time;
    long long segundos;
    printf("DIGITE O TEMPO EM SEGUNDOS: ");
    scanf("%lld", &segundos);
    time.horas = segundos / 3600;
    time.min = (segundos % 3600) / 60;
    time.seg = segundos % 60;
    printf("\n%2d:%2d:%2d\n", time.horas, time.min, time.seg);


}