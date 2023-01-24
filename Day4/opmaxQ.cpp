#include <stdio.h>

int main(void)
{
    int nMax = 0;
    int a, b, c;

    scanf("%d%d%d", &a, &b, &c);

    int P = a > b ? a : b;
    nMax = P > c ? P : c;

    printf("MAX : %d\n", nMax);
    return 0;
}