#include<stdio.h>
#include<string.h>
/*
Write a program to compare two no by using of ternary operator in c
*/
int main()
{
     int input=0;
     printf("Enter the value you want to test for even or odd: ");
     scanf("%d",&input);
    (input % 2 == 0) ?
    (printf("%d is an even number\n", input)):
    (printf("%d is an odd number\n", input)); 

    return 0;
}