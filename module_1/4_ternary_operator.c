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
     char result[] = (input%2==0)?"Even":"Odd";
     printf("The element is: %s ",result);

}