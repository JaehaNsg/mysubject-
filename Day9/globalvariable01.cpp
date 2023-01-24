#include <stdio.h>

//전역변수의 선언 및 정의
//이 변수는 모든 함수에서 접근 가능
int g_nCounter = 0;

void InitCounter(int nData)
{
    //전역변수 초기화
    g_nCounter = nData;
}

void IncreaseCounter()
{
    g_nCounter++;
}

int main()
{
    InitCounter(10);
    //전역변수 g_nCounter출력
    printf("%d\n", g_nCounter);
    IncreaseCounter();
    printf("%d\n", g_nCounter);
    IncreaseCounter();
    printf("%d\n", g_nCounter);
    
    return 0;
}