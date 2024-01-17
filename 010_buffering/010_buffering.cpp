#include <stdio.h>

int main() 
{
  char ch1, ch2;

  printf("한 개의 문자를 입력하세요: ");
  ch1 = getchar();
  getchar();    // 추가로 getchar를 호출하여 '\n'을 제거
  printf("한 개의 문자를 입력하세요: ");
  ch2 = getchar();
  printf("입력한 두 문자는 '%c'와 '%c'입니다.\n", ch1, ch2);
  getchar();    // 추가로 getchar를 호출하여 '\n'을 제거

  printf("두 개의 문자를 입력하세요: ");
  ch1 = getchar();
  ch2 = getchar();
  printf("입력한 두 문자는 '%c'와 '%c'입니다.\n", ch1, ch2);

  printf("한 개의 문자를 입력하세요: ");
  scanf_s(" %c", &ch1);  
  printf("한 개의 문자를 입력하세요: ");
  scanf_s(" %c", &ch2);
  printf("입력한 두 문자는 '%c'와 '%c'입니다.\n", ch1, ch2);
  
  printf("두 개의 문자를 입력하세요: ");
  scanf_s(" %c", &ch1);
  scanf_s(" %c", &ch2);
  printf("입력한 두 문자는 '%c'와 '%c'입니다.\n", ch1, ch2);

  return 0;
}
