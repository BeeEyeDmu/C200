#include <stdio.h>
#include <stdbool.h>

int main() 
{
    int num1, num2;

    printf("첫 번째 정수를 입력하세요: ");
    scanf_s("%d", &num1);
    printf("두 번째 정수를 입력하세요: ");
    scanf_s("%d", &num2);

    // 관계 연산자를 사용하여 비교
    bool equal = (num1 == num2);
    bool not_equal = (num1 != num2);
    bool lt = (num1 < num2);        // less_than
    bool gt = (num1 > num2);        // greater_than
    bool lte = (num1 <= num2);      // less_than_equal
    bool gte = (num1 >= num2);      // greater_than_equal

    // 결과 출력
    printf("%d == %d: %s\n", num1, num2, equal ? "true" : "false");
    printf("%d != %d: %s\n", num1, num2, not_equal ? "true" : "false");
    printf("%d < %d: %s\n", num1, num2, lt ? "true" : "false");
    printf("%d > %d: %s\n", num1, num2, gt ? "true" : "false");
    printf("%d <= %d: %s\n", num1, num2, lte ? "true" : "false");
    printf("%d >= %d: %s\n", num1, num2, gte ? "true" : "false");

    return 0;
}