#include <stdio.h>
#include <stdlib.h>



int main(void)
{
    FILE *fp;
    char str[]= "Hello KISIA\n";
    char filename[] = "file.txt";

    fp = fopen(filename, "a");

    if (fp == NULL)
    {
        printf("Error");
        return 1;
    }


    fprintf(fp,"%s", str);

    fclose(fp);

    return 0;
}