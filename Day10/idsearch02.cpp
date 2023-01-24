#include <stdio.h>

//전역변수 nInput의 선언 및 정의
int nInput = 100;

void TestFunc(void)
{
    //전역번수 출력
    printf("TestFunc( ) : %d\n", nInput);
}

int main(void)
{
    //전역변수와는 다른 nInput 변수 선언 및 정의
    int nInput = 0;
    printf("%d\n", nInput);
    {
        //전역변수와 방금 선언한 변수와 또 다른 nInput 선언 및 정의
        int nInput = 20;
        printf("%d\n", nInput);
    }
    TestFunc();
    return 0;
}