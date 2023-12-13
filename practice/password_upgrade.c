#include <stdio.h>
#include <string.h>
#include <stdlib.h>

// 요구사항 1. 패스워드는 반드시 대,소문자,특수문자가 포함되어야 함
// 요구사항 2. 패스워드는 5글자 초과 20글자 미만이어야 함.
// Hint. 플래그 기법 이용할 수 있다.
// 플래그 기법이란, 참/거짓 (Bool)을 체크할 수 있는 변수를 사용하는 것


//임의의 패스워드
char password[5] = "hell";


//수동형으로 했을떄
int main()
{
    int mode;
    scanf('%d',&mode);

    switch(mode){
        case 1:                 //수동형
            char a[5];
            scanf("%c", &a);

            if(strcmp(a,password)){
                printf("login success");
            }
            else{
                printf("login again");

        case 0:

    }
    return 0;

    }

}

//능동형으로 찾을 떄

// int main()
// {
//     char a[5];
//     scanf("%c", &a);

//     if(strcmp(a,password))
//         printf("login success");

//     return 0;
// }








