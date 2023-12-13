#include <stdio.h>
#include <string.h>
int main()
{
    int *num;
    char *name;
    char name2[10];

    num = 1234;
    name="hello";

    printf("name address's address %p\n",&name);
    printf("name address's address inner value => %s\n",&name);
    printf("name address %p\n",name);
    printf("name address inner value => %s\n",name);

    printf("%p -> %c\n",name, name);
    printf("%p -> %c\n",name, name[0]);
    printf("%p -> %c\n",name, *name);

    printf("\n");

    printf("%p\n",&name+1);
    printf("%p\n",name+1);
    printf("%p\n",name[1]);


    printf("\n");

    printf("%p\n",&name2);
    printf("%p\n",name2);


    printf("%p\n",&name2[1]);
    printf("%p\n",&name2+1);
}




