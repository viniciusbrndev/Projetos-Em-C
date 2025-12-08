#include <stdio.h>

int tamStr(char vet[]);

int main(){
  char palavra[50];
  printf("Digite Uma palavra: ");
  scanf("%s", &palavra);
  int tamStr = tamStr(palavra);

  for(int i = 0; i < 50; i++){
    printf("%s\n", palavra[i]);
 }
  printf("%d", tamStr);

}

int tamStr(char vet[]){
  int i =0;
  while(vet[i]){
    i++;
  }
  return i;
}
