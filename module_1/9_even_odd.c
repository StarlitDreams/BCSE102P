#include<stdio.h>
/*
9. Write a program to find even and odd no by using if else statement.
*/

int main()
{
    int input=0;
     printf("Enter the value you want to test for even or odd: ");
     scanf("%d",&input);

     if (input%2==0)
     {
        printf("The number is even!");
     }
     else
    {
        printf("The number is odd!");
    };

    return 0;
}
