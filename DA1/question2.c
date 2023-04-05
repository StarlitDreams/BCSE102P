#include<stdio.h>

/*
Complete the function void update(int *a,int *b). It receives two integer pointers, int* a and int* b. Set the value of to their product, and to their sum. There is no return value, and no return statement is needed.
Input Format
The input will contain two integers, and , separated by a newline.
Output Format
Modify the two values in place and the code main() will print their values.
Case =1
Input=
4
5
Output=
20
9
Case =2
Input=
8
7
Output=
56
15
*/

void update( int *a , int *b)
{
    int temp1,temp2;
    temp1=*a * *b;
    temp2=*a + *b;

    *a=temp1;
    *b=temp2;

    printf("%d\n%d",*a,*b);
}

int main()
{
    int a , b;
    scanf("%d \n%d",&a,&b);
    update(&a,&b);

    return 0;
}