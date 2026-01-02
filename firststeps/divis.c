#include <stdio.h>

int main(){
  int n = 1, i = 0;
  
  while(i <= n){
    if(n % 15 == 0)
      printf("N: %d\n", n);
      break;
    else
    i++;
    n++;
  }

return 0;
}
