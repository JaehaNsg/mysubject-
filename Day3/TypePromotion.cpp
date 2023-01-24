#include <stdio.h>

int main(void)
{
    char ch = 'A';

    //char를 %c로 출력
    printf("%c\n", ch);

    //'char + int'는 int 형식이다.
    printf("%c\n", ch + 1);
    printf("%c\n", 'A' + 2);

    //double + int 는 double 형식
    //따라서 %d로 출력 불가
    printf("%d\n", 5.0 + 2);
    printf("%f\n", 5.0 + 2);
    return 0;
}