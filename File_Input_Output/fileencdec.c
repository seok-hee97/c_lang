#include <stdio.h>
#include <stdlib.h> // exit()
#include <string.h>

//https://blog.naver.com/PostView.nhn?blogId=sbspace&logNo=221521914332&parentCategoryNo=&categoryNo=16&viewDate=&isShowPopularPosts=true&from=search
// https://m.blog.naver.com/PostView.naver?isHttpsRedirect=true&blogId=skssim&logNo=111987289


void XOR_enc(int key[], char text[]);
void XOR_dec(int key[], char cipher[]);


int main(void) {

  FILE *in;
  int ch;
  int key[5] = {1, 0, 1, 1};
  
  // test.bin 이라는 이진파일을 읽기 전용으로 열기
  //rb  이진 파일을 읽는 읽기 모드
  if ( (in = fopen("exmple.bin", "r")) == NULL ) {

    fputs("파일 열기 에러!", stderr);
    
    exit(1);
  }

  // 이진 파일, 1바이트씩 읽어, 헥사로 출력
  //fgetc() 함수로 1바이트씩 파일 끝까지 계속 읽으라는 뜻
  //fgetc()는 파일에서 1바이트를 읽어서 char 가 아닌 int로 반환
  while ( (ch = fgetc(in)) != EOF ) {

    printf("%02X ", ch);
  }

  XOR_enc(key[], in);


  fclose(in); // 파일 닫기

  return 0;

}


// void XOR_enc(int key[], char text[])
void XOR_enc(int key[], char text[])
{
    char cipher[500] = {'\n'};
    int i , length;
    length =strlen(text);

    for(i=0;i<length;i+=1){
        cipher[i] = text[i]^key[(i%4)];
    }
    printf("암호문: %s\n\n", cipher);
    XOR_dec(key, cipher);
}

// void XOR_dec(int key[], char cipher[])
void XOR_dec(int key[], char cipher[])
{
    char text[500] = {'\n'};
    int i , length;
    length =strlen(cipher);

    for(i=0;i<length;i+=1)
    {
        text[i] = cipher[i]^key[(i%4)];
    }

    printf("복호화 : %s\n",text);
}
