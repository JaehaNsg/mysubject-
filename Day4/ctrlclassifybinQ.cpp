#include <stdio.h>

int main(void)
{
    int nInput = 0, fee = 0;
    scanf("%d", &nInput);

    if (nInput >= 14)
    {
        fee = 750;
        
        if (nInput >= 20)
            fee = 1000;
    }
    else
    {
        fee = 500;

        if (nInput <= 3)
        fee = 0;
    }
    printf("Fee : %d\n", fee);
    return 0;
}