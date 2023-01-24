#include <stdio.h>

int main(void)
{
    int nAge = 0;

    long long int name[] = {'0'};

    printf("Please write your age\n");

    scanf("%d", &nAge);

    printf("Please write your name\n");

    scanf("%s", &name);

    printf("Your Name: %s\n", name);
    printf("Your age: %d\n", nAge);
    return 0;

}