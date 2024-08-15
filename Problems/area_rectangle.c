/*Write a C program to calculate area of rectangle*/

#include <stdio.h>
int main()
{
    float length, breadth, area;

    printf("Give the length of rectangle\n");
    scanf("%f", &length);

    printf("Give the breadth of rectangle\n");
    scanf("%f", &breadth);

    area = length * breadth;

    printf("The area of rectangle is %f", area);

    return 0;
}