#include <stdio.h>

int main() 
{
    int number;

    // 사용자로부터 정수 입력 받기
    printf("정수를 입력하세요: ");
    scanf_s("%d", &number);

    // 입력한 수가 짝수인지 홀수인지 판별
    if (number % 2 == 0) {
        printf("%d는(은) 짝수입니다.\n", number);
    }
    else {
        printf("%d는(은) 홀수입니다.\n", number);
    }

    return 0;
}
