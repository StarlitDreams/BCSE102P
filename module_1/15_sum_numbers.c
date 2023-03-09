#include<stdio.h>

/*
15. Write a program in c to sum
*/
int main()
{
    int num=0;
    int sum=0;
    printf("Enter the number: ");
    scanf("%d",&num);
    for(int i=1;i<=num;i++)
    {
        sum=sum+i;
    }
    printf("The sum is %d",sum);
    return 0;
}