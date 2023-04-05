/*
Suppose Richard wish to enter a list of country name into the computer, rearrange them into alphabetical order, and then display the rearranged list. 
Richard made the skeletal of the C program shown below. Complete the function reorder(int n, char *x[])to help Richard for his task.
Input format
The input will contain list of country, and separated by a newline.
Output format
Display the list of country in alphabetically order.
Case =1
Input=
India
Auckland
Britain
Zimbabwe
Australia
END
Output:
Auckland
Australia
Britain
India
Zimbabwe
*/

#include<stdio.h>
#include<stdlib.h>
#include<string.h>

int compare(const void *a, const void *b) 
{
    return strcmp(*(const char**)a, *(const char**)b);
}
void reorder(int n, char *x[]) 
{
    qsort(x, n, sizeof(char*), compare);
}
int main()
{
    char *x[100];
    int n = 0;
    char line[100];
    while (1) 

    {
        fgets(line, 100, stdin);
        if (strcmp(line, "END\n") == 0) 
            {
                 break;
            }
    x[n] = malloc(strlen(line)+1);
    strcpy(x[n], line);
    n++;

    }

    reorder(n, x);
    for (int i = 0; i < n; i++)
    {
        printf("%s", x[i]);
        free(x[i]);
    }
    return 0;
}