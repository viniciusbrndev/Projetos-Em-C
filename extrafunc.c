#include <stdio.h>

float calcularNovoSalario(float salario_atual, int codigo_cargo);

int main(){
    float salarioRecebido, novoSalario, diferenca;
    int codigoDoCargo;
    
    printf("Entre com o salário:\n");
    scanf("%f", &salarioRecebido);
    printf("Entre com o código do cargo:\n");
    scanf("%d", &codigoDoCargo);

    novoSalario = calcularNovoSalario(salarioRecebido, codigoDoCargo);
    diferenca = novoSalario - salarioRecebido;
    
    printf("Antigo: R$ %.2f\n", salarioRecebido);
    printf("Novo: R$ %.2f\n", novoSalario);
    printf("Diferença: R$ %.2f\n", diferenca);

return 0;
}


float calcularNovoSalario(float salario_atual, int codigo_cargo){
  float percentual;
  
  switch(codigo_cargo){
    case 100:
      percentual = 1.03;
      break;
    case 101:
      percentual = 1.05;
      break;
    case 102:
      percentual = 1.075;
      break;
    case 201:
      percentual = 1.10;
      break;
  default:
    percentual = 1.15;
  }
return salario_atual * percentual;
}


