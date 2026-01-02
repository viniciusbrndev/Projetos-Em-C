#include <stdio.h>
#include <math.h>
#include <time.h>
#include <stdlib.h>

#define PI 3.14
/*
float funcao_comprimento(float raio);
float funcao_area(float raio);
float funcao_volume(float raio);

int main(){
  float raioCirc;
  printf("Digite o raio da circunferência:\n");
  scanf("%f", &raioCirc );
  
  float comp = funcao_comprimento(raioCirc);
  float area = funcao_area(raioCirc);
  float volume = funcao_volume(raioCirc);
  
  printf("\nComprimento: %.2f\n", comp);
  printf("\nArea: %.2f\n", area);
  printf("\nVolume: %.2f\n", volume);

return 0;
}

float funcao_comprimento(float raio){
    return 2 * PI * raio;
}

float funcao_area(float raio){
  return PI * pow(raio, 2);
}

float funcao_volume(float raio){
  return 4.0/3.0 * PI * pow(raio, 3);
}*/


//exercício de soma dos lados de um dado
/*
int main(){
  srand(time(NULL));
  
  int dado1, dado2, aposta;
  printf("Insira o valor da soma dos dados:\n");
  scanf("%d", &aposta);
  
  dado1 = rand() % 6 +1;
  dado2 = rand() % 6 +1;
  int soma = dado1 + dado2;
  if(aposta <= 12){
  printf("Os dados rolados foram %d e %d!\n", dado1, dado2);
  printf("\nA soma dos valores foi exatamente igual à %d\n", soma);
  
  if(soma == aposta)
    printf("\nVocê ganhou!:)");
  else
    printf("\nVocê errou! :(\n");
  
  }else
    printf("O valor inserido é inválido");
  

}
*/

// trocar valores com ponteiros
/*
void trocaNum(int *pa, int *pb);

int main(){
  int a, b;
  printf("Digite dois valores para A e B\n");
  scanf("%d %d", &a, &b);
  trocaNum(&a, &b);
  printf("A: %d, B: %d\n", a, b);
}


void trocaNum(int *pa, int *pb){
  int aux = *pa;
  *pa = *pb;
  *pb = aux;
}*/
/*
int main(){
  int a, b, c, d, e, f;
  printf("Digite 5 números inteiros\n");
  scanf("%d %d %d %d %d\n", &a, &b, &c, &d, &e);
  if(a < b && a < c && a < d && a < c);
    printf("%d é o menor!\n", a);
  else if(b < a && b < c && b < d && b < e);
    printf("%d é o menor!\n", b);

}*/

//IMC
/*
void imprimirImc(float a, float b){
  float imc = a / pow(b, 2);
  printf("IMC: %.2f\n", imc);
}

int main(){
  float peso, altura;
  printf("Digite seu peso e altura respectivamente:\n");
  scanf("%f %f", &peso, &altura);
  imprimirImc(peso, altura);



}*/

/*
int ehBissexto(int ano){
  if(ano % 4 == 0 && ano % 100 > 0){
    return 1;
  }else{
    return 0;
  }

}
int main(){
  int ano;
  printf("Digite o ano desejado(ex: 2000):\n");
  scanf("%d", &ano);
  int teste = ehBissexto(ano);
  if(teste == 1 && ano >= 1)
    printf("É bissexto!\n");
  else
    printf("Não é bissexto\n");
}*/

void trocar(int *a, int *b){
  int temp1 = *a;
    *a = *b;
    *b = temp1;
}

void ordenar(int *a, int *b, int *c){
  if(*a > *b)
    trocar(a, b);
  if(*b > *c)
    trocar(b, c);
  if(*a > *b)
    trocar(a, b);
}

int main(){
  int a, b, c;
  printf("Digite três valores:\n");
  scanf("%d %d %d", &a, &b, &c);
  ordenar(&a, &b, &c);
  printf("A: %d, B: %d, C: %d\n", a, b, c);


}
