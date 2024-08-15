#include <stdio.h>

float area_circle(float radius);
float area_square(float side);
float area_rectangle(float length, float breadth);
float area_triangle(float base, float height);
float area_parallelogram(float base, float height);

int main()
{
    int choice;
    float radius, side, length, breadth, base, height;
    while (choice != 6)
    {
        printf("#Choose the option from below :\n");
        printf("1.Area of circle\n");
        printf("2.Area of square\n");
        printf("3.Area of rectangle\n");
        printf("4.Area of triangle\n");
        printf("5.Area of parallelogram\n");
        printf("6.Exit Program\n\n");
        printf("Your Response : ");

        scanf("%d", &choice);

        switch (choice)
        {
        case 1:
            printf("Enter radius of circle : ");
            scanf("%f", &radius);
            printf("The area of circle is %f\n\n", area_circle(radius));
            break;

        case 2:
            printf("Enter side of square : ");
            scanf("%f", &side);
            printf("The area of square is %f\n\n", area_square(side));
            break;
        case 3:
            printf("Enter length of rectangle : ");
            scanf("%f", &length);
            printf("Enter breadth of rectangle : ");
            scanf("%f", &breadth);
            printf("The area of rectangle is %f\n\n", area_rectangle(length, breadth));
            break;
        case 4:
            printf("Enter base of triangle : ");
            scanf("%f", &base);
            printf("Enter height of triangle : ");
            scanf("%f", &height);
            printf("The area of triangle is %f\n\n", area_triangle(base, height));
            break;
        case 5:
            printf("Enter base of parallelogram : ");
            scanf("%f", &base);
            printf("Enter height of parallelogram : ");
            scanf("%f", &height);
            printf("The area of parallelogram is %f\n\n", area_parallelogram(base, height));
            break;
        case 6:
            printf("Exiting program.\nGoodbye !!!\n\n");
            break;

        default:
            printf("Choose valid option between (1 to 6)\n\n");
            break;
        }
    }

    return 0;
}

float area_circle(float radius)
{
    return 3.14 * radius * radius;
}

float area_square(float side)
{
    return side * side;
}

float area_rectangle(float length, float breadth)
{
    return length * breadth;
}

float area_triangle(float base, float height)
{
    return 0.5 * base * height;
}

float area_parallelogram(float base, float height)
{
    return base * height;
}