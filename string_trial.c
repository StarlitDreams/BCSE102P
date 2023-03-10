#include<stdio.h>

void main()
{
    char s[20];
    printf("Enter a string: ");
    scanf("%[^\n]s",s);
    printf("The string is: %s",s);

}