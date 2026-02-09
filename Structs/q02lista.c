#include <stdio.h>
#include <stdlib.h>
#include <math.h>

typedef struct
{
    int left;
    int right;
} Realtype;


int main(){
    Realtype realnum1;
    Realtype realnum2;
    char num1[10];
    char num2[10];
    printf("DIGITE O NÚMERO 1: ");
    fgets(num1, sizeof(num1), stdin);
    printf("\nDIGITE O NÚMERO 2: ");
    fgets(num2, sizeof(num2), stdin);

    int flag = 1;
    for(int i = 0; num1[i] != '\0'; i++){
        
        if(flag){
            realnum1.left = num1[i];
            if(num1[i] == '.')
                flag = 0;
        }
        else{
            realnum1.right = num1[i];
        }
    }




}

double somaNum(Realtype num1, Realtype num2){}
double subNum(Realtype num1, Realtype num2){}
double multiNum(Realtype num1, Realtype num2){}