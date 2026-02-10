#include <stdlib.h>
#include <stdio.h>


void maiores(int *vet, int tam, int *maior, int *maior2);
int main(){
int n;
    int max;
    int max2;
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
    maiores(vet, n, &max, &max2);
    printf("\nMAX: %d", max);
    printf("\nMAX2: %d", max2);



    free(vet);
    return 0;


}
void maiores(int *vet, int tam, int *maior, int *maior2){
    int temp;
    for(int i = 0; i < tam; i++)
        for(int j = 0; j < tam-1; j++){
            if(vet[i] < vet[i+1]){
                temp = vet[i];
                vet[i] = vet[i+1];
                vet[i+1] = temp;
            }
        }
        *maior = vet[0];
        *maior2 = vet[1];
}