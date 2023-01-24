/*#include <stdio.h>
//_msize() 를 위한 헤더 포함
#include <malloc.h>
#include <string.h>

int main(void)
{
    char *pszBuffer = NULL, *pszNewBuffer = NULL;

    //12바이트 메모리 동적 할당
    pszBuffer = (char*)malloc(12);
    //NULL 문자를 포함해 영문 11자를 저장.
    sprintf(pszBuffer, "%s", "TestString");
    //동적할 메모리의 주소, 크기, 저장된 문자열 등을 출력한다.
    printf("[%p] %d %s\n",
        pszBuffer, _msize(pszBuffer), pszBuffer);

    //12바이트의 메모리를 32바이트로 확장
    pszNewBuffer = (char*)realloc(pszBuffer, 32);
    if (pszNewBuffer == NULL)
        free(pszBuffer)

    //문자열을 덮어쓰고 주소, 메모리 크기, 저장된 내용 확인
    sprintf(pszNewBuffer, "%s", "TestStringData");
    printf("[%p] %d %s\n",
        pszNewBuffer, _msize(pszNewBuffer), pszNewBuffer);

    free(pszNewBuffer);
    return 0;
}*/