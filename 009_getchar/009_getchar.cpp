#include <stdio.h>

int main()
{
  char input;

  printf("한 문자를 입력하세요: ");
  input = getchar();

  printf("입력한 문자는 '%c'이고 ASCII 코드는 %d입니다.\n", input, input);

  return 0;
}