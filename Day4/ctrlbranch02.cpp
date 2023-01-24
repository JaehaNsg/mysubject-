#include <stdio.h>

int main(void)
{
    int nAge = 0;

    printf("Enter your age");
    scanf("%d", &nAge);

    if (nAge >= 20);
    {
        printf("Before the process, you're %d years old\n", nAge);
        nAge = 20;
    }

    printf("You're %d years old\n", nAge);
    return 0;
}