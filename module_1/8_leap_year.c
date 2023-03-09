#include<stdio.h>

/*
8. Write a program to check whether enter year is leap or not(if …else)
*/

int main()
{
    int year=0;
    printf("Welcome to the leap year calculator!\n");
    printf("Please enter the year you want to calculate: ");
    scanf("%d",&year);

    if((year%4==0) || (year%400==0))
    {
        printf("This is a leap year!");
    }
    else{
        printf("This is not a leap year!");
    }
}