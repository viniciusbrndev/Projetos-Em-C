#include <stdlib.h>
#include <stdio.h>

void minMAx(int *v, int tam, int *max, int *min);


int main(){
    int n;
    int max;
    int min;
    printf("DIGITE O TAMAANHO DO VETOR: ");
    scanf("%d", &n);
    int *vet = malloc(sizeof(int) * n);
    if(vet == NULL){
        printf("ERRO NA ALOCAÇÃO");
        return 0;
    }printf("\ninsira os vlores: ");
    for(int i = 0; i < n; i++){
        scanf("%d", &vet[i]);
    }
    minMAx(vet, n, &max, &min);
    printf("\nMAX: %d", max);
    printf("\nMIN: %d", min);



    free(vet);
    return 0;
}
void minMAx(int *v, int tam, int *max, int *min){
    *min = v[0];
    *max = v[2];
    for(int i = 0; i < tam; i++){
        if(*min > v[i])
            *min = v[i];
        if(*max < v[i])
            *max = v[i];
    }
}