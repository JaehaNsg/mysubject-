#include <stdio.h>

int main(void)
{
    int narray[5] = {0};
    int i = 0, nMax = narray[0], nMin = 99999;

    for(i = 0; i < 5; ++i)
        scanf("%d", &narray[i]);

    for(i = 0; i < 5; ++i)
    {
        if(narray[i] > nMax)
            nMax = narray[i];

        if(narray[i] < nMin)
            nMin = narray[i];
    }

    printf("MIN = %d, MAX = %d", nMin, nMax);
}