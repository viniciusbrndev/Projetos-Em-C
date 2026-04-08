#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#include <string.h>

typedef struct{
    char nome [20];
    int cpf [11];
    int num_pecas ;
    float salario ;
}Funcionario;
//func
void leitura(Funcionario *vet, int n ) ;
void le_cpf(Funcionario *f ) ;
int ver_cpf(int *cpf) ; 
void calc_salario(Funcionario vet [] , int n ) ;
void tot_folha(Funcionario *vet, int n ) ;
int tot_pecas(Funcionario *vet, int n ) ;
void op_maior_sal(Funcionario *vet, int n ) ;

int main(){
    int n;
    printf("DIGITE O NUM DE funcionarios: ");
    scanf("%d", &n);
    Funcionario *vet = malloc(sizeof(Funcionario) * n);



}
void leitura(Funcionario *vet, int n ){
    char lin[11];
    for(int i = 0; i < n; i++){
        printf("\nDigite o nome do func %d: ", i+1);
        fgets(vet[i].nome, sizeof(char) *20, stdin);
        printf("\nDIGITE O CPF DO func: ");
        fgets(lin, sizeof(lin), stdin);
        for(int c = 0; c < 11; c++){
            vet[i].cpf[c] = lin[c] - '0';
        }
        printf("\nDIGITE A QUANTIDADE DE PEÇAS FÁBRICADA: ");
        scanf("%d", &vet[i].num_pecas);
    }


}