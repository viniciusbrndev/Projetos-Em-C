#include <stdio.h>
#include <stdlib.h>


typedef struct 
{
    int numerador;
    int denominador;
} Racional;

void somaFracao(Racional num1, Racional num2, Racional *res);
void subFracao(Racional num1, Racional num2, Racional *res);
void multFracao(Racional num1, Racional num2, Racional *res);

int main(){
    Racional num1;
    Racional num2;
    Racional resSoma;
    Racional resSub;
    Racional resMult;
    Racional resDiv;
    printf("Digite o númerador e denominador respectivamente: ");
    scanf("%d", &num1.numerador);
    scanf("%d", &num1.denominador);
    printf("\nDigite o númerador e denominador respectivamente: ");
    scanf("%d", &num2.numerador);
    scanf("%d", &num2.denominador);

    somaFracao(num1, num2, &resSoma);
    subFracao(num1, num2, &resSub);
    multFracao(num1, num2, &resMult);
    divFracao(num1, num2, &resDiv);




}
void somaFracao(Racional num1, Racional num2, Racional *res){
    res->numerador = (num1.numerador * num2.denominador) + (num2.numerador *num1.denominador); 
    res->denominador = num1.denominador * num2.denominador;
}
void subFracao(Racional num1, Racional num2, Racional *res){
    res->numerador = (num1.numerador * num2.denominador) - (num2.numerador *num1.denominador); 
    res->denominador = num1.denominador * num2.denominador;

    
}
void multFracao(Racional num1, Racional num2, Racional *res){
    res->numerador = num1.numerador * num2.numerador;
    res->denominador = num1.denominador * num2.denominador;
}
void divFracao(Racional num1, Racional num2, Racional *res){
    res->numerador = num1.numerador * num2.denominador;
    res->denominador = num1.denominador * num2.numerador;
}
int equal(Racional r1, Racional r2){
    
}