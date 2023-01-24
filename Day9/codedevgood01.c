#include <stdio.h>

void InitList(int *pList, int nSize)
{
    int i = 0;
    for (i = 0; i < nSize; ++i)
    {
        printf("진짜 존나하기 싫다. :");
        scanf("%d", &pList[i]);
    }
}


void SortList(int *pList, int nSize)
{
    int i = 0, j = 0, nTmp = 0;

    for (i = 0; i < nSize - 1; ++i)
        for (j = i + 1; j < nSize; ++j)
            if (pList[j] < pList[i])
            {
                nTmp = pList[i];
                pList[i] = pList[j];
                pList[j] = nTmp;
            }
}

void PrintList(int *pList, int nSize)
{
    int i = 0;
    for (i = 0; i < nSize; ++i)
        printf("%d\t", pList[i]);
    putchar('\n');
}

int maint(void)
{
    int aList[5] = {0};

    InitList(aList, 5);
    SortList(aList, 5);
    PrintList(aList, 5);
    return 0;
}

/*
Stay in the middle
Like you a little
Don't want no riddle
말해줘 say it back, oh, say it ditto
아침은 너무 멀어 so say it ditto
*/