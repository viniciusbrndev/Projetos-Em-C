#include <stdio.h>
#include <math.h>

int main(){
  int i = 0;
  int alunos, soma = 0;
  float nota, media;
  
  //printf("nro \t quad. \t cubo\n");
  /*while(i <= 100){
    printf("%d \t %.0f \t %.0f\n", i, pow(i, 2), pow(i, 3));
    i++;
  }*/
  
  /*for(i = 0; i <= 100; i++){
    printf("%d \t %.0f \t %.0f\n", i, pow(i, 2), pow(i, 3));
    }*/
    printf("digite o número de alunos:");
    scanf("%d", &alunos );
    
    while(i <= alunos ){
      printf("digite a nota do aluno %d", alunos);
      scanf("%f", &nota);
      
      if(nota <= 0 || nota > 10){
        printf("Nota inválida");
      }else{
        soma += nota;
        i++;
      }
      
    }
    
    media = soma / alunos;
    printf("media das notas é: %.2f", media);
return 0;

}
