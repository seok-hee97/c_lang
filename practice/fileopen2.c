#include <stdio.h>
#include <stdlib.h>

#include <ctype.h>

int main(void)
{
    FILE *fp;
    char str[]= "Hello KISIA\n";
    char filename[] = "file.txt";

    // fp = fopen(filename, "a");
    fp = fopen(filename, "r");

    if (fp == NULL)
    {
        printf("Error");
        return 1;
    }
    char arr[100];
    char* pChar = fgets(arr, sizeof(arr), fp);
    // fprintf(fp,"%s", str);
    printf("%s\n",pChar);
    
    int i;
    for(i=0;pChar[i]; i++)
    {
        if((pChar[i]>='a')&&(pChar[i]<='z'))//if(islower(str[i]))
        {
            pChar[i] = pChar[i]-'a'+'A';
        }
        else
        {
            if((pChar[i]>='A')&&(pChar[i]<='Z'))//if(isupper(str[i]))
            {
                pChar[i] = pChar[i]-'A'+'a';
            }
        }
    }
    
    printf("%s\n",pChar);
    // printf("%s\n",arr);

    fclose(fp);

    return 0;
}