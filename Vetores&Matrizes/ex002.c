#include <stdio.h>


int main(){
  int a = 0, e = 0, i = 0, o = 0, u = 0;
  char palavra[50];
  printf("Digite Uma palavra: ");
  scanf("%s", palavra);
  
  for(int j = 0; palavra[j] != 0; j++){
    if(palavra[j] == 'a' || palavra[j] == 'A')
      a++;
    else if(palavra[j] == 'e' || palavra[j] == 'E')
      e++;
    else if(palavra[j] == 'i' || palavra[j] == 'I')
      i++;
    else if(palavra[j] == 'o' || palavra[j] == 'O')
      o++;
    else if(palavra[j] == 'u' || palavra[j] == 'U')
      u++;
    
  }
  if(a >= e && a >=i && a >= o && a >=u)
    printf("Vogal que mais se repete: a\n");
  else if(e >= i && e >= o && e >= u)
    printf("Vogal que mais se repete: e\n");
  else if(i >= o && i >= u)
    printf("Vogal que mais se repete: i\n");
  else if(o >= u)
    printf("Vogal que mais se repete: o\n");
  else
    printf("Vogal que mais se repete: u\n");
  
  
}

/*int tamStr(char vet[]){
  int i =0;
  while(vet[i]){
    i++;
  }
  return i;*/
