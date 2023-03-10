#include<stdio.h>

/*
Write a C program to check whether a number is a palindrome or not.
*/

int main()
{
    int n=0,reverse=0,remainder=0;
    printf("Welcome to the palindrome checker!!\n");
    printf("Please enter the number you want to check: ");
    scanf("%d",&n);
    int temp=n;
    while(temp!=0)
    {
        remainder=temp%10;
        reverse=reverse*10+remainder;
        temp=temp/10;
    };
    if(reverse==n)
    {
        printf("The number is a palindrome");
    }
    else
    {
        printf("The number is not a palindrome");
    };
    
    return 0;
}