#include <stdio.h>

int main() 
{
  // 변수 선언과 초기화
  int age = 20;
  float height = 178.5;
  char grade = 'A';

  // 변수 사용
  printf("나이: %d\n", age);
  printf("키: %.2f\n", height);
  printf("학점: %c\n", grade);

  // 변수 값 변경
  age = 21;
  printf("변경된 나이: %d\n", age);

  // 상수
  const int myConst = 100;
  printf("상수 값: %d\n", myConst);

  return 0;
}
