
/*
Write a C-program to create student structure having field roll_no, stud_name, Course. Pass this entire structure to function and display the structure elements.
Sample input:
Enter Student details:
Roll no: 45
Name: Ram
Course:BCSE
OUTPUT:
Student Detail:
Roll no: 45
Name: Ram
Course:BCSE
*/
#include<stdio.h>
struct student
{
    int roll_no;
    char stud_name[25];
    char course[7];
};

int main()
{
    struct student data;
    printf("Enter the Student details: ");
    printf("\nRoll no: ");
    scanf("%d",&data.roll_no);
    printf("Name: ");
    scanf("%s",&data.stud_name);
    printf("Course: ",&data.course);
    scanf("%s",data.course);

    printf("\nStudent Detail: ");
    printf("\nRoll no: %d",data.roll_no);
    printf("\nName: %s",data.stud_name);
    printf("\nCourse: %s",data.course);


    return 0;
  
}