#include <stdio.h>

int main(void)
{
    int nInput = 0;

    char ch = 'A';
    printf("Enter your point.: ");
    scanf("%d", &nInput);

    if (nInput >= 90)
        ch = 'A';

    else if (nInput >=80)
        ch = 'B';

    else if (nInput >= 70)
        ch = 'C';

    else if (nInput >= 60)
        ch = 'D';

    else   
        ch = 'F';

    printf("Your class is '%c'\n", ch);
    return 0;
}