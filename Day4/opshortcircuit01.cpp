#include <stdio.h>

int main(void)
{
    int nAge = 0, nHeight = 0;

    printf("Write your age. : \n");
    scanf("%d", &nAge);
    printf("Enter your heigt. : \n");
    scanf("%d", &nHeight);

    //모든 논리 연산은 왼쪽에서 오른쪽으로 진행.
    //논리적으로 더 수행할 필요가 없다고 결정되면
    //수행하지 않은 나머지 연산들과 상관없이 최종 결론을 내린다.
    printf("Result : %d (1:합격, 0:불합격)\n",
        nAge >= 20 && nAge <=30 && nHeight >= 150
        );

    return 0;
}