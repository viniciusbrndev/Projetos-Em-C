#include <stdio.h>
#include <string.h>
#define MAX 25

int verificarSubstring(char str1[2*MAX], char str2[MAX]);
void limparBuffer();

int main() {
    char strS1[2*MAX], strS2[MAX];
    int menu;

    printf("DIGITE O CONTEÚDO DE S1: ");
    fgets(strS1, sizeof(strS1), stdin);
    strS1[strcspn(strS1, "\n")] = '\0';
    const int tam = strlen(strS1);

    printf("!!ESCOLHA UMA OPÇÃO.!!");
    printf("\n1. Imprimir o tamanho da string S1.");
    printf("\n2. Comparar S1 com uma nova string S2 fornecida.");
    printf("\n3. Concatenar S1 com uma nova string S2.");
    printf("\n4. Imprimir S1 de forma reversa.");
    printf("\n5. Contar quantas vezes um dado caractere aparece em S1.");
    printf("\n6. Substituir a primeira ocorrência de um caractere C1 da string S1 pelo caractere C2.");
    printf("\n7. Verificar se uma string S2 é substring de S1.");
    printf("\n8. Retornar uma substring de S1 (dadas a posição inicial e o tamanho).\n");

    scanf("%d", &menu);
    limparBuffer();

    if (menu == 1) {
        printf("Tamanho de S1: %ld\n", strlen(strS1));
    }
    else if (menu == 2) {
        printf("\nDIGITE A STRING S2: ");
        fgets(strS2, sizeof(strS2), stdin);
        strS2[strcspn(strS2, "\n")] = '\0';

        if (strcmp(strS1, strS2) != 0)
            printf("As strings comparadas são diferentes!\n");
        else
            printf("As strings S1 e S2 são iguais\n");
    }
    else if (menu == 3) {
        printf("\nDIGITE A STRING S2: ");
        fgets(strS2, sizeof(strS2), stdin);
        strS2[strcspn(strS2, "\n")] = '\0';

        strcat(strS1, strS2);
        printf("Resultado da concatenação: %s\n", strS1);
    }
    else if (menu == 4) {
        printf("S1 reversa: ");
        for (int i = tam - 1; i >= 0; i--)
            printf("%c", strS1[i]);
        printf("\n");
    }
    else if (menu == 5) {
        int cont = 0;
        char letra;
        printf("\nDigite uma letra a ser buscada: ");
        scanf("%c", &letra);
        limparBuffer();

        for (int i = 0; strS1[i] != '\0'; i++)
            if (strS1[i] == letra)
                cont++;

        printf("\n%c aparece %d vezes na palavra %s!\n", letra, cont, strS1);
    }
    else if (menu == 6) {
        char C1, C2;
        printf("\nInsira o caractere que deve ser substituído: ");
        scanf("%c", &C1);
        limparBuffer();
        printf("Insira o novo caractere: ");
        scanf("%c", &C2);
        limparBuffer();

        for (int i = 0; strS1[i] != '\0'; i++) {
            if (strS1[i] == C1) {
                strS1[i] = C2; // substitui só a primeira ocorrência
                break;
            }
        }
        printf("\nResultado: %s\n", strS1);
    }
    else if (menu == 7) {
        printf("\nDIGITE A STRING S2: ");
        fgets(strS2, sizeof(strS2), stdin);
        strS2[strcspn(strS2, "\n")] = '\0';

        if (verificarSubstring(strS1, strS2))
            printf("\nA string S2 é substring de %s\n", strS1);
        else
            printf("\nA string S2 não é substring de %s\n", strS1);
    }
    else if (menu == 8) {
        int sub, indice;
        printf("DIGITE O TAMANHO DA SUBSTRING: ");
        scanf("%d", &sub);
        limparBuffer();

        indice = tam - sub;
        char subStr[MAX];
        strncpy(subStr, &strS1[indice], sub);
        subStr[sub] = '\0';

        printf("Substring de S1: %s\n", subStr);
    }

    return 0;
}

int verificarSubstring(char str1[2*MAX], char str2[MAX]) {
    // strstr retorna ponteiro para a primeira ocorrência de str2 em str1
    // ou NULL se não encontrar
    if (strstr(str1, str2) != NULL)
        return 1;
    else
        return 0;
}

void limparBuffer() {
    int c;
    while ((c = getchar()) != '\n' && c != EOF) { }
}

