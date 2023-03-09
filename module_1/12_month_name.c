#include<stdio.h>
/*
12. Write a program in C to read any Month Number in integer and display Month name in. the word.(using switch
*/
int main()
{
    int month=0;
    printf("Enter the month number: ");
    scanf("%d",&month);
    switch(month)
    {
        case 1:
            printf("January");
            break;
        case 2:
            printf("February");
            break;
        case 3:
            printf("March");
            break;
        case 4:
            printf("April");
            break;
        case 5:
            printf("May");
            break;
        case 6:
            printf("June");
            break;
        case 7:
            printf("July");
            break;
        case 8:
            printf("August");
            break;
        case 9:
            printf("September");
            break;
        case 10:
            printf("October");
            break;
        case 11:
            printf("November");
            break;
        case 12:
            printf("December");
            break;
        default:
            printf("Invalid month number");
    }
    return 0;
}