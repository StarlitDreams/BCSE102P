#include<stdio.h>

/*
C program to find the power of any number for using loop
*/

int main()
{
    int num=0,power=0,output=1;
    printf("Welcome to the power calculator!! ");
    printf("Please enter a number: ");
    scanf("%d",&num);
    printf("Please enter the power you want to calculate: ");
    scanf("%d",&power);
    for(int i=0;i<power-1;i++)
    {
        output= output*num;
    };
    printf("The power is: %d",output);

    return 0;
}