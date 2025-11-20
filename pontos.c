#include <stdio.h>

int main(){
  int pts01, pts02;
    
    printf("Digite as duas pontuações:\n");
    scanf("%d", &pts01);
    scanf("%d", &pts02);
    
    if(pts01 > pts02)
      printf("A pontuação %d é maior e %d a menor.\n", pts01, pts02);
    else
      printf("A pontuação %d é maior e %d a menor.\n", pts02, pts01);
  
  return 0;    
}
