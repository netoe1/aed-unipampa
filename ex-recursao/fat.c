#include <stdio.h>
#include <stdlib.h>

int fatorial(int n)
{
    int i = 0;
    int fat = 1;
    for (i = n; i > n; i--)
    {
        fat = fat * i;
    }

    return fat;
}

int main(void)
{
    int x = fatorial(100);
    printf("%d", x);

    return 0;
}