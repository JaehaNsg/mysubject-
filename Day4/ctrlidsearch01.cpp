#include <stdio.h>

int main(void)
{
    int nInput = 0;     //1번
    //1번 nInput에 저장
    scanf("%d", &nInput);

    if (nInput > 10)
    {
        int nInput = 20;//2번
        //2번 nInput을 출력
        printf("%d\n", nInput);

        if (nInput < 20)
        {
            int nInput = 30;  //3번
            //3번 nInput을 출력
            //가장 최근에 선언된 것이 우선한다.
            printf("%d\n", nInput);
            //3번 nInput 소멸
        }

        //2번 nInput은 소멸
    }

    //1번 nInput 출력
    printf("%d\n", nInput);

    return 0;
}