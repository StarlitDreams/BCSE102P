#include<stdio.h>
/*
Write a C program to print all alphabets from a to z, while while loop.
*/
int main()
{
    char i='a';
    while(i<='z')
    {
        printf("%c \n",i);
        i++;
    };
    return 0;
}