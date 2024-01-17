#include <stdio.h>

int main() 
{
  int num1, num2;

  // 사용자로부터 두 정수 입력 받기
  printf("두 정수를 입력하세요: ");
  scanf_s("%d %d", &num1, &num2);

  // 입력 받은 두 정수를 더하여 출력
  int sum = num1 + num2;
  printf("%d + %d = %d\n", num1, num2, sum);

  return 0;
}
