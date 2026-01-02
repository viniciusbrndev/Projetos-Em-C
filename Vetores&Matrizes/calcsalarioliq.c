#include <stdio.h>
#define TAM_MAX 2
//Cálculo de Salário Líıquido em Lote
int main(){
  int funcionario[TAM_MAX];
  float horasTrab[TAM_MAX], salarioBruto[TAM_MAX], salarioDescIR[TAM_MAX];
  
  for(int i = 0; i < TAM_MAX; i++){
    printf("\nDigite a matrícula do funcionário: ");
    scanf("%6d", &funcionario[i]);
    printf("\nDigite as horas trabalhadas: ");
    scanf("%f", &horasTrab[i]);  
  }
  //Cálculo do salário com base nas horas e desconto INSS
  for(int i = 0; i < TAM_MAX; i++){
    float temp = horasTrab[i] * 30;
    if(temp <= 1518.0)
      salarioBruto[i] = temp * 0.925;
    else if(temp <= 2794.0)
      salarioBruto[i] = temp * 0.91;
    else if(temp <= 4191.0)
      salarioBruto[i] = temp * 0.88;
    else
    salarioBruto[i] = temp * 0.86;
  }
  //Cálculo dos descontos IR
  for(int i = 0; i < TAM_MAX; i++){
    if(salarioBruto[i] < 5000.0)
      salarioDescIR[i] = salarioBruto[i];
    else if(salarioBruto[i] < 7423.0)
      salarioDescIR[i] = salarioBruto[i] * 0.925;
    else if(salarioBruto[i] < 9850.0)
      salarioDescIR[i] = salarioBruto[i] * 0.85;
    else if(salarioBruto[i] < 12250.0)
      salarioDescIR[i] = salarioBruto[i] * 0.775;
    else
      salarioDescIR[i] = salarioBruto[i] * 0.725;
  }
  printf("\nSALÁRIO LIQ. DOS FUNCIONARIOS:\n");
  for(int i = 0; i < TAM_MAX; i++){
  printf("MATRÍCULA: %d = R$%.2f\n", funcionario[i], salarioDescIR[i]);
  }
return 0;
}
