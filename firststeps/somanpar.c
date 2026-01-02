#include <stdio.h>

int main(){
  int i = 1,soma = 0;
  
  /*while(i <= 50){
    if(i % 2 == 0){
      soma += i;
    }
    i++;
  }
  
  printf("Soma dos termos: %d\n", soma);
*/
  do{
    printf("digite um valor inteiro <= 0\n");
    scanf("%d", &i);
    
  }while(i <= 0);
}
