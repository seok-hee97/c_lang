// https://man-25-1.tistory.com/69
#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <string.h>
#include <stdlib.h>


typedef struct log_information
{
    char date[30];
    char time[30];
    char user[10];
    char password[10];
    char suc[10];
}log_info;






int main(void)
{
    log_info log[150];
    FILE* fp = fopen("log.txt", "r");// 파일 읽기모드로 열기

    if (fp == NULL) {
        printf("fail to read file");
        return 0;
    }
    char buffer[1001],*token; 
 
    int i = 0;
    int idx = 0;
    while (!feof(fp)) {
        i = 0;//i초기화
        fgets(buffer, 1001, fp); 
        token = strtok(buffer, " "); // 
        while (token != NULL) {
 
            if (i == 0) {
                strcpy(log[idx].date, token);
            }
            else if (i == 1) {
                strcpy(log[idx].time, token);
            }
            else if (i == 2) {
                strcpy(log[idx].user, token);
            }            
            else if (i == 3) {
                strcpy(log[idx].password, token);
            }
            else if (i == 4) {
                strcpy(log[idx].suc, token);
            }
            i++;
            token = strtok(NULL, " ");
        }
        idx++;
    }
    //읽은 내용이 잘 저장됐는지 출력
    for (int i = 0; i < idx; i++) {
        printf("%s %s %s %s %s\n", log[i].date, log[i].time, log[i].user, log[i].password, log[i].suc);
        // printf("%s %d\n", log[i]);
    }
    fclose(fp); // 파일 닫기

    return 0;
}