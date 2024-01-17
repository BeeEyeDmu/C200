#include <stdio.h>

int main()
{
  const char* name = "홍길동";
  int absence = 2;
  int total = 60;

  printf("\"%s\"의 출석점수 계산\n", name);
  printf("========================\n");
  printf("수업시간: %5d 시간\n", total);
  printf("결석시간: %5d 시간\n", absence);
  printf("출석률:   %5.1f %%\n", (float)(total-absence)/total * 100);
  printf("출석점수: %5.1f 점\n", 15* (float)(total - absence) / total);

  return 0;
}