#include <stdio.h>

int main(void)
{
    int nAge = 0;

    printf("Enter your age. : ");
    scanf("%d", &nAge);

    //if문 시작
    if (nAge >= 20)
        printf("You are %d years old.\n", nAge);

    puts("End");
    return 0;
}