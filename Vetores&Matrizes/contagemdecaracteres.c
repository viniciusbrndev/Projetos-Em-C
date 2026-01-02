#include <stdio.h>
#define MAX 50


int main(){
  char palavra[MAX];
  int contagem[25], indice;
  printf("DIGITE UMA PALAVRA (APENAS LETRAS MINÚSCULAS): ");
  fgets(palavra, sizeof(palavra), stdin);
  //inicializa o vetor contagem com zeros
  for(int i = 0; i < 25; i++)
    contagem[i] = 0;
  //conta quantos caracteres de cada existem na palavra
  for(int i = 0; palavra[i] != '\0'; i++){
    indice = palavra[i] - 'a'; 
    contagem[indice]++;
  }
  //testa e substitui as letras que se repetem 
  for(int i = 0; i < 25; i++){
    char letra;
    int flag = 0;
    if(contagem[i] > 1){
    letra = i + 'a';  
    flag = 1;
    }
    if(flag)
      for(int j = 0; palavra[j] != '\0'; j++){
        if(palavra[j] == letra)
          palavra[j] = ' ';
      }
      
  
  }
  printf("\n%s\n", palavra);



}


