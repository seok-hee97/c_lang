#include <stdio.h>
#include <stdlib.h>






int main(void)
{
    int a = 5;
    int b =7;
    
    printf("a: %d, b: %d\n", a, b);

    int tmp;

    tmp = a;
    a = b;
    b= tmp;

    printf("a: %d, b: %d\n", a, b);
    // printf("%d",b);


    //XOR
    int A = 5;              //00000101
    int B = 23;             //00010111
    printf("A: %d, B: %d\n", A, B);
    A = A ^ B;         //(00000101) XOR (00010111) = 00010010
    B = A ^ B;         //(00010010) XOR (00010111) = 00000101
    A = A ^ B;         //(00000101) XOR (00010010) = 00010111

    printf("A: %d, B: %d\n", A, B);

    return 0;
    
}
