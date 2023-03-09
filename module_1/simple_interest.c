#include <stdio.h>

/*
    Write a program to calculate the simple interest.
*/
int main()
{
    int principle=0,rate=0,time=0,interest=0;
    printf("Please input the principle: ");
    scanf("%d",principle);
    printf("\nPlease input the rate: ");
    scanf("%d",rate);
    printf("\nPlease input the time: ");
    scanf("%d",time);
    interest=(principle+rate+time)/100;
    printf("The interest is %d",interest);
}