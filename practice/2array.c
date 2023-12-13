#include <stdio.h>


int main()
{
    int arr[3][3];

    arr[0][0] =1;
    arr[0][1] =2;
    arr[0][2] =3;
    arr[1][0] =4;
    arr[1][1] =5;
    arr[1][2] =6;
    arr[2][0] =7;
    arr[2][1] =8;
    arr[2][2] =9;

    int col = sizeof(arr[0]) / sizeof(int);    // 4: 2차원 배열의 가로 크기를 구할 때는 
                                                  // 가로 한 줄의 크기를 요소의 크기로 나눠줌

    int row = sizeof(arr) / sizeof(arr[0]); // 3: 2차원 배열의 세로 크기를 구할 때는 
                                    // 배열이 차지하는 전체 공간을 가로 한 줄의 크기로 나눠줌

    for (int i = 0; i < row; i++)    // 2차원 배열의 세로 크기만큼 반복
    {
        for (int j = 0; j < col; j++)    // 2차원 배열의 가로 크기만큼 반복
        {
            printf("%d ", arr[i][j]); // 2차원 배열의 인덱스에 반복문의 변수 i, j를 지정
        }
        printf("\n");                // 가로 요소를 출력한 뒤 다음 줄로 넘어감
    }

    // printf(arr);

    return 0;

}

