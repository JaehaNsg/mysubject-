#include <stdio.h>

int main(void)
{
    int x = 0;
    printf("Please write the number you want\n");
    scanf("%d", &x);
    
    int h = x / 3600;
    int m = (x - (3600*h))/60;
    int s = x % 60;

    printf("%02d:%02d:%02d\n", h, m, s);
    return 0;
}