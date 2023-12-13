#include <stdio.h>
#include <stdlib.h>

#include <ctype.h>

//수업 환경에서 제공되는 "example.bin"파일을
// 10바이트 읽어오는 코드를 작성하시오

int main(void)
{
    FILE *fp;
    char filename[] = "example.bin";

    fp = fopen(filename, "rb");

    if (fp == NULL)
    {
        printf("Error");
        return 1;
    }
    char arr[100];
    int len = fputs(str, fp);

    fclose(fp);

    return 0;
}