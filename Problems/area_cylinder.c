/*Write a C program to calculate area and volume of cylinder*/

#include <stdio.h>
int main()
{
    int radius, height, area, volume;
    printf("Enter the radius of cylinder in meter.\n");
    scanf("%d", &radius);

    printf("Enter the height of cylinder in meter.\n");
    scanf("%d", &height);

    area = 2 * 3.14 * radius * (radius + height);
    volume = 3.14 * radius * radius * height;

    printf("The total surface area of cylinder is %d meter square.\n", area);
    printf("Volume of Cylinder is %d meter cube.\n", volume);

    return 0;
}