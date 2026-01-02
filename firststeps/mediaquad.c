#include <stdio.h>


int main(){
  int n;
  double soma, num;
  printf("DIGITE O VALOR DE N:\n");
  scanf("%d", &n);
  
  for(int i = 0; i < n; i++){
    printf("DIGITE VALOR DE X%d\n", i);
    scanf("%lf", &num);
    soma += num * num;
  
  }
  double media = sqrt(soma / n)


}
