#include <stdio.h>
#include <stdlib.h>
 
typedef struct{
  char nome[100];
  int matricula;
  float *notas;
} Aluno;

void limparBuffer();

int main(){
  int n, x;
  Aluno *turma;
  printf("Digite quantos alunos deseja cadastrar: ");
  scanf("%d", &n);
  if(n <= 0)
    return 0;
  //alocando memória
  turma = malloc(n * sizeof(Aluno));
  if(!turma){
    printf("\nFALHA DE ALOCAÇÃO");
    return 0;
  }
  printf("\nDigite quantas notas cada aluno deve possuir: ");
  scanf("%d", &x);
  if(x <= 0)
    return 0;
  for(int i = 0; i < n; i++)
    turma[i].notas = malloc(x * sizeof(float));
    
  //inicializando as variáveis
  for(int a = 0; a < n; a++){
    limparBuffer();
    printf("\nDigite o nome do aluno %d:", a+1);
    fgets(turma[a].nome, sizeof(turma->nome), stdin);
    
    printf("\nDigite a matrícula do aluno: ");
    scanf("%d", &turma[a].matricula);
    
    printf("\nDigite as notas do aluno: ");
    for(int b = 0; b < x; b++)
      scanf("%f", &turma[a].notas[b]);
  }
  
  for(int i = 0; i < n; i++){
    printf("\nNome: %s", turma[i].nome);
    printf("\nMatricula: %d", turma[i].matricula);
    printf("\nNotas: ");
    for(int j = 0; j < x; j++)
      printf("%.2f ", turma[i].notas[j]);
  }
  printf("\n");
  //liberando a memória dos vetores de notas e alunos 
  for(int i = 0; i < n; i++)
    free(turma[i].notas);
  free(turma);
  return 0;
}




void limparBuffer(){
  char c;
  while((c = getchar()) != '\n' && !EOF);
}
