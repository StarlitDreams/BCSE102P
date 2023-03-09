#include<stdio.h>
/*
11. Write a program to take input of 5 subject . find total and
calculate percent. On the basis of percent provide grade like:
IF Per > 80 “A+”
Per >= 65 and per <=80 “A”
Per > =50 and per <=65 “B”
Per >= 42 and per <=50 “C”
Per < 42 “Fail

*/

int main()
{
    //Taking the input
    int i=0;
    int grade[5]={0,0,0,0,0};
    printf("Welcome to the grade calculator!!\n");

    //Taking the input
    while(i<=4)
    {   
        printf("Please enter the grade for subject %d : ",i+1);
        scanf("%d",&grade[i]);
        i++;
    }

    //Outputting the marks

    i=0;
    while(i<4)
    {   
        if(grade[i]>80)
        {
            printf("The grade for the subject %d is A+ \n",i+1);
            
        }
        else if (grade[i]>65&&grade[i]<=80)
        {
            printf("The grade for subject %d is A\n",i+1);
            
        }
        else if (grade[i]>50&&grade[i]<=65)
        {
            printf("The grade for the subject %d is B\n",i+1);
            
        }
        else if (grade[i]>42&&grade[i]<=50)
        {
            printf("The grade for the subject %d is C\n",i+1);
            
        }
        else
        {
            printf("The grade for the subject %d is FAIL\n");
            
        };

        i++;
        continue;
        return 0;
    }
}