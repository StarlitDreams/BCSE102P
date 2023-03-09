#include<stdio.h>

/*
5. Write a program to use of bitwise operator (left shift and right shift)
*/

int main()
{
    int num=0;
    printf("Enter a number: ");
    scanf("%d",&num);

    printf("using << we get : %d\n", num<<1);
    printf("using >> we get : %d\n", num>>1);

}