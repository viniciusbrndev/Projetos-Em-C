#include <stdio.h>
#include <stdlib.h>
#include <time.h>


int main(){
    srand(time(NULL));
    int *vet1 = malloc(sizeof(int) * 10);
    int **vet2 = malloc(sizeof(int*) * 10);

    for(int i = 0; i < 10; i++){
        vet1[i] = (rand() % 9) +1;
    }
    for(int i =0; i < 10; i++)
        printf("%d ", vet1[i]);
    printf("\n");
    
    for(int j = 0; j < 10; j++){
        vet2[j] = &vet1[j];
    }
    //bubble sort
    int *temp;
    for(int j = 0; j < 10; j++){
        for(int i = 0; i < 10-1; i++){
            if(*(vet2[i]) > *(vet2[i+1])){
                temp = vet2[i];
                vet2[i] = vet2[i+1];
                vet2[i+1] = temp;
            }
        }
    }
    for(int j = 0; j < 10; j++)
        printf("%d ", *(vet2[j]));

free(vet2);
free(vet1);
}