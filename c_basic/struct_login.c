// #define _CRT_SECURE_NO_WARNINGS    // strcpy 보안 경고로 인한 컴파일 에러 방지
#include <stdio.h>
#include <string.h>    // strcpy 함수가 선언된 헤더 파일
#include <stdlib.h>    // malloc, free 함수가 선언된 헤더 파일


struct Student
{
    int id;
    char name[20];
    double score;
};



int main(void)
{
    struct Student* s1 = malloc(sizeof(struct  Student));

    s1->id = 10;
    strcpy(s1->name, "장석희");
    s1->score = 95.6;


    printf("아이디: %s\n", s1->id);       // 홍길동
    printf("이름: %d\n", s1->name);        // 30
    printf("성적: %s\n", s1->score);    // 서울시 용산구 한남동

    free(s1);
    s1 = NULL;

    return 0;


}