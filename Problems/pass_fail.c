/*Write a C program to find out wether a student is pass or fail, if it requires
total 40 percent and at least 33 percent in each subject to pass.
Assume 3 subjects and take marks from user.*/

#include <stdio.h>
int main()
{
    int physics, chemistry, maths;
    float total;

    printf("Enter Physics Marks\n");
    scanf("%d", &physics);

    printf("Enter Chemistry Marks\n");
    scanf("%d", &chemistry);

    printf("Enter Maths Marks\n");
    scanf("%d", &maths);

    total = (physics + chemistry + maths) / 3;

    if (total < 40 || physics < 33 || chemistry < 33 || maths < 33)
    {
        printf("Your total marks are %f and You are Fail", total);
    }
    else
    {
        printf("Your total marks are %f and You are Pass", total);
    }

    return 0;
}