#include <stdio.h>

int main(void)
{
    char ch = 0;
    while ((ch = getchar( )) != '\n')
    {
        int nIndex = 0;
        printf("%02d\t%d\n", nIndex, ch);
        ++nIndex;
    }

    return 0;
    //참으로 멍청한 코드가 아닐 수 없다.
}