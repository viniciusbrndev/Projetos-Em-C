#include <stdio.h>

int ehBissexto(int ano);

int validarData(int dia, int mes, int ano);

int main(){
  int dia, mes, ano, teste;
  
  printf("Digite a data no formato DD/MM/AAAA:\n");
  scanf("%d %d %d", &dia, &mes, &ano);
  teste = validarData(dia, mes, ano);
  
  if(teste == 1)
    printf("Sua data é válida!\n");
  else
    printf("Data inválida!\n");
    
return 0;
}



int ehBissexto(int ano){
  if(ano % 4 == 0 && ano % 100 > 0){
    return 1;
  }else{
    return 0;
  }
  }
  
  
  
int validarData(int dia, int mes, int ano){
  int teste = ehBissexto(ano);
  
  if(teste == 1 && mes == 2){
    if(dia <= 29)
      return 1;
    else
      return 0;
  }
  else{
    switch(mes){
      case 1:
        if(dia <= 31){
          return 1;}
        else{
          return 0;}
        break;
      case 2:
        if(dia <= 28){
          return 1;}
        else{
          return 0;}
        break;
      case 3:
        if(dia <= 31){
          return 1;}
        else{
          return 0;}
        break;
      case 4:
        if(dia <= 30){
          return 1;}
        else{
          return 0;}
        break;
      case 5:
        if(dia <= 31){
          return 1;}
        else{
          return 0;}
        break;
      case 6:
        if(dia <= 30){
          return 1;}
        else{
          return 0;}
        break;
      case 7:
        if(dia <= 31){
          return 1;}
        else{
          return 0;}
        break;
      case 8:
        if(dia <= 31){
          return 1;}
        else{
          return 0;}
        break;
      case 9:
        if(dia <= 30){
          return 1;}
        else{
          return 0;}
        break;
      case 10:
        if(dia <= 31){
          return 1;}
        else
          return 0;
        break;
      case 11:
        if(dia <= 30){
          return 1;}
        else{
          return 0;}
        break;
      case 12:
        if(dia <= 31){
          return 1;}
        else{
          return 0;}
        break;
    
    default:
      return 0;
      }
      
  }
  



}
