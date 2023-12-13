#include <stdio.h>
#include <stdlib.h> // exit()

//https://blog.naver.com/PostView.nhn?blogId=sbspace&logNo=221521914332&parentCategoryNo=&categoryNo=16&viewDate=&isShowPopularPosts=true&from=search


// int main(void) {

//   FILE *in;
//   int ch;
//   char *cha = "ERROR";
//   int cnt = 0;

//   // test.bin 이라는 이진파일을 읽기 전용으로 열기
//   //rb  이진 파일을 읽는 읽기 모드
//   if ( (in = fopen("log.txt", "rt")) == NULL ) {

//     fputs("파일 열기 에러!", stderr);
    

//     exit(1);

//   }

//   while(feof(in) == 0)
//   {
//     // printf("%s", cha);
//     if (char)


//   }

    
//   fclose(in); // 파일 닫기

//   return 0;

// }


#include <Stdio.h>
#include <string.h>

int main(void)
{
	FILE *fp;
	char fname[256]; //입력 받을 파일 이름 
	char buffer[256];
	char word[256] = "ERROR"; //찾을 단어
	int line = 0;
    int cnt = 0;

	// printf("파일 이름을 입력하세요. : ");
	// scanf("%s", &fname); //특정한 파일 입력 받기

	// printf("찾을 단어를 입력하세요. : ");
	// scanf("%s", &word);

	//파일을 못 열었을 때
	if ((fp = fopen("log.txt", "r")) == NULL) //읽기 모드로 해당 파일 열기 
	{
		fprintf(stderr, "파일 %s를 열 수 없습니다.\n", fname); //파일 관련 에러 출력
		return 0;
	}

	//파일을 열었을 때, 해당 파일을 모두 읽을 때까지 실행 
	while (fgets(buffer, 256, fp)) //파일을 읽어서 256 길이만큼 버퍼에 담음
	{
		line++; //한 줄씩 읽음

		if (strstr(buffer, word)) //버퍼가 word에 포함되어 있는지를 대비해 봄
		{
			printf("%d번째 줄 : 단어 %s이(가) 발견되었습니다.\n", line, word);
		
            cnt +=1;
            printf("%d", cnt);
        }
        
	}

	fclose(fp); //파일 닫음 

	return 0;
}

