#include <stdio.h>
// #include <string.h>



//strcpy 직접 구현 by use pointer
char* strcpy(char* destination, const char* source)
{
    //목적지에 메모리가 할당되지 않은 경우 반환
    if (destination == NULL)
    {
        return NULL;
    }

    //대상 문자열의 시작을가리키는 포인터 가져오기
    char *ptr = destination;

    //소스가 가리키는 C문자열을 어레이에 복사
    while(source != '\0')
    {
        *destination = *source;
        destination++;
        source++;
    }

    //종료 null 문자를 포함
    *destination = '\0';

    //목적지는 표준 strcpy()에 의해 반환
    return ptr;

}

//strcpy 구현 by array
char* strcpy(char* dest, const char* source);
{
    int i = 0;
    while(source[i] != '\0')
    {
        dest[i] = source[i];
        i++
    }
    
    dest[i]= NULL;
    return dest;
}


int main(void)
{
    char name[20];
    strcpy(name,"abcd");
    printf("%s\n", name);
 
    return 0;
}