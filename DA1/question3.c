/*
3. Using pointer, write a C program that reads a character string and a character as input and deletes all occurrence of this character in the string. 
The program should display the corrected string with no holes.
Input format
The input will contain a string and a character, both are separated by a newline.
Output format
The corrected string. Case =1
Input=
Hello World
o
Output=
Hell Wrld
Case =2
Input=
C Programming
m
Output=

*/

#include<stdio.h>
#include<string.h>

int main()
{
    char input[25],escape;
    gets(input);
    scanf("%c",&escape);
    
    for(int i=0;i<strlen(input);++i)
    {
        if(input[i]!=escape)
        {
            printf("%c",input[i]);
        }
    }
    
    return 0;
}