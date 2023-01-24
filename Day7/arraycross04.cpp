#include <stdio.h>

int main(void)
{
    int aList[5][5] = { 0 };
    //nFlag 변수는 반복문 내에서 매번 참/거짓으로 바뀐다.
    int i = 0, j = 0, nCounter = 0, nFlag = 1;

    for (i = 0; i < 5; ++i)
    {
        //토글을 위한 플래그 변수
        if(nFlag)
        {
            //정방향
            for (j = 0; j < 5; ++j)
                aList[i][j] = ++nCounter;
            
            //다음 반복에서 거짓이 되도록 한다.
            nFlag = 0;
        }

        else
        {
            //역방향
            for (j = 0; j < 5; ++j)
                aList[i][4 - j] = ++nCounter;
            
            //다음 반복에서 참이 되도록 한다.
            nFlag = 1;
        }
    }

    //출력
    for (i = 0; i < 5; ++i)
    {
        for (j = 0; j < 5; ++j)
            printf("%d\t", aList[i][j]);

        putchar('\n');
    }
    return 0;
}