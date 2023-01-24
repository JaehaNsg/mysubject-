#include <stdio.h>

int main(void)
{
    printf("%d\n", 1234);
    printf("%d, %d\n", 1234, -5678);
    //부호를 붙여서 출력.
    //단순히 더하기 기호를 출력하는 것이 아니다.
    printf("%+d, %+d\n", 1234, -5678);

    //정수를 8자리로 맞추고 오른쪽 정렬해 출력.
    printf("%8d\n", 1234);
    //위와 같지만 빈공간을 0으로 채워 출력
    printf("%08d\n", 1234);
    //위와 같지만 숫자를 왼쪽으로 정렬해 출력
    //따라서 공백이나 0이 채워지지 않는다.
    printf("%-08d\n", 1234);
    return 0;
}