#include <stdio.h>

struct Registro
{
    int dia;
    char descricao[201];
    float valor;
};

int main(void)
{
    struct Registro reg;
    
    reg.dia = 20;
    strcpy(reg.descricao, "Livro");
    reg.valor = 50.00;

        return 0;
}