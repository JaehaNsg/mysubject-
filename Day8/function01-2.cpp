#include <stdio.h>

//사용자 정의 함수의 선언 및 정의
//int 형식 자료 둘을 매개변수로 받아 합산결과를 반환한다.
int Add(int a, int b)
{
    //Add() 함수의 지역변수 선언 및 정의
    int nData = 0;
    nData = a + b;

    //합산결과를 호출자 함수에 반환한다.
    return nData;
}

int main(void)
{
    int nResult = 0, i = 0, j = 0;

    printf("Please enter the number you want :");
    scanf("%d%d", &i, &j);
    nResult = Add(i,j);
    printf("Result: %d\n", nResult);
    return 0;
}