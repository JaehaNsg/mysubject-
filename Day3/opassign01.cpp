#include <stdio.h>

int main(void)
{
    int x = 0, nInput = 0;
    scanf("%d", &nInput);

    //원래 x에 있던 0은 overwrite 되어 삭제
    x = nInput;
    printf("%d\n", x);
    return 0;
}