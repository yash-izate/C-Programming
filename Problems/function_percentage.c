/*Program to find percentage of student from Marks in Science,
Maths and Sanskrit*/

#include <stdio.h>
float cal_percent(float science, float math, float sanskrit);

int main()
{
    float science, math, sanskrit;
    printf("Enter marks in science : ");
    scanf("%f", &science);
    printf("Enter marks in maths : ");
    scanf("%f", &math);
    printf("Enter marks in sanskrit : ");
    scanf("%f", &sanskrit);

    printf("Your percentage is %f", cal_percent(science, math, sanskrit));
    return 0;
}

float cal_percent(float science, float math, float sanskrit)
{
    return (science + math + sanskrit) / 3;
}