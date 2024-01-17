#include <stdio.h>

int main() {
  int intVar = 10;
  float floatVar = 5.95;
  char charVar = 'B';
  char stringVar[] = "Hello, World!";

  // 정수 출력 (%d)
  printf("정수: %d\n", intVar);

  // 부동 소수점 출력 (%f)
  printf("부동 소수점: %.2f\n", floatVar);

  // 문자 출력 (%c)
  printf("문자: %c\n", charVar);

  // 문자열 출력 (%s)
  printf("문자열: %s\n", stringVar);

  // 여러 형식자를 함께 사용
  printf("여러 형식: 정수(%d), 부동 소수점(%.2f), 문자(%c), 문자열(%s)\n", intVar, floatVar, charVar, stringVar);

  return 0;
}