#include <stdio.h>

int main(void)
{
    int i = 0;

    //for문은 i 가 9가 될때까지 반복
    for (i = 0; i < 10; ++i)
    {
        //i 값이 5가 되면 break문이 실행되고 for문을 벗어난다.
        if (i > 4)
            break;

        printf("%d\n", i);
    }

    //break문이 적용된 순간의 계수기 값을 출력한다.
    printf("END: i == %d\n", i);
    return 0;
}