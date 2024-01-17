#include <stdio.h>
#include <stdbool.h>

int main() 
{
  int i;
  float f;
  double d;
  char c;
  bool b;

  printf("int 자료형의 크기: %lu 바이트\n", sizeof(int));
  printf("float 자료형의 크기: %lu 바이트\n", sizeof(float));
  printf("double 자료형의 크기: %lu 바이트\n", sizeof(double));
  printf("char 자료형의 크기: %lu 바이트\n", sizeof(char));
  printf("bool 자료형의 크기: %lu 바이트\n", sizeof(bool));

  printf("변수 i의 크기: %lu 바이트\n", sizeof(i));
  printf("변수 f의 크기: %lu 바이트\n", sizeof(f));
  printf("변수 d의 크기: %lu 바이트\n", sizeof(d));
  printf("변수 c의 크기: %lu 바이트\n", sizeof(c));
  printf("변수 b의 크기: %lu 바이트\n", sizeof(b));

  return 0;
}