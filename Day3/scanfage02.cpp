#include <stdio.h>

int main(void)
{
    char szName[32] = { 0 };
    int age = 0;

    //scanf_s함수는 윈도우에서만 작동
    printf("Write your age. : ");
    scanf("%d", &age);
    //scanf_s ("%d", &age)

    printf("Write your name. : ");
    //버퍼 안에 남아있는 것들을 모두 비운 후 이름을 입력받는다.
    //따라서 개행문자(\n) 제거
    //gets_s함수 역시 윈도우에서만 지원
    fflush(stdin);
    gets(szName);
    //gets_s(szName, sizeof(szName));

    printf("%d, %s\n", age, szName);
    return 0;
}