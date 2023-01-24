#include <stdio.h>

int main(void)
{
    int nInput = 0, fee = 1000;

    scanf("%d", &nInput);

    if (nInput >= 65)
        fee = fee * 0;

    else if (nInput >= 20)
        fee = fee * 1;

    else if (nInput >= 14)
        fee = fee *(1-0.25);

    else if (nInput >= 4)
        fee = fee *(1-0.5);

    else
        fee = fee * 0;

    printf("fee is %d\n", fee);
    return 0;
}