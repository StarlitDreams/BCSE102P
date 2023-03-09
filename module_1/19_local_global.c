#include<stdio.h>
/*
19.Write a program to differentiate local and global variable
*/

int num1=10;
int main()
{
    int num2=20;
    printf("The local variable is %d\n",num2);
    printf("The global variable is %d",num1);

    return 0;
}