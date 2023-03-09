#include<stdio.h>
/*
16Write a program to convert decimal to binary
*/
int main()
{
    int num=0;
    int binary=0;
    int i=1;
    printf("Enter the number: ");
    scanf("%d",&num);
    while(num!=0)
    {
        binary=binary+(num%2)*i;
        num=num/2;
        i=i*10;
    }
    printf("The binary is %d",binary);
    
    return 0;
}