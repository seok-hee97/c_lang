#include <stdio.h>

int isPrime(int num){
    int i;

    for (i=2; i<num; i++) {
        printf ("%d %% %d = %d\n",num,i,num%i);
        if (num % i == 0)
            break;
    }
 

    if ( i == num )
        printf ("소수 입니다.");
    else 
        printf ("소수가 아닙니다.");
}
 
int main()
{
    int i;
    int num = 997;
 
    // printf ("숫자를 입력하세요 : ");
    // scanf ("%d", &num);

    isPrime(num);
 

    return 0;
 }
