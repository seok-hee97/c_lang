// #define _CRT_SECURE_NO_WARNINGS    // strcpy ���� ���� ���� ������ ���� ����
#include <stdio.h>
#include <string.h>    // strcpy �Լ��� ����� ��� ����
#include <stdlib.h>    // malloc, free �Լ��� ����� ��� ����


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
    strcpy(s1->name, "�弮��");
    s1->score = 95.6;


    printf("���̵�: %s\n", s1->id);       // ȫ�浿
    printf("�̸�: %d\n", s1->name);        // 30
    printf("����: %s\n", s1->score);    // ����� ��걸 �ѳ���

    free(s1);
    s1 = NULL;

    return 0;


}