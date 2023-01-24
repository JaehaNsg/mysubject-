#include <stdio.h>

int main(void)
{
    //char변수 32개가 한 덩어리로 묶인 배열 선언 및 정의
    char szName[32] = { 0 };

    //사용자로부터 문자열을 입력 받는다.
    printf("Please write your name: ");
    //사용자가 입력한 문자들을 문자 배열에 모두 저장한다.
    gets(szName);

    //배열에 저장된 이름 출력
    printf("Your Name is ");
    puts(szName);
    return 0;
}