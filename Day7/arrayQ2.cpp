#include <stdio.h>

int main(void)
{
    char aList[32] = {0};//정적인 메모리 선언 
    int nCount = 0, i = 0;

    scanf("%s", aList); //&aList[0] &aList[1]
    //가다나라마
    //for(i = 0; i < 210000000; ++i)
    {
        while(aList[i] != '\0') 
        {
            ++nCount;
            ++i;
        }

        
        /*if()
            break;
        */
    }

    printf("한글 문자의 개수는 %d자 입니다.", nCount/3);
    return 0;
}