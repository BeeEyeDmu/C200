#include <stdio.h>

int main() 
{
    int num1, num2, max;

    // 사용자로부터 두 수 입력 받기
    printf("첫 번째 정수를 입력하세요: ");
    scanf_s("%d", &num1);
    printf("두 번째 정수를 입력하세요: ");
    scanf_s("%d", &num2);

    // 조건 연산자를 사용하여 큰 수 찾기
    max = (num1 > num2) ? num1 : num2;

    // 결과 출력
    printf("두 수 중에서 큰 수는: %d\n", max);

    return 0;
}