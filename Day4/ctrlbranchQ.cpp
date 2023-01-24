#include <stdio.h>

int main(void)
{
    int nMax = -2100000000, nInput = 0;

    scanf("%d", &nInput);
    if (nMax < nInput) nMax = nInput;

    scanf("%d", &nInput);
    if (nMax < nInput) nMax = nInput;

    scanf("%d", &nInput);
    if (nMax < nInput) nMax = nInput;

    printf("MAX : %d", nMax);
    return 0;
}