#include <stdio.h>
#include <stdbool.h>

int main() 
{
  bool isProgrammingFun = true;
  bool isCodingEasy = false;

  printf("%d\n", isProgrammingFun);
  printf("%d\n", isCodingEasy);
  printf("프로그래밍이 재미있나? %s\n", isProgrammingFun ? "Yes" : "No");
  printf("코딩이 쉬운가? %s\n", isCodingEasy ? "Yes" : "No");

  return 0;
}