#include<stdio.h>
/*
10. Write a program to find largest among three no using 
nested if statement
*/

int main()
{
    int num1=0,num2=0,num3=0;

    //input
    printf("Welcome to the size calculator!!");
    printf("Enter the first number: ");
    scanf("%d",&num1);
    printf("Enter the second number: ");
    scanf("%d",&num2);
    printf("Enter the third number: ");
    scanf("%d",&num3);

    //finding the largest number

    if(num1>num2)
    {
        if(num1>num3)
        {
            printf("The first number is the biggest, which is: %d",num1);
        };
        
    }
    else if(num2>num1)
    {
        if(num2>num3)
        {
        printf("The second number is the biggest, which is %d",num2);
        };
    }
    else{
        printf("The third number is the biggest, which is %d",num3);
    }
}