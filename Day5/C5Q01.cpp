#include <stdio.h>

int main(void)
{
    int nMax = 0, nB = 0;
    scanf("%d", &nB);

        if (nMax < nB)
            nMax = nB;
            scanf("%d", &nB);

        if (nMax < nB)
            nMax = nB;
            scanf("%d", &nB);

        if (nMax < nB)
            nMax = nB;
            scanf("%d", &nB);

        if (nMax < nB)
            nMax = nB;
            scanf("%d", &nB);

        if (nMax < nB)
            nMax = nB;

    if (nMax > 100)
        nMax = 100;

        if (nMax < 0)
            nMax = 0;

    printf("MAX : %d\n", nMax);
    return 0;
}