#include <stdio.h>

int main(void)
{
    int aList[5] = {30, 40, 10, 50, 20};
    int i = 0, j = 0, nMinIndex = 0, nTmp = 0;

    for(i = 0; i < 4; ++i)
    {
        nMinIndex = aList[i];
        for(j = i+1; j < 4; ++j)
        {
            if(nMinIndex > aList[j])
            {
                nMinIndex = aList[j];
            }

        }
        nTmp = aList[i];
        aList[i] = nMinIndex;
        aList[j] = nTmp;
    }

    for(i = 0; i < 5; ++i)
        printf("%d\t", aList[i]);
    putchar('\n');
    return 0;
}