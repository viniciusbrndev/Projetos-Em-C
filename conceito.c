#include <stdio.h>

int main(){
  int matricula;
  float nota;
  char conceito;
  
  printf("Digite a matricula:\n");
  scanf("%d", &matricula);
  printf("Digite a nota:\n");
  scanf("%f", &nota);
  
  if(nota >= 9.0){
    printf("Matricula: %d\n", matricula);
    conceito = 'A';
    printf("Conceito %c\n", conceito);
  } else if(nota >= 8.0){
      printf("Matricula: %d\n", matricula);
      conceito = 'B';
      printf("Conceito %c\n", conceito);
    } else if(nota >= 6.0){
        printf("Matricula: %d\n", matricula);
        conceito = 'C';
        printf("Conceito %c\n", conceito);
      } else if(nota >= 3.0){
          printf("Matricula: %d\n", matricula);
          conceito = 'D';
          printf("Conceito %c\n", conceito);
        } else{
            printf("Matricula: %d\n", matricula);
            conceito = 'E';
            printf("Conceito %c\n", conceito);
          }
return 0;
}
