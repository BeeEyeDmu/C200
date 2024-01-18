#include <stdio.h>

int main() 
{
    int num1, num2;

    // 사용자로부터 두 수 입력 받기
    printf("첫 번째 정수를 입력하세요: ");
    scanf_s("%d", &num1);
    printf("두 번째 정수를 입력하세요: ");
    scanf_s("%d", &num2);

    // AND 연산자를 사용하여 두 조건을 결합
    if (num1 > 0 && num2 > 0) 
        printf("두 수 모두 양수입니다.\n");
    else 
        printf("적어도 하나의 수가 양수가 아닙니다.\n");

    return 0;
}