#include <stdio.h>

int main(void)
{
    int nAge = 0;

    scanf("%d", &nAge);
   
    if(nAge >= 20)
        puts("You are adult.\n");
        
    puts("End");
    return 0;
}