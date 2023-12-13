//#define _CRT_SECURE_NO_WARNINGS    // scanf 보안 경고로 인한 컴파일 에러 방지
#include <stdio.h>
#include <stdlib.h>


//요구사항
//1.유저 아이디와 유저 패스워드를 저장하는 구조체를 생성할 것.
//2.아이디,패스워드 길이는 5자이상 20자 미만으로 설정할 것.
//3.최대 유저 수는 20명으로 할 것
//4.20명이 채워 졌을 때 더이상 유저 등록을 할 수 없다는 경고메시지를 출력하고, 다시 선택사항으로 돌아갈껏
//5. 총 4가지(현재 유저 열람, 유저 생성, 로그인, 프로그램 종료) 옵션 사용할것
//6.로그인 시, 등록 유저가 0이라면 "The database is empty"를 출려갛고 다시 선택상항으로 돌아갈 것
//7.가입 시 이미 존재한느 유저일 경우,"The user is already activated"를 출력하고 다시 선택사항으로 돌아갈 것

//로그인 구조체 선언
typedef struct _id_password
{
    char id[20];
    int pw[20];
}id_password;



int main(void)
{
    //구조체 선언
    id_password idpw[20]; //배열로 여러개의 구조체를 선언해서 사용

    int mode;
    int flag = 0;
    int cnt=0;          //정수형선언시 값 안정해주면 기본값 = 0
    while (flag == 1)
    {
        printf("현재 유저 열람 : 1, 유저 생성 : 2, 로그인 : 3, 프로그램 종료 : 4");
        scanf("%d", &mode);


        switch (mode)
        {
            case 1:         //현재 유저 열람
                
                for(int i=0;i<20;i++)
                {
                    printf("%s",idpw[i].id);

                }
                //printf(idpw);       //현재 유저 출력
                // break;
            case 2:         //유저 생성(가입)
                if (cnt >= 20) {
                    printf("더 이상 유저등록을 할 수 없습니다");
                }
                else
                {
                    //char input_id;
                    //int  input_pw;
                    //scanf("%c", &input_id);
                    //scanf("%d", &input_pw);
                    //idpw[i].id = input_id;
                    //idpw[i].pw = input_pw;
                    printf("아이디를 입력하세요");
                    scanf("%s", &idpw[cnt].id);
                    printf("비번을 입력하세요");
                    scanf("%d", &idpw[cnt].pw);

                    cnt += 1;
                }


            case 3:         //로그인
                char input_id;
                int  input_pw;
                scanf("%s", &input_id);
                scanf("%d", &input_pw);



            case 4:         //프로그램 종료
                flag = 1;
                return 0;

            default:
                break;

        }

    }

}