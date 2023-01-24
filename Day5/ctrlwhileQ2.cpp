#include <stdio.h>

int main(void)
{
    int n = 0, x = 0;

    while(n <= 10)
    {
        x = x + n;
        n++;
    }

    printf("Total : %d\n", x);
    return 0;
}