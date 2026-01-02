#include <stdio.h>
#include <string.h>
#define MAX 50

int verificarSuf(char str1[MAX],char str2[MAX]);

int main(){
  char str1[MAX], str2[MAX];
  printf("DIGITE A PALAVRA 1: ");
  fgets(str1, sizeof(str1), stdin);
  str1[strcspn(str1, "\n")] = '\0';
  printf("\nDIGITE A PALAVRA 2: ");
  fgets(str2, sizeof(str2), stdin);
  str2[strcspn(str2, "\n")] = '\0';
  if(verificarSuf(str1, str2))
    printf("\nA palavra 2 é um sufixo de %s", str1);
  else
    printf("\nA palavra 2 não é um sufixo de %s", str1);
  
}
int verificarSuf(char str1[MAX],char str2[MAX]){

    int indice = strlen(str1) - strlen(str2);
    int  j = 0;
    for(int i = indice; str1[i] != '\0'; i++){
      if(str1[i] != str2[j]){
        return 0;
      }
      j++;
      
    }
    return 1;
}





