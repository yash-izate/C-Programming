/*Write a C program to find grade of a student given his marks
based on given below.
 90 to 100 is A : 80 to 90 is B
 70 to 80 is C : 60 to 70 is D
 50 to 60 is E : Below 50 is Fail */

#include <stdio.h>
int main()
{
    int marks;

    printf("Enter Your Marks\n");
    scanf("%d", &marks);

    if (marks >= 90 && marks <= 100)
    {
        printf("Your Grade is A\n");
    }
    else if (marks < 90 && marks >= 80)
    {
        printf("Your Grade is B\n");
    }
    else if (marks < 80 && marks >= 70)
    {
        printf("Your Grade is C\n");
    }
    else if (marks < 70 && marks >= 60)
    {
        printf("Your Grade is D\n");
    }
    else if (marks < 60 && marks >= 50)
    {
        printf("Your Grade is E\n");
    }
    else if (marks < 50 && marks>=0)
    {
        printf("You are Fail\n");
    }
    else if (marks<0 || marks>100)
    {
        printf("Your Marks are Invalid");
    }

    return 0;
}