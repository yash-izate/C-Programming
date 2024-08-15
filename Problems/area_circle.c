// Write a C program to find area of circle.

#include <stdio.h>
int main()
{
    float radius;
    printf("Enter Radius of Circle\n");
    scanf("%f", &radius);

    float area = 3.14 * radius * radius;
    printf("Area of circle is %f\n", area);
    return 0;
}               