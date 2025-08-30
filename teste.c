#include <stdio.h>

int main(void)
{

    for (int i = 0; i < 100000; i++)
    {
        for (int x = 0; x < 1000000; x++)
            ;
        for (int r = 0; r < 100000; r++)
            ;
    }

    return 0;
}