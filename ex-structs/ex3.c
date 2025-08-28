#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <locale.h>

#define TAM 3

typedef struct
{
    char nome[30];
    float n1;
    float n2;
    float n3;
    float n4;
    float media;
} Estudante;

int main(void)
{
    setlocale(LC_ALL, "");

    Estudante tabela[TAM];

    int i = 0;
    for (i = 0; i < TAM; i++)
    {
        puts("Digite o nome do estudante:");
        scanf(" %30[^\n]", tabela[i].nome);

        puts("Digite as 4 notas consecutivamente:");
        scanf("%f %f %f %f", &tabela[i].n1, &tabela[i].n2, &tabela[i].n3, &tabela[i].n4);
        tabela[i].media = (tabela[i].n1 + tabela[i].n2 + tabela[i].n3 + tabela[i].n4) / 4;
    }
    printf("\n");
    printf("Aluno\t\tNota1\t\tNota2\t\tNota3\t\tNota4\t\tMédia\n");
    for (i = 0; i < TAM; i++)
    {

        printf("%s\t\t%.2f\t\t%.2f\t\t%.2f\t\t%.2f\t\t%.2f\n", tabela[i].nome, tabela[i].n1, tabela[i].n2, tabela[i].n3, tabela[i].n4, tabela[i].media);
    }
    

    return 0;
}
