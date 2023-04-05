/*
A Valedictory function has been arranged to greet the Highest paid salary employee to encourage 
his efforts Write a C program to accept details of 'n' Employee (E. No, Emp Name, Salary) and display the 
details of employee having highest salary. Use array of structure.
*/

#include <stdio.h>
struct Employee 
{
    int e_no;
    char name[50];
    float salary;
};
int main() 
{
    int n;
    printf("How many employee details entered: ");
    scanf("%d", &n);
    struct Employee employees[n];
    struct Employee highest;
    for (int i = 0; i < n; i++) 
    {
        printf("Enter the details of Employee%d:\n", i+1);
        printf("Employee No: ");
        scanf("%d", &employees[i].e_no);
        printf("Employee name: ");
        scanf("%s", employees[i].name);
        printf("Salary: ");
        scanf("%f", &employees[i].salary);
    if (i == 0 || employees[i].salary > highest.salary) 
    {
        highest = employees[i];
    }
    }
    printf("\nHighest salary Employee Details\n");
    printf("Emp no\tName\tSalary\n");
    printf("%d\t%s\tRs.%.2f\n", highest.e_no, highest.name, highest.salary);
    return 0;
}