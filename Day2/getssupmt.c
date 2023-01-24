#include <stdio.h>

int main(void)
{
    char szName[32] = {0};

    printf("Please write your name : ");

    //맥이어서 인지 gets_s 함수 인식을 못함
    //gets함수 보완은 이렇게 한다 라고 일단 대충만 알고 넘어가기
    gets_s(szName, sizeof(szName));

    printf("Your name is ");
    puts(szName);
    puts(".");
    return 0;
}