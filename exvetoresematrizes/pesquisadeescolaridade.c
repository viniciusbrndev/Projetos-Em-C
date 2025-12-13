#include <stdio.h>
#define MAX 10
void limpar_buffer();

int main(){
  int escolaridade[MAX], contWom = 0, contAnalf = 0,recebemMenos = 0;
  float salario[MAX], soma = 0;
  char sexo[MAX];
  for(int i = 0;i < MAX; i++){
    printf("DIGITE SEU SEXO (M ou F):");
    scanf("%c", &sexo[i]);
    printf("\nDIGITE SEU NÍVEL DE ESCOLARIDADE de 1 a 4: ");
    scanf("%d", &escolaridade[i]);
    limpar_buffer();
    printf("DIGITE SEU SALÁRIO: ");
    scanf("%f", &salario[i]);
  }
  for(int m = 0; m < MAX; m++)
    soma += salario[m];
  for(int i = 0; i < MAX; i++){
    if(sexo[i] == 'F' && escolaridade[i] == 4)
      contWom++;
    if(escolaridade[i] == 1 && salario[i] < 600.00)
      contAnalf++;
    if(salario[i] < soma / MAX)
      recebemMenos++;
  }
  printf("\n%d mulheres tem nível superior", contWom);
  printf("\n%d pessoas com nível 1 de escolaridade recebem menos de R$600", contAnalf);
  printf("\nMédia salarial geral: %.2f, %d recebem menos que a média.\n", soma / MAX, recebemMenos);



return 0;
}

void limpar_buffer() {
    int c;
    // O loop le e descarta caracteres um a um
    // ate que o caractere seja '\n' (ENTER) ou EOF (fim do stream)
    while ((c = getchar()) != '\n' && c != EOF) {
        // Bloco vazio, pois o objetivo e so descartar 'c'
    }
}
