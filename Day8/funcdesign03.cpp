#include <stdio.h>

//계산된 학점을 입력받는 인터페이스
int GetResult(void)
{
    int nResult = 0;
    printf("성적(0~100)을 입력하세요. : ");
    scanf("%d", &nResult);
    return nResult;
}

//학점계산
char GetGrade(int nScore)
{
    if (nScore >= 90) return 'A';
    else if (nScore >= 80) return 'B';
    else if (nScore >= 70) return 'C';
    else if (nScore >= 60) return 'D';

    return 'F';
}

//전체적 흐름
int main(void)
{
    int nResult = 0;

    nResult = GetResult( );
    printf("당신의 학점은 '%c'(%d)입니다.\n", GetGrade(nResult), nResult);
    return 0;
}