//BIBLIOTECAS
#include <stdio.h>
#define MAX 4

//ESTRUTURAS
typedef struct{
  char nome[16];
  float potencia;
  float tempo;
}Eletrodomestico;
//FUNÇÕES
float consumoTotal(Eletrodomestico vetor[MAX], int n);
void calcularPorcentagem(Eletrodomestico vetor[MAX], float total, int tempo);

int main(){
  Eletrodomestico casa[MAX];
  int time;
  float consumo;
  
  for(int i = 0; i < MAX; i++){
    printf("\nEletrodoméstico %d", i);
    printf("\nNome: ");
    scanf("%s", casa[i].nome);
    printf("\nConsumo (kW/h): ");
    scanf("%f", &casa[i].potencia);
    printf("\nTempo ativo em horas: ");
    scanf("%f", &casa[i].tempo);
    printf("\n");
  }
  printf("\nNúmero de dias para cálculo: ");
  scanf("%d", &time);
  consumo = consumoTotal(casa, time);
  printf("\nConsumo total: %.1f", consumo);
  
  printf("\nPorcentagens:\n");
  calcularPorcentagem(casa, consumo, time);
  
  
}


float consumoTotal(Eletrodomestico vetor[MAX], int n){
  float total = 0;
  for(int i = 0; i < MAX; i++){
    total += (vetor[i].potencia * vetor[i].tempo) * n;
  }
  return total;
}
void calcularPorcentagem(Eletrodomestico vetor[MAX], float total, int tempo){
  for(int i = 0; i < MAX; i++){
    printf("%s %.2f%\n", vetor[i].nome, (vetor[i].potencia * vetor[i].tempo * tempo/ total) * 100);
  }
}

