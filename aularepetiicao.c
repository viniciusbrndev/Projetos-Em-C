#include <stdio.h>

int main(){
  double soma, media;
  int i = 1, x = 0, n;
  printf("\nCálculo da Média Harmônica.\n");
  printf("\nQuanto números você quer digitar?\n");
  scanf("%d", &n);
  
  while(i <= n){
    x += 2;
    soma += 1.0/x;
    printf("Número %d: %d\n", n, x);
    i++;
  }
  media = n / soma;
  printf("\nMédia Harmônica: %.2lf\n", media);
}
