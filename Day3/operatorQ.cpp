#include <stdio.h>

int main(void)
{
    int A = 0;
    int B = 0;
    printf("first\n");
    scanf("%d%d", &A, &B);

    printf("%.2f\n", (A + B)/2.);
    return 0;
}