#include <stdio.h>
  
  int main(){
    char nome[50];
    int idade = 0;
      printf("Digite seu nome:\n");
      scanf("%49s", nome);
      
      printf("Digite sua idade:\n");
      scanf("%d", &idade);
      
      
    printf("Olá, %s! Você  tem %d anos.\n", nome, idade);
      
  return 0;
}
