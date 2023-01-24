#include <stdio.h>

int main(void)
{
    int nInput = 0, bResult = 0;

    scanf("%d", &nInput);
    bResult = 3 < nInput < 20;
    //8행의 코드는 절대 한번에 실행되지 않는다.
    //먼저 3 < nInput 을 실행한 후 그 결과값(0 또는 1)을 20과 대조한다.
    // 즉, (3 < nInput) < 20; 꼴 이므로 항상 참이 나올 수 밖에 없는 논리 오류이다.
    //파훼법은 반드시 A > 3 && A < 20처럼 두번의 관계식을 조합해야한다.
    printf("Result : %d (1 : True, 0 : False)", bResult);
    return 0;
}