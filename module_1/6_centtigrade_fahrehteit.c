#include<stdio.h>

/*
6. Write a program in c to convert the temperature centigrade into fahreheit
*/
int main()
{
    float temp=0;
    printf("Enter the temperature in fathenheit: ");
    scanf("%f",&temp);
    printf("The temperature in degrees is: %f", (temp * 1.8) + 32);
    return 0;

}