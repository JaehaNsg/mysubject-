#include <stdio.h>

int main(void)
{
    int nAge = 0, fee = 1000;
    scanf("%d", &nAge);

    if(nAge >= 20)
        printf("Fee of bus is %dWon\n", fee);

    if(nAge < 20)
    {
        fee = fee - 250;
        printf("Fee of bus is %dWon\n", fee);
        fee = 1000;
    }
    return 0;
}