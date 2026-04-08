#include <stdio.h>
#include <stdlib.h>
#include <string.h>

typedef struct{
    char nome[27];
    int idade;
    float nota;
}Aluno;


int main(){
    Aluno sala1;
    char linha[100];
    printf("DIGITE AS INFORMAṎES SEPARADAS POR \" ;\" ");
    fgets(linha, sizeof(char) *100, stdin);
    char *token = strtok(linha, ";");
    strcpy(sala1.nome, token);
    token = strtok(NULL, ";");
    sala1.idade = atoi(token);
    token = strtok(NULL, ";");
    sala1.nota = atof(token);



    return 0;
}