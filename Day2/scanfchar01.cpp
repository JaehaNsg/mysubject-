#include <stdio.h>

int main(void)
{
    int ch = 0;
    scanf("%c", &ch);
    //scanf_s 함수는 맥에서 지원하지 않는 듯 함.
    printf("Input spells you done is %c.\n", ch);
    return 0;
}