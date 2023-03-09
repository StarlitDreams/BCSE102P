#include<stdio.h>
/*
14. Write a program in c to check whether the no is prime or Not
*/
int main()

{
    int num=0;
    int flag=0;
    printf("Enter the number: ");
    scanf("%d",&num);
    for(int i=2;i<num;i++)
    {
        if(num%i==0)
        {
            flag=1;
            break;
        }
    }
    if(flag==0)
    {
        printf("The number is prime");
    }
    else
    {
        printf("The number is not prime");
    }
    return 0;
}