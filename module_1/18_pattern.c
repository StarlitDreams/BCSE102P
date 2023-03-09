#include<stdio.h>
/*
18Write a c program to following pattern:
1
1 2
1 2 3
1 2 3 4
*/

int main()
{
    int num=0;
    printf("Enter the number: ");
    scanf("%d",&num);
    for(int i=1;i<=num;i++)
    {
        for(int j=1;j<=i;j++)
        {
            printf("%d ",j);
        }
        printf("\n");
    }
    return 0;
}