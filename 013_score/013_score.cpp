﻿#include <stdio.h>

int main()
{
  printf("%-8s%8s%8s%8s%8s%8s\n", "이름", "국어", "수학", "영어", "합계", "평균");
  printf("================================================\n");
  printf("%-8s%8d%8d%8d%8d%8.1f\n", "홍길동", 100, 90, 80, 100 + 90 + 80, (100 + 90 + 80)/3.0);
  printf("%-8s%8d%8d%8d%8d%8.1f\n", "임꺽정", 90, 100, 85, 90 + 100 + 85, (90 + 100 + 85) / 3.0);
  printf("%-8s%8d%8d%8d%8d%8.1f\n", "성춘향", 80, 90, 90, 80 + 90 + 90, (80 + 90 + 90) / 3.0);
  printf("================================================\n");

  return 0;
}