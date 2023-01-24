#include <stdio.h>

#include <string.h>

int main(void)
{
    int Input = 0;

    printf("Enter your Hegiht. :");
    scanf("%d", &Input);
    printf("Result : %s\n", Input >= 150 ? "pass" : "nonpass");
    return 0;
}