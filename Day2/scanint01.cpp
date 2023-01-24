#include <stdio.h>

int main(void)
{
    int nAge = 0;

    printf("Please fill in the blank with your age. : ");
    //사용자가 입력한 정보를 int 형식으로 해석하고 nAge 변수에 저장한다.
    //그리고 & 기호는 주소 연산자이며
    //&nAge는 nAge변수의 주소라는 의미이다.
    scanf("%d", &nAge);

    printf("You are %dyears old write?\n", nAge);
    return 0;
}