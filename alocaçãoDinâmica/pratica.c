#include <stdio.h>
#include <stdlib.h>
typedef struct{
  char nome[50];
  char cargo[50];
  float salario;
}Empresa;
void limparBuffer(){
  char c;
  while((c = getchar()) != '\0' && !EOF);

}
int main(){
  int nFunc;
  Empresa *funcionarios;
  printf("Digite o número de funcionário a serem cadastrados: ");
  scanf("%d", &nFunc);
  funcionarios = malloc(sizeof(Empresa) * nFunc);
  
  if(funcionarios == NULL)
  {
    printf("\nA alocação não foi bem sucedida!!");
    return 0;
  }
  
  for(int i = 0; i < nFuc; i++){
    printf("\nInsira os dados do %d⁰ funcionário nessa ordem /"Nome: "/ /"Cargo: "/ /"Salário: "/ ", i + 1);
    limparBuffer();
    fgets(funcionarios[i].nome, sizeof(funcionarios.nome), stdin);
    fgets(funcionarios[i].cargo, sizeof(funcionarios.cargo), stdin);
    scanf("%f", &funcionarios[i].salario);
  
  
  }
  





  free(funcionarios);
  return 0;
}
