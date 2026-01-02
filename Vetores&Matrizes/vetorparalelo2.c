#include <stdio.h>
#include <string.h>
#define MAX 5

int main(){
  int matricula[MAX];
  float nota1[MAX], nota2[MAX], nota3[MAX];
  for(int i = 0; i < MAX; i++){
    printf("DIGITE A MATRICULA DO ALUNO: ");
    scanf("%d", &matricula[i]);
    printf("\nDIGITE AS NOTAS 1, 2 e 3: \n");
    scanf("%f %f %f", &nota1[i], &nota2[i], &nota3[i]);
  }
  for(int i = 0; i < MAX; i++){
    float media = nota1[i] + nota2[i] + nota3[i] / 3.0;
    printf("\nMATRICULA: %d", matricula[i]);
    if(media >= 6)
      printf(" APROVADO");
    else
      printf(" REPROVADO");
  }
  
  


}



