 #include <stdio.h>
 
//formatação de números
/*
int main(){
  int numeros, d1, d2, d3, d4, d5;
  printf("insira um número inteiro de 5 digítos:\n");
  scanf("%d", &numeros);
  
  d1 = numeros/10000;
  d2 = numeros/1000 %10;
  d3 = numeros/100 %10;
  d4 = numeros/10 %10;
  d5 = numeros %10;
  
  printf("%d  %d  %d  %d  %d\n", d1, d2, d3, d4, d5);
return 0;
}*/


// exercício de cálculo da reta
/*#include <stdio.h>
#include <math.h>

int main(){
  float x1, y1, x2, y2;
  printf("BEM VINDO!\n");
  printf("Insira as coordenadas do ponto P1:\n");
  scanf("%f %f", &x1, &x2);
  printf("Insira as coordenadas do ponto P2:\n");
  scanf("%f %f", &x2, &y2);
  printf("Calculando reta...\n");
  
  float res = sqrt( pow((x2 - x1), 2 ) + pow((y2 - y1 ), 2 ) );
  printf("Resultado: %.2f\n", res);
  
return 0;
}*/

// Verificador de divisão
/*
int main(){
  int a, b;
  printf("insira dois numeros inteiros:\n");
  scanf("%d %d", &a, &b);
  if(a % b == 0)
    printf("%d É divisível por %d!\n", a, b);
  else{
    printf("%d Não é divisível por %d!\n", a, b);
  }


}*/

int main(){
  int dia, mes, ano;
  printf("Digite a data no formato Dia Mês Ano:\n");
  scanf("%d %d %d", &dia, &mes, &ano);
   
   if(dia <= 31 && mes <= 12){
     switch(mes){
      case 1:
        printf("\n%d de Janeiro de %d\n", dia, ano);
        break;
      case 2:
        printf("\n%d de Fevereiro de %d\n", dia, ano);
        break;
      case 3:
        printf("\n%d de Março de %d\n", dia, ano);
        break;
      case 4:
        printf("\n%d de Abril de %d\n", dia, ano);
        break;
      case 5:
        printf("\n%d de Maio de %d\n", dia, ano);
        break;
      case 6:
        printf("\n%d de Junho de %d\n", dia, ano);
        break;
      case 7:
        printf("\n%d de Julho de %d\n", dia, ano);
        break;
      case 8:
        printf("\n%d de Agosto de %d\n", dia, ano);
        break;
      case 9:
        printf("\n%d de Setembro de %d\n", dia, ano);
        break;
      case 10:
        printf("\n%d de Outubro de %d\n", dia, ano);
        break;
      case 11:
        printf("\n%d de Novembro de %d\n", dia, ano);
        break;
      case 12:
        printf("\n%d de Dezembro de %d\n", dia, ano);
        break;
     
     
     
     
     }
  }else{
    printf("\nData inválida\n");
    }
    

}
