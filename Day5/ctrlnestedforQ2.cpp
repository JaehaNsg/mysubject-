#include <stdio.h>

int main(void)
{
    int x = 0, n = 0;

    for (x = 0; x < 5; ++x)
    {
        for (n = 0; n < 4 - x; ++n)
        {
            printf("\t");
        }
        for (n = 0; n < x + 1; ++n)
        {
            printf("*\t");
        }

        putchar('\n');
    }

    return 0;
}