#include <stdio.h>
#define MES 12
#define SEM 4

int main(){
  int lucros[MES][SEM], lucroAnual = 0, lucroMensal = 0, lucroSemanal = 0;
  for(int i = 0; i < MES; i++){
    printf("Digite os lucros das semanas do %d mês: ", i+1);
    for(int j = 0; j < SEM; j++){
      scanf("%d", &lucros[i][j]);
      
      }
    }
  printf("\nLucros MENSAIS:\n");
  for(int i = 0; i < MES; i++){
    for(int j = 0; j < SEM; j++)
      lucroMensal += lucros[i][j];
    lucroAnual += lucroMensal;
    printf("%d: R$%d\n", i+1, lucroMensal);
  }
  printf("\nLucros SEMANAIS:\n");
  for(int j = 0; j < SEM; j++){
    for(int i = 0; i < MES; i++)
      lucroSemanal += lucros[i][j];
    printf("%d: R$%d\n", j+1, lucroSemanal);
  }
  printf("\nLucros ANUAIS:\n");
  printf("R$%d\n", lucroAnual);




return 0;
}
