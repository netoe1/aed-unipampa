#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <locale.h>

typedef struct
{
    char nome[30];
    float n1;
    float n2;
    float n3;
    float n4;
} Estudante;

int main(void)
{
    setlocale(LC_ALL, "");

    Estudante e;

    printf("Digite o nome do estudante:");
    scanf("%30[^\n]", e.nome);

    printf("Digite as quatro notas em sequência:");
    scanf("%f %f %f %f", &e.n1, &e.n2, &e.n3, &e.n4);

    float med = (e.n1 + e.n2 + e.n3 + e.n4) / 4;

    printf("A média entre notas é:%.2f!\n", med);

    return 0;
}
