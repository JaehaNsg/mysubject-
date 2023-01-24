#include <stdio.h>

int main(void)
{
    int nInput = 0;
    printf("Input number.: ");

    //정수 입력
    scanf("%d", &nInput);
    //만약 0을 입력시 10을 0으로 나눠야한다.
    printf("%d\n", 10 / nInput);
    return 0;

}