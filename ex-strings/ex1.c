/*Faça um programa que receba o nome completo e salário de um funcionário, calcule e mostre o
nome e novo salário, sabendo-se que este sofreu um aumento de 25%. */

#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <locale.h>

int main(void)
{
    setlocale(LC_ALL, "");
    char nome[20];
    float salario;
    printf("\nDigite o seu nome:");
    scanf(" %19[^\n]", nome);

    printf("\nDigite o seu salário:");
    scanf("%f", &salario);

    salario = salario * 1.25;

    printf("\nNome digitado:%s\nSalario reajustado:R$%.2f", nome, salario);
    return 0;
}