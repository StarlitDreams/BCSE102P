#include<stdio.h>
/*
20. Write a c program to show the use of static variable.
*/
#include <stdio.h>
void increment() 
{
    static int count = 0;
    count++;
    printf("Count = %d\n", count);
}
int main() 
{
    increment();
    increment();
    increment();
    return 0;
}