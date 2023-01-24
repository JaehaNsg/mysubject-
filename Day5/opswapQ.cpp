#include <stdio.h>

int main(void)
{
    int nInput = 0;
    scanf("%d", &nInput);

    if (nInput > 9)
        nInput = 9;

    if (nInput < 1)
        nInput = 1;

    while (nInput > 0)
    {
        printf("*");
        nInput--;
    }
    return 0;
}