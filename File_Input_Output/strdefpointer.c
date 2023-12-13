#include<ctype.h>
#include<stdio.h>
#include <string.h>

int isSmallcnt(char str[])
{
    int small;
    //소문자만 출력
    for (int i = 0; i < strlen(str); ++i)
    {
        if (islower(str[i]))
        {
            small +=1;
        }
    }

    return small;
}

int isUpCnt(char str[])
{
    int big;
    //대문자만 출력
    for (int i = 0; i < strlen(str); ++i)
    {
        if (isupper(str[i]))
        {
            big +=1;
        }
    }

    return big;
}




int main(void)
{
    char word[] = "ThisisBlockDMaskblog";
    int result;
    printf("%s\n", word);

    int (*operation)(char);  //함수 포인터 선언
    operation = isSmallcnt;

    result = operation(word);
    // printf(result); 
    printf("small : %d",result);


    operation = isUpCnt;

    result = operation(word);
    // printf(result); 
    printf("big : %d",result);
    return 0;
}