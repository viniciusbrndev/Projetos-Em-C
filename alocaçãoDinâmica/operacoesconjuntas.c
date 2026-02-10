#include <stdlib.h>
#include <stdio.h>


int main(){
    int n;
    int m;
    printf("INSIRA  O TAMANHO DO VETOR 1: ");
    scanf("%d", &n);
    printf("\nINSIRA  O TAMANHO DO VETOR 2: ");
    scanf("%d", &m);
    int *vet1 = malloc(sizeof(int) * n);
    int *vet2 = malloc(sizeof(int) * m);
    int *diferentes;
    int *iguais;
    printf("\ndigite os elementos do vetor 1: ");
    for(int i = 0; i < n; i++){
        scanf("%d", &vet1[i]);
    }
    printf("\ndigite os elementos do vetor 2: ");
    for(int j = 0; j < m; j++){
        scanf("%d", &vet2[j]);
    }
    int cont = 0;
    int flag;
    for(int i = 0; i < n; i++){
        flag = 1;
        for(int j = 0; j < m; j++){
            if(vet1[i] == vet2[j]){
                flag = 0;
            }
        }
        if(flag)
            cont++;
    }
    if(cont == 0){
        printf("\nNÃO EXISTEM VALORES EM VET1 QUE NÃO ESTEJAM EM VET2");
    }
    else{
        //A - B
        int k=0;
        diferentes = malloc(sizeof(int) * cont);
        int flag2;
        for(int i = 0; i < n; i++){
            flag2 = 1;
            for(int j = 0; j < m; j++){
                if(vet1[i] == vet2[j])
                    flag2 = 0;
            }
            if(flag2){
                diferentes[k] = vet1[i];
                k++;
            }
            
        }
    }
    int cont2 = 0;
    int flag3;
    for(int i = 0; i < n; i++){
        flag3 = 0;
        for(int j = 0; j < m; j++){
            if(vet1[i] == vet2[j]){
                flag3 = 1;
                break;
            }
        }
        if(flag3)
            cont2++;
    }
    if(cont2 == 0)
        printf("\nNÃO EXISTEM VALORES EM VET1 QUE ESTEJAM EM VET2");
    else{
        int a =0;
        iguais = malloc(sizeof(int) * cont2);
        int flag4;
        for(int i = 0; i < n; i++){
            flag4 = 0;
            for(int j = 0; j < m; j++){
                if(vet1[i] == vet2[j]){
                    flag4 = 1;
                    break;
                }
            }
            if(flag4){
                iguais[a] = vet1[i];
                a++;
            }
            
        }
    }
    if(cont != 0)
        free(diferentes);
    if(cont2 !=0)
        free(iguais);
    free(vet1);
    free(vet2);
    return 0;
    }

