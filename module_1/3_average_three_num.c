#include<stdio.h>
/*
Write a program to find the average of three num
*/
int main()
{
    int num1=0,num2=0,num3=0;
    float avg=0;
    //Taking the inputs
    printf("Enter the first number: ");
    scanf("%d",&num1);
    printf("Enter the second number: ");
    scanf("%d",&num2);
    printf("Enter the third nuber: ");
    scanf("%d",&num3);
    
    //Calculating the Average and printing it
    avg=(num1+num2+num3)/3;
    printf("The average is %f",avg);
    

}