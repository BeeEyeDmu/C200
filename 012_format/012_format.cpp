#include <stdio.h>

int main() 
{
  printf("%-8s%4s\n", "과목", "점수");
  printf("=============\n");
  printf("%-8s%4d\n", "국어", 100);
  printf("%-8s%4d\n", "수학", 90);
  printf("%-8s%4d\n", "영어", 80);
  printf("=============\n");

  return 0;
}
