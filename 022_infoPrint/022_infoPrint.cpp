#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main() 
{
    char department[50];
    int grade;
    int studentID;
    char name[50];
    char phoneNumber[20];

    // 사용자로부터 입력 받기
    printf("학과를 입력하세요: ");
    scanf("%s", department); // 문자열 입력 받기
    printf("학년을 입력하세요: ");
    scanf("%d", &grade);
    printf("학번을 입력하세요: ");
    scanf("%d", &studentID);
    printf("이름을 입력하세요: ");
    scanf("%s", name); // 문자열 입력 받기
    printf("전화번호를 입력하세요: ");
    scanf("%s", phoneNumber); // 문자열 입력 받기

    // 정보 출력
    printf("=========================\n");
    printf("  입력한 학생의 정보\n");
    printf("=========================\n");
    printf("%10s %s\n", "학과 :", department);
    printf("%10s %d\n", "학년 :", grade);
    printf("%10s %d\n", "학번 :", studentID);
    printf("%10s %s\n", "이름 :", name);
    printf("%10s %s\n", "전화번호 :", phoneNumber);

    return 0;
}