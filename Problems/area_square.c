// Write a C program to find area of  square.

#include <stdio.h>
int main()
{
    int side, area;
    printf("Enter side of square\n");
    scanf("%d", &side);

    area = side * side;

    printf("Area of Square is %d\n", area);
    return 0;
}    