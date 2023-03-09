#include<stdio.h>
/*
17. Write a program in c to check Amstrong number
*/
int main()
{
    int num=0;
    int sum=0;
    int temp=0;
    printf("Enter the number: ");
    scanf("%d",&num);
    temp=num;
    while(temp!=0)
    {
        int rem=temp%10;
        sum=sum+(rem*rem*rem);
        temp=temp/10;
    }
    if(sum==num)
    {
        printf("The number is Armstrong");
    }
    else
    {
        printf("The number is not Armstrong");
    }
    return 0;
}