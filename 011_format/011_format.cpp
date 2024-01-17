#include <stdio.h>

int main() 
{
  int i = 123;

  // 예제 1: 최소 5자리를 차지하는 정수 출력
  printf("%8d\n", i);

  // 예제 2: 최소 8자리를 차지하는 부동소수점 출력
  float f = 3.141592;
  printf("%8f\n", f);

  // 예제 3: 최소 3자리를 차지하는 문자 출력
  char c = 'A';
  printf("%8c\n", c);

  // 예제 4: 최소 15자리를 차지하는 문자열 출력
  const char* s = "Hello!";
  printf("%8s\n", s);

  // 예제 1: 소수점 이하 2자리까지 출력
  printf("%.2f\n", f);

  // 예제 2: 전체 10자리 중 소수점 이하 4자리까지 출력
  printf("%8.4f\n", f);

  return 0;
}