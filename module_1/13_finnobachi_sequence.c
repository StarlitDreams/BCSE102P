#include<stdio.h>
/*
13.Write a program to find Fibonacci series upto n terms
*/
int main()

{
    int num=0;
    int a=0,b=1,c=0;
    printf("Enter the number of terms: ");
    scanf("%d",&num);
    printf("Fibonacci series: %d %d ",a,b);
    for(int i=0;i<num-2;i++)
    {
        c=a+b;
        printf("%d ",c);
        a=b;
        b=c;
    }
    
    return 0;

}