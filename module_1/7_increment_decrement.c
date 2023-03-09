#include <stdio.h>

/*
7. Write a program in c for increment and decrement operator
*/
int main() 
{
   int num=0; 
   printf("Please enter a number: ");
   scanf("%d",&num);
   printf("First the number is number is printed, then it's incremented(num++), the output: %d\n", num++);
   num=num-1;
   printf("First the number is incremented,then it's printed(++num), the output: %d\n", ++num);

   return 0;
}
