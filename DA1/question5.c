

/*
Write a function day_name() that receive a number n and return a pointer to a character string containing the name of the corresponding day. 
The day names should be kept in a static table of character strings local to the function.
Input format
The first line contains the integer n.
Output format
The corresponding character string
Case =1
Input=
2
Output=
Tuesday
Case =2
Input=
1
Output=
Monday
*/
#include <stdio.h>
char *day_name(int n) 
{
    static char *names[] = {"Monday", "Tuesday", "Wednesday", "Thursday", "Friday", "Saturday", "Sunday"};
    return names[n-1];
}

int main() 
{
    int n;
    scanf("%d", &n);
    printf("%s\n", day_name(n));
    return 0;

}