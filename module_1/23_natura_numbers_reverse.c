#include<stdio.h>
/*
Write a C program to print all natural numbers in reverse ( from n to 1) - using while loop
*/

int main()
{
    int n=0;
    printf("Welcome to the natural number printer!!\n");
    printf("Please enter the number till which you want to print the natural numbers: ");
    scanf("%d",&n);
    int i=n;
    while(i>=1)
    {
        printf("%d \n",i);
        i--;
    };

    return 0;
}