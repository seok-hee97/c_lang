#include <stdio.h>
#include <string.h>
#include <stdlib.h>

//요구사항1.임의의 패스워드를 전연변수에 선언하되, 글자는 4글자로 구성
//2. 패스워드는 소문자로만 구성
//3. 패스워드 검증은 수동형과 자동형으로 세분화
//4. 수동형의 경우, 유저가 직접 데이터를 입력함. 이때, 4글자 미안 혹은 초과 일 시 프로그램 종료
//5. 자동형의 경우, 임의의 패스워드 1바이트씩 비교


//임의의 패스워드
char password[5] = "hell";


//수동형으로 했을떄
// int main()
// {
//     int mode;
//     scanf('%d',&mode);

//     switch(mode){
//         case 1:                 //수동형
//             char a[5];
//             scanf("%c", &a);

//             if(strcmp(a,password)){
//                 printf("login success");
//             }
//             else{
//                 printf("login again");

//         case 0:

//     }
//     return 0;

//     }

// }

//능동형으로 찾을 떄

int main()
{
    char a[5];
    scanf("%c", &a);

    if(strcmp(a,password))
        printf("login success");

    return 0;
}








