#include <stdio.h>
#include <stdlib.h> // exit()

//https://blog.naver.com/PostView.nhn?blogId=sbspace&logNo=221521914332&parentCategoryNo=&categoryNo=16&viewDate=&isShowPopularPosts=true&from=search


int main(void) {

  FILE *in;
  int ch;

  // test.bin 이라는 이진파일을 읽기 전용으로 열기
  //rb  이진 파일을 읽는 읽기 모드
  if ( (in = fopen("example.bin", "rb")) == NULL ) {

    fputs("파일 열기 에러!", stderr);
    

    exit(1);

  }

    

  // 이진 파일, 1바이트씩 읽어, 헥사로 출력
  //fgetc() 함수로 1바이트씩 파일 끝까지 계속 읽으라는 뜻
  //fgetc()는 파일에서 1바이트를 읽어서 char 가 아닌 int로 반환
  while ( (ch = fgetc(in)) != EOF ) {

    // printf("%02X ", ch);


  }

  printf("%02X ", in);

  fclose(in); // 파일 닫기

  return 0;

}
