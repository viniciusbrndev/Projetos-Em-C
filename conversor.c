#include <stdio.h>
  int main(){
    float tc, tf, tk;
    printf("BEM VINDO AO CONVERSOR DE TEMPERATURAS!!\n");
    printf("Entre com o valor em graus Celsius:\n");
    scanf("%f", &tc);
    tf = 1.8 * tc + 32;
    tk = tc + 273.15;
    printf("Celsius: c = %.2f\n", tc);
    printf("Fahrenheit: f = %.2f\n", tf);
    printf("Kelvin: k = %.2f\n", tk);
  return 0;
  }
