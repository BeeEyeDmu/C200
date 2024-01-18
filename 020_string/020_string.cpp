//#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main() 
{
    // 문자열을 저장할 배열 선언
    char myString[20];  // 예시로 최대 49글자까지 저장 가능

    // 문자열 입력 받기
    printf("문자열을 입력하세요: ");
    scanf_s("%s", myString, sizeof(myString));
    //scanf("%s", myString);


    // 저장된 문자열 출력
    printf("입력된 문자열: %s\n", myString);

    return 0;
}