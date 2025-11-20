#include <stdio.h>
#include <math.h>

void converterCelsius(float celsius, float *fahrenheit, float *kelvin);

int main(){
  float cels, fahren, kelvin;
  printf("Digite o valor em Celsius:\n");
  scanf("%f", &cels);
  converterCelsius(cels, &fahren, &kelvin);
  printf("Fahrenheit: %.2f\n", fahren);
  printf("Kelvin: %.2f\n", kelvin);

}

void converterCelsius(float celsius, float *fahrenheit, float *kelvin){
  *fahrenheit = celsius * 1.8 + 32.0;
  *kelvin = celsius + 273.15;

}

