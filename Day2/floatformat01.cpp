#include <stdio.h>

int main(void)
{
    double dData = 123.456;
    printf("%f, %f\n", dData, -123.456);

    //소수점 n+1번째 자리에서 반올림하고 n자리까지 출력
    printf("%.1f\n", dData);
    printf("%.2f\n", dData);
    printf("%.3f\n", dData);

    printf("%8d\n", 123);
    //소수점을 포함해 12자리로 출력. 단, 소수점 4번째 자리에서 반올림하고 3자리까지 출력
    printf("%12.3f\n", dData);
    printf("%012.3f\n", dData);
    return 0;
}