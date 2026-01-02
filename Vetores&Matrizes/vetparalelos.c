#include <stdio.h>
#define MAX 50

int main(){
  int matricula[MAX], codDis[MAX];
  char nome[MAX][MAX];
  float nota1[MAX], nota2[MAX];

  for(int i = 0; i < MAX; i++){
    printf("DIGITE A MATRÍCULA DO ALUNO %d: ", i+1);
    scanf("%d", matricula[i]);
    printf("\nDIGITE O NOME DO ALUNO %d: ", i+1);
    fgets(nome[i], sizeof(nome), stdin);
    printf("\nDIGITE O CÓDIGO DA DISCIPLINA: %d", i+1);
    scanf("%d", codDis[i]);
  }

}


