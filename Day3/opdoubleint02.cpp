#include <stdio.h>

int main(void)
{
    int x = 10;

    //int * int -> %d
    printf("%d\n", x * 10);
    //int * double -> %d(출력불가능), %f를 써야함
    printf("%d\n", x * 10.0);

    //int는 정수 형식이다. 실수 형식이 아니다.
    //따라서 소수점 이하는 절사된다.
    printf("%d\n", x / 10);

    //int / int는 int형식이므로 %f로 출력할 수 없다.
    printf("%d\n", 5 / 2);
    printf("%f\n", 5 / 2);

    //double / int는 double 형식
    printf("%f\n", 5.0 / 2);
    return 0;
}