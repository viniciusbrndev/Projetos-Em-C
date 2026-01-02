#include <stdio.h>
#include <math.h>//biblioteca de funções matemáticas
  
  int main(){
  //declara as variáveis
    float nota1, nota2, nota3, media;
  //pede para inserir os dados   
    printf("Escreva as notas 1, 2 e 3.\n");
  //Pega dados do teclado e armazena em variáveis  
    scanf("%f, %f, %f", &nota1, &nota2, &nota3);
  //Faz uma operação aritmética e atribuí à variável "media"  
    media = (nota1 + nota2 + nota3)/3;
  //Exibe o resultado  
    printf("Sua media é %f! \n", media);    
    
  }
