#include <stdio.h>
#define MAX 100

typedef struct{
  char nome[50];
  float altura;
  int ano;
} Pessoa;

//FUNÇÕES  
void limparBuffer();
void lePessoa(Pessoa vet[100], int quantidade);
void listarNomes(Pessoa vet[MAX], int C);
void listarNomespAnos(Pessoa vet[MAX], int q, int f);

int main(){
  int flag;
    int a = 0;
    
  Pessoa pessoas[MAX];
  do{
  printf("Digite uma opção:\n");
  printf("1: Inserir uma nova pessoa.\n2: Listar todos os nomes e respectivas alturas.\n3: Listar o nomes das pessoas que nasceram a partir do ano fornecido.\n0: Encerrar programa.\n");
  scanf("%d", &flag);
  limparBuffer();
  
  if(flag == 0)
    return 0;
  else if(flag == 1){
    lePessoa(pessoas, a);
    a++;
  }
  else if(flag == 2){
    listarNomes(pessoas, a);
  }
  else if(flag == 3){
    int f;
    printf("\nDigite um ano para filtrar: ");
    scanf("%d", &f);
    listarNomespAnos(pessoas, a, f);
  }
  
  }while(flag > 0 && flag <= 3);

return 0;
}
void limparBuffer(){
  int c;
  while((c = getchar()) != '\n' && c != EOF);
}

void lePessoa(Pessoa vet[MAX], int i){

    printf("\nDigite o nome do %d pessoa: ", i+1);
    fgets(vet[i].nome, sizeof(vet->nome), stdin);
    
    printf("\nDigite a altura da pessoa: ");
    scanf("%f", &vet[i].altura);  
  
    printf("\nDigite o ano de nasc: ");
    scanf("%d", &vet[i].ano);
}

void listarNomes(Pessoa vet[MAX], int C){
  for(int i = 0; i < C; i++){
    printf("\nNome: %s\nAltura: %.2f\n", vet[i].nome, vet[i].altura);
  }
}

void listarNomespAnos(Pessoa vet[MAX], int q, int f){
  for(int i = 0; i < q; i++){
    if(vet[i].ano >= f){
      printf("\n%s", vet[i].nome);
    }
  }
} 
