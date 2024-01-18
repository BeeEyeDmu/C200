#include <stdio.h>

int main() 
{
    int number;

    // 사용자로부터 정수 입력 받기
    printf("정수를 입력하세요: ");
    scanf_s("%d", &number);

    // if 문을 사용하여 양수 또는 음수 판별
    if (number > 0) {
        printf("입력한 수는 양수입니다.\n");
    }
    else if (number < 0) {
        printf("입력한 수는 음수입니다.\n");
    }
    else {
        printf("입력한 수는 0입니다.\n");
    }

    return 0;
}
