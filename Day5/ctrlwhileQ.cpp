#include <stdio.h>

int main(void)
{
    int x = 0;

    while(x <= 4)
    {
        int y = 0;
        while(y <= 4)
        {
            printf("*\t");
            ++y;
        }
        putchar('\n');
        ++x;

    }
    return 0;
}