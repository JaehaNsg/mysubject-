#include <stdio.h>

int main(void)
{
    int x = 0, y = 0;

    printf("Please input 2 numbers.: ");
    //사용자로부터 두 정수를 입력받아 x와 y에 순서대로 저장한다.
    //%d와 %d 사이에 공백이 없다는 점에 주의한다
    scanf("%d%d", &x, &y);

    printf("x is %d, y is %d.\n", x, y);
    return 0;
}