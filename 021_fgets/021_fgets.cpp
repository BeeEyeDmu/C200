#include <stdio.h>

int main() 
{
    char myString[80];

    // 문자열 입력 받기
    printf("문자열을 입력하세요: ");
    fgets(myString, sizeof(myString), stdin);

    // 저장된 문자열 출력
    printf("입력된 문자열: %s", myString);

    return 0;
}