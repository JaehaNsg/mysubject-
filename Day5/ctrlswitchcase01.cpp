#include <stdio.h>

int main(void)
{
    char cooperator = 0;
    int x = 0, y = 0, nResult = 0;

    //사용자로부터 산술식을 입력받는다.
    scanf("%d%c%d", &x, &cooperator, &y);

    //연산자가 무엇인지 선택한다.
    switch (cooperator)
    {
        case '+':
            nResult = x + y;
            break;

        case '-':
            nResult = x - y;
            break;

        case '*':
            nResult = x * y;
            break;

        case '/':
            nResult = x / y;
            break;

        default:
            puts("ERROR : Unknown");
    }

    printf("Result : %d\n", nResult);
    return 0;
}