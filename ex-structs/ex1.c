/*
    Monte uma Estrutura (Registro) que armazene a matrícula,
o nome e o endereço dos estudantes declarando 2
variáveis dessa estrutura. Após colete os dados do teclado
para uma das variáveis e copie para a outra, mostrando na
tela a segunda.
*/

#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <locale.h>

typedef struct
{
    int matricula;
    char nome[100];
    char endereco[100];
} Registro;

int main(void)
{
    setlocale(LC_ALL, "");
    Registro reg1;
    Registro reg2;

    printf("\nDigite a sua matrícula:\n");
    scanf("%d", &reg1.matricula);

    printf("\nDigite o seu nome:\n");
    scanf(" %99[^\n]", reg1.nome);

    printf("\nDigite o endereço:\n");
    scanf(" %99[^\n]", reg1.endereco);

    printf("\nMatrícula:%d\nNome:%s\nEndereço:%s\n", reg1.matricula, reg1.nome, reg1.endereco);

    return 0;
}