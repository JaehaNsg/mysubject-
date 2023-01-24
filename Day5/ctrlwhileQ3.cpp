#include <stdio.h>

int main(void)
{
    int x = 0, y = 0;
    scanf("%d", &x);

    if (x < 2 || x > 9)
        printf("ERROR\n");

    else
        while(y <= 8)
        {
            ++y;
            printf("%d * %d = %d\n", x, y, x * y);
        }
    return 0;
}