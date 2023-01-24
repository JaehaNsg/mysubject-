#include <stdio.h>

int main(void)
{
    int x = 0;
    scanf("%d", &x);

    //int / int는 int 이므로 소수점 이하는 절사
    printf("몫 : %d\n", x / 3);
    //몫은 버리고 나머지만 출력
    printf("나머지 : %d\n", x % 3);
    return 0;
}