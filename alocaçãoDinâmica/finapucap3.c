#include <stdlib.h>
#include <stdio.h>
#include <string.h>

typedef struct{
  char nome[50];
  float nota;
  int freq;
}Aluno;
int salvarTxt(Aluno *vet, int tam);
int salvarDat(Aluno *vet, int tam);

int main(){
  int n;
  printf("Digite o num de alunos: ");
  scanf("%d", &n);
  getchar();
  Aluno *turma =  malloc(sizeof(Aluno) * n);
  for(int i = 0; i < n; i++){
    printf("\nInsira os dados do aluno %d", i+1);
    fgets(turma[i].nome, sizeof(char)*50, stdin);
    scanf("%f", &turma[i].nota);
    getchar();
    scanf("%d", &turma[i].freq);
    getchar();
  }
  if(salvarTxt(turma, n))
    printf("\nARQUIVO .txt SALVO!");
  else
    printf("ALGO DEU ERRADO DESCULPE :(");
  if(salvarDat(turma, n))
    printf("\nARQUIVO .dat SALVO!");
  else
    printf("ALGO DEU ERRADO DESCULPE :(");
    
  free(turma);
  return 0;
}
int salvarTxt(Aluno *vet, int tam){
  FILE *arq = fopen("aluno.txt", "w");
  if(arq == NULL)
    return 0;
  for(int i = 0; i < tam; i++){
    fprintf(arq, "nome: %s; nota: %.2f; frequência: %d",vet[i].nome, vet[i].nota, vet[i].freq );
    fprintf(arq, "\n");
  }

  fclose(arq);
  return 1;
}
int salvarDat(Aluno *vet, int tam){
  FILE *arq = fopen("alunos.dat", "wb");
  if(arq == NULL)
    return 0;
  fwrite(vet, sizeof(Aluno), tam, arq);
  fclose(arq);
return 1;
}
