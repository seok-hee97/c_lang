#include <stdio.h>
#include <stdlib.h>

#include <ctype.h>

int main(void)
{
    FILE *fp;
    char str[]= "ABCDEF\n";
    char filename[] = "file.txt";

    // fp = fopen(filename, "a");
    fp = fopen(filename, "a");

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