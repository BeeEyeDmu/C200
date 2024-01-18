#include <stdio.h>
#include <string.h>

int main()
{
    char myChar = 'A';
    char myString[] = "Hello";

    printf("단일 문자: %c\n", myChar);
    printf("문자열: %s\n", myString);

    // 문자열의 길이 계산
    int length = strlen(myString);    
    printf("문자열의 길이: %d\n", length);

    return 0;
}