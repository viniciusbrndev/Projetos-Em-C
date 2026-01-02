#include <stdio.h>

int main(){
  float x1, x2, res;
  char op;
  
  printf("Digite os dois valores (O segundo valor precisa ser diferente de 0!!!):\n");
  scanf("%f", &x1);
  scanf("%f", &x2);
  printf("Digite uma das operações +, -, * ou /:\n");
  scanf(" %c", &op);
  
  switch(op){
    case '+':
      res = x1 + x2;
      printf("Resultado: %f + %f = %f", x1, x2, res);
      break;
    case '-':
      res = x1 - x2;
      printf("Resultado: %f - %f = %f", x1, x2, res);
      break;
    case '*':
      res = x1 * x2;
      printf("Resultado: %f * %f = %f", x1, x2, res);
      break;
    case '/':
      res = x1 / x2;
      printf("Resultado: %f / %f = %f", x1, x2, res);
      break;
    
    default:
      printf("Você inseriu uma operação inválida ou divisão por 0, inicialize o programa novamente.");
    
  }
  
  return 0;
}

