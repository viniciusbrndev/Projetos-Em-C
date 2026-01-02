#include <stdio.h> 
#include <string.h>
#define TAM  50

void cripCesar(int n, char str[TAM], char crip[TAM]);
int main(){
  int chave;
  char palavra[TAM], criptografada[TAM];
  printf("INSIRA UMA FRASE: ");
  fgets(palavra, sizeof(palavra), stdin);
  printf("\nINSERT THE KEY (int): ");
  scanf("%d", &chave);
  
  palavra[strcspn(palavra, "\n")] = '\0';
  cripCesar(chave, palavra, criptografada);
  printf("\nFrase criptografada: %s\n", criptografada);




}

void cripCesar(int n, char str[TAM], char crip[TAM]){
  char cript[TAM];
  for(int i = 0;str[i] != '\0'; i++){
    int pos = str[i] - 'a';
    int novaPos = (pos + n) % 26;
    crip[i] = novaPos + 'a';
  }



}
