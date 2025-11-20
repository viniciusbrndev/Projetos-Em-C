#include <stdio.h>
  
  
int main(){
  int hora, min, seg, res;
  printf("Digite a hora, minutos e segundos:\n");
    scanf("%d %d %d\n", &hora, &min, &seg);
    res = (hora * 3600) + (min * 60) + seg;
  printf("\nTotal = %d\n", res);
  
return 0;  
  }
