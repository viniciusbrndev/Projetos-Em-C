#include <stdio.h>

int main(){
  char sexo;
  int idade, anoscont;
  
  printf("Digite o sexo:\n");
  scanf("%c", sexo);
  
  printf("Digite a idade:\n");
  scanf("%d", &idade);
  
  printf("Digite o tempo de contribuição para o INSS:\n");
  scanf("%d", &anoscont);
  
  if(sexo = 'M'){
    if(idade >= 65 && anoscont >= 35){
      printf("Você pode se aposentar com salário integral");
      }else{
        printf("Você não pode se aposentar com salário integral");
        }
    
  }else if(idade >= 60 && anoscont >= 30){
    printf("Você pode se aposentar com salário integral");
  }else{
    printf("Você não pode se aposentar com salário integral");
    }
  
  
  
  return 0;
}
