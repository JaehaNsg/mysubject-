#include <stdio.h>

int main(void)
{
    int aList[5] = { 10, 20, 30, 40, 50 };
    //요소가 5개인 int형 배열의 선언 및 정의
    int i = 0;

    //전체 요소의 값을 화면에 출력
    for (i = 0; i < 5; ++i)
        printf("%d\t", aList[i]);
    putchar('\n');

    //일부 매열 요소의 값을 변경
    aList[0] = 100;
    aList[3] = 200;

    for (i = 0; i < 5; ++i)
        printf("%d\t", aList[i]);
    putchar('\n');

    return 0;
}