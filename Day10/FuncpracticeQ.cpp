#include <stdio.h>

int aList[4] = { 0 };

void scanf(void)
{
    int i = 0;
    printf("Please enter the four numbers. : ");
    for (i = 0; i < 4; ++i)
        scanf("%d", &aList[i]);
}

int GetMin()
{
    int nMin = 9999, nTmp = 0, i = 0;
    for(i = 0; i < 4; ++i)
    {
        if (nMin > aList[i])
            nMin = aList[i];
    }

    return nMin;
}

void print(void)
{
    printf("%d", )
}

int main(void)
{
    scanf();
    GetMin();
    return 0;
}